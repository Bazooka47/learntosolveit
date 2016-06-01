/* Write a Program entab that replaces strings of blanks by the minimum 
	number of tabs and blanks to acheive the same spacing.
   Use the same tab stops as for detab.
*/
#include<stdio.h>
#define TAB 8//default length tabstops takes
void main(void)
{
	int c,sp=0,tb=0;
	while((c=getchar())!=EOF)
	{
		if(c==' ')
		{
			++sp;//increments while c=' '
		}
		else //c!=' ',but sp has previous values
		{
                      if(sp==1)
			putchar(' ');
		      else if (sp>1)
			{				
					tb=sp/TAB;//(int/int)will be truncated thus when sp>tab then tb>0
					
				sp=sp-tb*TAB; //finding net blanks
				while(tb>0)
			{
				putchar('\t');
				--tb;
			}
			while(sp>0)
			{
				putchar('*');
				--sp;
			}
			}
		putchar(c);
		sp=0;
		}
	}
}
			
		
			for( ; nt > 0 ; --nt)
				putchar('\t');
			if( c == '\t')
				nb = 0;
			else
				for( ; nb > 0; --nb)
					putchar(' ');
			
			putchar(c);
			
			if(c == '\n')
				pos = 0;
			else if ( c == '\t')
				pos = pos + ( TABINC - (pos -1) % TABINC) - 1;
		}

	return 0;
}

