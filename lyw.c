#include <lyw.h>

struct lyw_entity lyw_new_entity(char* name, struct lyw_position pos, lyw_id_t type){
 static lyw_id_t id = 0;
 struct lyw_entity entity;
 entity.id = id;
 entity.name;
 id = id + 1;
 return entity
}
int lyw_main_game(int argc, char** argv);