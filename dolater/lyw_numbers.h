#ifndef lyw_numbers
#define lyw_numbers
#include "lyw_bool.h"
#define lyw_stdnum_precision 128u
struct lyw_num{
 unsigned char *num;
 size_t precision;
 long power;/*scientic power stuff i gueess*/
};
lyw_bool lyw_num_isdefined(struct lyw_num num);
struct lyw_num* lyw_new_num(const size_t precision, const long power);
char* lyw_num_to_str(const struct lyw_num num);
#endif