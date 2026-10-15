#include <stdlib.h>
#include "lyw_numbers.h"

lyw_bool lyw_num_isdefined(struct lyw_num num){
 if(num.precision == 0)
  return lyw_false;
 else
  return lyw_true;
}
struct lyw_num* lyw_new_num(const size_t precision, const long power){
 if(precision == 0) return NULL;
 struct lyw_num* num = calloc(1, sizeof(struct lyw_num));
 if(num == NULL){
  free(num);
  return NULL;
 }
 num->num = calloc(precision, sizeof(unsigned char));
 if(num->num == NULL){
  free(num);
  return NULL;
 }
 num->precision = precision;
 num->power = power;
 return num;
}
char* lyw_num_to_str(const struct lyw_num num);
