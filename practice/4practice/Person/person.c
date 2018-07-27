#include"persion.h"

Person* new_Person(const char* const pFirstName, const char* const pLastName)
{
	Person* pObj = NULL;
	//allocatin memory
	pObj = (Person*)malloc(sizeof(Person));
	if(pObj == NULL)
	{
		return NULL;
	}
	//pointing to itself as we are creating base class object
	pObj->pDeriveObj = pObj;
	pObj->pFirstName = malloc(sizeof(char)*(strlen(pFirstName)+1));
	if(pObj->pFirstName == NULL)
	{
		return NULL;
	}
	strcpy(pObj->pFirstName,pFirstName);
}
