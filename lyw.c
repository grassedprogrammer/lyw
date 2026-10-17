#include "lyw.h"
static lyw_id_t lyw_global_entity_count = 0;
struct lyw_entity lyw_new_entity(char* name, struct lyw_position pos, lyw_id_t type){
 struct lyw_entity entity;
 entity.id = lyw_global_entity_count;
 entity.name = name;
 entity.pos = pos;
 entity.type = type;
 lyw_global_entity_count = lyw_global_entity_count + 1;
 return entity;
}
struct lyw_entity* lyw_assign_new_entity(char* name, struct lyw_position pos, lyw_id_t type, struct lyw_entity* entity){
 if(name != NULL) entity->name = name;
 entity->pos = pos;
 entity->type = type;
 entity->id = lyw_global_entity_count;
 lyw_global_entity_count = lyw_global_entity_count + 1;
 return entity;
}
int lyw_main_game(int argc, char** argv){
 struct lyw_entity player;
 struct lyw_entity* entities;
 struct lyw_position starting_pos = {0, 0};

 player = lyw_new_entity();
}