#include<stdio.h>
#include<string.h>


char ans[500];
char *breakstring(char *s, int n)
{
	
	int i,flag=0,k=0;
	for(int i=0; i<n; i++)
	{
		if(s[i] == '$')
		{
			//Start searching the character
			flag = 1;
			ans[k++] = s[i];
		}
		if(flag == 1)
		{
			if(s[i] == '$')//Erase the previous string when $ encountered and start searching again
			{
				k = 0;
				strcpy(ans,"");
				ans[k++] = s[i];
			}
			else
			{
				if(s[i] == ';')
				{	//when ; encountered then return the saved string 
					ans[k++] = s[i];
					return ans;
				}
				else
				{
					//append the string until ; not encountered
					ans[k++] = s[i];

				}

			}	

		}	

	}
	return ans;
}



int main()
{

	FILE *fp = fopen("text.txt","r");//Read the file text.txt
	if(!fp)
	{
		printf("\n Unable to open the file.");
		return -1;
	}
	char str[500];	
	while (fgets(str, sizeof(str), fp))//Read file line by line
       	{

		printf("\nInput String: ");
   		printf("%s",str);
	
		int n = strlen(str);
		char *r = breakstring(str,n);
	
		printf("Required String is : ");
		printf(" %s\n", r);
		memset(r,0,strlen(r));//erase the string r
	}


	return 0;
}
