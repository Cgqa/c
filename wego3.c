#include<stdio.h>
int main()
{
  char s[100];
  scanf("%s", &s);
  int i;
  int length = strlen(s);
  char ch;
  for ( i = 0; i < length; i++)
  {
    if (s[i]=='?')
    {
      
      
        for ( ch = 'a'; ch < 'z'+1; ch++)
        {
          if (i==0)
          {
            if (s[i+1]==ch)
            {
              continue;
            }
            else
            {
              s[i] = ch;
            }
            
            
          }
          else
          {
            if (ch==s[i-1]||ch==s[i+1])
            {
              continue;
            }
            else
            {
              s[i] = ch;
            }
            
            
          }
          
          
        }
        
      
      
    }
    
  }
  printf("%s",s);
  system("pause");
  return 0;
}