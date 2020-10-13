#ifndef MACROS
#define MACROS

#define LENGTH(array) sizeof(array) / sizeof(array[0])
#define in ,
#define __foreach(var, array) int continue_loop_tmp=1; int tmp_int=1;for(unsigned int FOREACH_INDEX=0; FOREACH_INDEX < LENGTH(array) && continue_loop_tmp; FOREACH_INDEX++, tmp_int=1)for(var=array[FOREACH_INDEX]; tmp_int==1; tmp_int=0)
#define foreach(...) __foreach(__VA_ARGS__)

#define CONTINUE break
#define BREAK {continue_loop_tmp=0; break;}

#endif