#include <stdint.h>
#include "Rule5.h"

void Rule5(void)
{
#ifdef Rule_5_1
	uint32_t abcdefghijklmnopqrstuvwxyz123456789aaa3 = 0U;
	uint32_t abcdefghijklmnopqrstuvwxyz123456789aaa4 = 1U;
#endif
	
#ifdef Rule_5_2
	uin32_t var1 = 5U;
	{
		uint32_t var1 = 6U;
	}
#endif
	
#ifdef Rule_5_3
	{
		typedef char char_t;
	}
	{
		typedef unsigned char char_t;
	}
#endif
	
#ifdef Rule_5_4
	#warning "Rule 5.4(required) is not checked by IAR MISRA C tool
	#warning "A tag name shall be a unique identifier."
#endif
	
#ifdef Rule_5_5
	#warning "Rule 5.5(advisory) is not checked by IAR MISRA C tool
	#warning "No object or function identifier with static storage duration should be reused."
#endif

#ifdef Rule_5_6
	#warning "Rule 5.6(advisory) is not checked by IAR MISRA C tool
	#warning "No identifier in one namespace should have the same spelling as an identifier in another namespace, with the exception of structure member and union member names."
#endif
	
#ifdef Rule_5_7
	#warning "Rule 5.7(advisory) is not checked by IAR MISRA C tool
	#warning "No identifier name should be reused."
#endif	
}