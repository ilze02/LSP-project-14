/*
 * File:   Structures.h
 * Author: arseniuss
 */

#ifndef STRUCTURES_H
#define	STRUCTURES_H

#include <netinet/in.h>

#include "../common/Defaults.h"

struct Point {
	unsigned char x;
	unsigned char y;
};

struct Game {
	unsigned char field_width; /* 20 - 120 */
	unsigned char field_height; /* 20 - 80 */
	unsigned char snake_speed; /* 2 - 10 blocks/sec */
	unsigned char initial_size; /* 1 - 6 */
	unsigned char food_amount; /* 1 - 4 */
	unsigned char time_limit; /* 0 - 10 minutes */
	unsigned char score_limit; /* 5 - 15 points */
};

struct Server {
	char *server_ip;
	int port_no;
	unsigned char max_players; /* 1- 4 */
};

struct Player {
	int sockfd;
	struct sockaddr_in addr;

	unsigned char id;
	char username[MAX_USERNAME_LEN];
	int state; //0 - left, 1 - active, 2 - dead
};

#endif	/* STRUCTURES_H */
