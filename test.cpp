//#include <stdio.h>
#include <iostream>

class father
{
	private:
		int age;
		int HP;
	public:
		void set_age(int age_in)
		{
			age = age_in;
		}
		
		int get_age()
		{
			return age;
		}
		
		void cure();	 
};

void father::cure()
{
	HP+=10;
}

int main()
{
	father Bob;
	Bob.set_age(49);
	while(1)
	{
		Bob.cure();
//		printf("Bob has been cured");
	}
	return 0;
}
