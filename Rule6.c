#include <stdint.h>
#include "Rule6.h"

void Rule6(void)
{
#ifdef Rule_6_1
	#warning "Rule 6.1 not checked by IAR MISRA C tool
#endif
	
#ifdef Rule_6_2
	#warning "Rule 6.2 not checked by IAR MISRA C tool
#endif
	
#ifdef Rule_6_3
	int t;
	#warning "Rule 6.3 is disabled to allow test plan type"
#endif
	
#ifdef Rule_6_4
	struct s{
		int 			a:1;
		unsigned int 	b:2;
		signed int 		c:3;
		short 			d:4;
		char 			e:5;
	} bitfield1_t;
#endif
	
#ifdef Rule_6_5
	struct s{
		signed int 		a:1;
		signed int 		b:2;
		unsigned int 	c:1;
	} bitfield2_t;
#endif
}