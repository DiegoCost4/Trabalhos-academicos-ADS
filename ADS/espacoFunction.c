void RetirarEspaco(char texto[])
{
	int i;
    for (i=0;i<strlen(texto);i++)
    {
		if (texto[i]==' ')
		{
			texto[i]='+';
		}
	}
}

void AtribuirEspaco(char texto[])
{
	int i;
	for (i=0;i<strlen(texto);i++)
	{
		if (texto[i]=='+')
		{
			texto[i]=' ';
		}
	}
}
