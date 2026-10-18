#include "lyw.h"

int main(int argc, char** argv){
 printf("\nLyw version %d.%d.%lu", Lyw_version, Lyw_update, Lyw_build);
 printf("\nstarting game(%d) please wait...\n", argc);
 return lyw_main_game(argc, argv);
}