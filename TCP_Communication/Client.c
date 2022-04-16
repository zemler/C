#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main(){

	// Socket Setup
	int network_socket;
	network_socket = socket(AF_INET, SOCK_STREAM, 0);

	//Binding
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(2137); //Port
	server_address.sin_addr.s_addr = INADDR_ANY;

	//Connect
	int connection_status = connect(network_socket, (struct sockaddr *) &server_address, sizeof(server_address));
	if (connection_status == -1){
		printf("[-] PROBLEM");
	}
	else{
		printf("[+] SUCESS\n");
	}

	//Listen
	char server_response[256];
	recv(network_socket, &server_response, sizeof(server_response), 0);

	//Print Data
	printf("DATA: %s\n", server_response);

	//Close Connection
	close(network_socket);


	return 0;
}
