int strncmp( const char * str1, const char * str2, unsigned int  num )
{	
	int i;

	i = 0;
	while(str1)
	{
		if (!str1[i] == str2[i])
			return 0;
		i++;
	}
}
