#include <stdio.h>
int main()
{
	int  i, j, Count;            	
    int a[15]={2,6,10,14,18,10,3,7,11,15,19,3,7,10,14}, Freq[15];           
	for (i = 0; i < 15; i++)
	{
		Count = 1;
		for(j = i + 1; j < 15; j++)
		{
    		if(a[i] == a[j])   
    		{
    			Count++;
    			Freq[j] = 0;    
    		}
    	}
    	if(Freq[i] != 0)       
    		Freq[i] = Count;
	}
 	for (i = 0; i < 15; i++)
  		if(Freq[i] != 0)        
            printf("%d : %d\n", a[i], Freq[i]);

 	return 0;
}