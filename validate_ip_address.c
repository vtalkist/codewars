int is_valid_ip(const char * addr) 
{
  char* copy = strdup(addr), delim[2] = ".", *istr = strtok(copy, delim);
  int i = 0;
  while(istr != 0)
  {
	if (atoi(istr) > 255 || atoi(istr) < 0 || atoi(istr) == 0 && *istr != '0' || *istr == '0' || strchr(istr, ' ') != 0)
		return 0;
	istr = strtok(0, delim);
        i++;
  }
  if(i != 4)
  	return 0;
  return 1;
}
