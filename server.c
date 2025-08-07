#include<stdio.h>
#include<sys/types.h>
//#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>

void *server_thread(void *arg)
{
    int client_sockfd;
    char instr[80],name[80];
    int count=0;
    client_sockfd=(intptr_t)arg;
    count=read(client_sockfd,instr,20);
    instr[count]='\0';
    printf("input from client %s\n",instr);
    strcpy(name,"THANK YOU");
    strcat(name,instr);
    strcpy(instr,name);
    write(client_sockfd,instr,strlen(instr)+1);
    close(client_sockfd);
    pthread_exit(NULL);
}

int main()
{
    int server_sockfd,client_sockfd;
    int server_len,client_len;
    struct sockaddr_in server_address;
    struct sockaddr_in client_address;
    pthread_t t;
    server_sockfd=socket(AF_INET,SOCK_STREAM,0);
    server_address.sin_family=AF_INET;
    server_address.sin_addr.s_addr=inet_addr("127.0.0.1");
    server_address.sin_port=9129;
    server_len=sizeof(server_address);
    if(bind(server_sockfd,(struct sockaddr*)&server_address,server_len)==-1)
    {
        printf("server error");
        exit(1);
    }
    printf("server waiting...\n");
    listen(server_sockfd,5);
    while(1)
    {
        client_len=sizeof(client_address);
        client_sockfd=accept(server_sockfd,(struct sockaddr*)&client_address,&client_len);
        //accept is a system call
        printf("created new client thread\n");
        pthread_create(&t,NULL,server_thread,(void *)(intptr_t)client_sockfd);
    }
    return 0;
}
