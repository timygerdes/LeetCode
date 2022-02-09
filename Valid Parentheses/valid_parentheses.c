bool isValid(char * s){

    char *str = malloc(strlen(s) * sizeof(char));
    int i = 0;
    int j = 0;
    int isValid = 1;

    if (s[0] == '}' || s[0] == ')' || s[0] == ']')
        return (false);
	while (s[i] && isValid == 1)
	{
		if (s[i] == '(' || s[i] == '{' || s[i] == '[')
		{
            str[j] = s[i];
            j++;
		}
        else
        {
            if (j == 0)
                isValid = 0;
            else if (s[i] == ')' && str[j - 1] == '(')
            {
                j--;
                str[j] = '\0';
            }
            else if (s[i] == '}' && str[j - 1] == '{')
            {
                j--;
                str[j] = '\0';
            }
            else if (s[i] == ']' && str[j - 1] == '[')
            {
                j--;
                str[j] = '\0';
            }
            else
                isValid = 0;
        }
		i++;
	}
    if (isValid == 1 && j == 0)
        return (true);
    else
	    return (false);
}
