#include <LPC214x.h>
#include "pll.h"
void init_pll(){
	PLL0CON=0X01;
	PLL0CFG=0X24;
	PLL0FEED=0Xaa;
	PLL0FEED= 0X55;
	while(!(PLL0STAT & (1<<10)));
	PLL0CON=0X03;
	PLL0FEED=0Xaa;
	PLL0FEED=0X55;
	VPBDIV=0X01;
}