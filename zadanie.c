void strcat(char *line,char *line_two);

int main(void)
{
  char line[100]="programming ";
  char line_two[]=" с";
  strcat(line,line_two);
  printf("%s",line);
  return 0;
}

void strcat(char *s,char *t)
{
  while ((*s++)!='\0')
    ;
  --s;
  while ((*s++=*t++)!='\0')
    ;
}