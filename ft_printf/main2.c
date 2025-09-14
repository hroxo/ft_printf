#include <stdio.h>                                                                                                                                                            
#include <limits.h>                                                                                                                                                           

int ft_printf(const char *format, ...);                                                                                                                                       

int main(void) {                                                                                                                                                              
	puts("=== Test 1: caractère normal non compté ===");                                                                                                                      
	ft_printf("A");                                                                                                                                                           
	printf("A");                                                                                                                                                              
	printf("\n");                                                                                                                                                             

	puts("=== Test 2: %s avec NULL (sans warning) ===");                                                                                                                      
	char *nulls = NULL;                                                                                                                                                       
	ft_printf("%s", nulls);                                                                                                                                                   
	printf("%s", nulls);                                                                                                                                                      
	printf("\n");                                                                                                                                                             

	puts("=== Test 3: %x avec 0xFFFFFFFF ===");                                                                                                                               
	unsigned int u = 0xFFFFFFFFu;                                                                                                                                             
	ft_printf("%x", u);                                                                                                                                                       
	printf("%x", u);                                                                                                                                                          
	printf("\n");                                                                                                                                                             

	puts("=== Test 4: %p NULL ===");                                                                                                                                          
	void *p = NULL;                                                                                                                                                           
	ft_printf("%p", p);                                                                                                                                                       
	printf("%p", p);                                                                                                                                                          
	printf("\n");                                                                                                                                                             

	puts("=== Test 5: mix texte + formats ===");                                                                                                                              
	ft_printf("X:%c Y:%s Z:%d\n", 'Q', "ok", -42);                                                                                                                            
	printf("X:%c Y:%s Z:%d\n", 'Q', "ok", -42);                                                                                                                               

	ft_printf("%");                                                                                                                                                           
	int ret_ft, ret_libc;

	ret_ft   = ft_printf("A");
	ret_libc = printf("A");

	printf("\n");
	printf("ft_printf returned: %d\n", ret_ft);
	printf("printf    returned: %d\n", ret_libc);                                                                                                                                                                      
	return 0;                                                                                                                                                                 
}
