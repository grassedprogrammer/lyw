#include "lyw.h"
#include <string.h>
#include <stdio.h>
static lyw_id_t lyw_global_entity_count = 1;
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
 if(pos.x != Lyw_long_NAN) entity->pos.x = pos.x;
 if(pos.y != Lyw_long_NAN) entity->pos.y = pos.y;
 entity->type = type;
 entity->id = lyw_global_entity_count;
 lyw_global_entity_count = lyw_global_entity_count + 1;
 return entity;
}
lyw_bool lyw_is_position_undefined(struct lyw_position pos){
 if(pos.x == Lyw_long_NAN && pos.y == Lyw_long_NAN) return Lyw_true;
 return Lyw_false;
}
void lyw_make_position_undefined(struct lyw_position* pos){
 pos->x = Lyw_long_NAN;
 pos->y = Lyw_long_NAN;
 return;
}
void lyw_free_entity(struct lyw_entity* entity){
 entity->id = 0;
 free(entity->name);
 entity->name = NULL;
 lyw_make_position_undefined(&(entity->pos));
 entity->type = Lyw_entity_type_undefined;
 return;
}
void lyw_ask_player(const char* question){
 printf("\n%s? ", question);
}
char* lyw_get_string(size_t maxsize, FILE* file){
 char* out = calloc(maxsize, sizeof(char));
 if(out == NULL) return NULL;
 fgets(out, maxsize, file);
 return out;
}
int lyw_main_game(int argc, char** argv){
 struct lyw_entity player;
 /*struct lyw_entity* entities; - use later*/
 struct lyw_position origin_point = {0, 0};
 (void)lyw_assign_new_entity(NULL, origin_point, Lyw_entity_type_player, &player);
 player.name = NULL;
 printf("\n%s v%d.%d\n", Lyw_game_name, Lyw_version, Lyw_update);
 lyw_ask_player("name");
 player.name = lyw_get_string(Lyw_stdnamesize, Lyw_stdin);
 printf("Goodbye %s since this game currently has no stuff!\n", player.name);
 lyw_free_entity(&player);
 return EXIT_SUCCESS;
}