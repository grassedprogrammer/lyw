#ifndef LYW
#define LYW
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*just chill bro :)*/

/*local includes*/
#include <lyw_bool.h>
/*macros*/
#define Lyw_version 0
#define Lyw_update 0
#define Lyw_build 20261017UL
#define Lyw_stdnamesize 32
/*typedefs*/
typedef unsigned long int lyw_id_t;
/*structs*/
struct lyw_position{
 long x, y;
};
struct lyw_entity{
 char name;
 struct lyw_position pos;
 lyw_id_t type;
 lyw_id_t id;
};
/*functions*/

struct lyw_entity lyw_new_entity(char* name, struct lyw_position pos, lyw_id_t type);
struct lyw_entity* lyw_assign_new_entity(char* name, struct lyw_position pos, lyw_id_t type, struct lyw_entity* entity);
int lyw_main_game(int argc, char** argv);
#endif