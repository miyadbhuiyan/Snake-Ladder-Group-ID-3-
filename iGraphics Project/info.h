//Done by Member-1(17.02.04.110)
//This header file used to create player structure and store player's information
#ifndef INFO_H_INCLUDED
#define INFO_H_INCLUDED
typedef struct
{
	char name[100];
	int score;
}Player;
Player player[5];
bool com(Player p1,Player p2)
{
	return p1.score>p2.score;
}
#endif