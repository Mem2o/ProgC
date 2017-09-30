#include "../lib/libgraphique.h"
#include<stdio.h>

int main(int argc, char *argv[]){

    // début de la session graphique
    ouvrir_fenetre(800,600);
	/*************************************************************************/ 	
	Point p1 = {0,0};
	Point p2 = {0,600}; 	
	while (p1.x <= 800 && p2.x <= 800)
	{
	p1.x = p1.x+20;
	p2.x = p2.x+20;
	dessiner_ligne(p1,p2,blanc);
		
	}
	Point p3 ={0,0};
	Point p4 ={800,0};
	
	while (p3.y <= 600 && p4.y <= 600)
	{
	p3.y = p3.y + 20;
	p4.y = p4.y + 20;	
	dessiner_ligne(p3,p4,blanc);
	}
	actualiser();
	// trace le quadrialiage
	/****************************************************************************/


	/***************Fair apparaitre le carrer***************************************/
	int i = 0, j = 0;
	Point clique1 = {0,0};
	Point clique2 = {0,0};
	Point rclique1 = {0,0};
	Point rclique2 = {0,0};
	Point clique3 = {0,0};
	Point rclique3 = {0,0};
	while ( i != 3)
	{
	clique1 = attendre_clic ();
	rclique1.x = clique1.x - (clique1.x % 20);
	//on a le point en x
	rclique1.y = clique1.y - (clique1.y % 20);
	// on a le point en y
	dessiner_rectangle (rclique1,20,20,red);
	actualiser();
	/*****************************/
	clique2= attendre_clic();
	rclique2.x = clique2.x - (clique2.x % 20);
	//on a le point en x du 2 clique
	rclique2.y = clique2.y - (clique2.y % 20);
	// on a le point en y du 2 clique
		if ((rclique1.x == rclique2.x) && (rclique1.y == rclique2.y))
		{
		actualiser();
		attendre_clic();
		}
		else if ((rclique1.x != rclique2.x) || (rclique1.y != rclique2.y))
		{
		dessiner_rectangle (rclique1,20.,20,noir);
		actualiser();
		}
		dessiner_rectangle (rclique2,20,20,bleu);
		rclique1.x=0;
		rclique2.x=0;
		rclique1.y=0;
		rclique2.y=0;
	clique1 = clique2;
	clique1 = attendre_clic();
	/****************************************************************/

   /******************************************remettre le tableau propre ***************************/

	Point p1 = {0,0};
	Point p2 = {0,600}; 	
	while (p1.x <= 800 && p2.x <= 800)
	{
	p1.x = p1.x+20;
	p2.x = p2.x+20;
	dessiner_ligne(p1,p2,blanc);
		
	}
	Point p3 ={0,0};
	Point p4 ={800,0};
	
	while (p3.y <= 600 && p4.y <= 600)
	{
	p3.y = p3.y + 20;
	p4.y = p4.y + 20;	
	dessiner_ligne(p3,p4,blanc);
	}
	actualiser();
	
	actualiser();

	i++;
	}
	/***********************************************************************************/
    // fin de la session graphique
    attendre_clic();
    fermer_fenetre();
    return 0;
}
