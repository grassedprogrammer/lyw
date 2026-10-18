#ifndef LYW
#define LYW
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <limits.h>
/*just chill bro :)*/

/*local includes*/
#include "lyw_bool.h"
/*macros*/
#define Lyw_version 0
#define Lyw_update 0
#define Lyw_build 20261017UL
#define Lyw_stdstrsize 32
#define Lyw_stdnamesize stdstrsize
#define Lyw_long_NAN LONG_MIN
#define Lyw_undefined_type ULONG_MAX
#define Lyw_unknown_type (ULONG_MAX-1)
#define Lyw_entity_type_player 0
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
void lyw_ask_player(const char const* question);
char* lyw_get_string(size_t maxsize, FILE* file);
int lyw_main_game(int argc, char** argv);
#endif