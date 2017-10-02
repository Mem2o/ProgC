#include "../lib/libgraphique.h"
#include<stdio.h>

int main(int argc, char *argv[]){

    // début de la session graphique
    ouvrir_fenetre(800,600);
	/*************************************************************************/ 	
	Point p1 = {0,0};
	Point p2 = {0,600};
	Point calcul={0,0};
	int x;
	while (p1.x <= 800 && p2.x <= 800)
	{
	p1.x = p1.x+20;
	p2.x = p2.x+20;
	dessiner_ligne(p1,p2,blanc);
	calcul.x = p1.x / 20 ;	
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
	/****************Dessiner le dammier***********************************************/
	x=0;
	Point p5 = {0,0};
	for (p5.y = 0; p5.y<=600; p5.y +=20)
	{
	 for (p5.x = 0; p5.x<=800; p5.x +=20)
	 {
	 	if (x%2==0)
	 	{
	 	dessiner_rectangle(p5,20,20,gris);
		}
		else 
		{
		dessiner_rectangle(p5,20,20,vert);
		}
	x++;
	}
	actualiser();
	
	}
	/***************Fair apparaitre le carrer***************************************/
	int i = 0;
	Point clique1 = {0,0};
	Point rclique1 = {0,0};
	/********************************Fonction****************************************/
	clique1 =attendre_clic();	
	while ( i != 10)
	{
	rclique1.x = clique1.x - (clique1.x % 20);
	//on a le point en x
	rclique1.y = clique1.y - (clique1.y % 20);
	// on a le point en y
	dessiner_rectangle (rclique1,20,20,red);
	actualiser();
	
	clique1 = attendre_clic();
	dessiner_rectangle (rclique1,20,20,noir);
	rclique1.x = clique1.x - (clique1.x % 20);
	//on a le point en x
	rclique1.y = clique1.y - (clique1.y % 20);
	// on a le point en y
	dessiner_rectangle (rclique1,20,20,red);
	actualiser();
	i++;
	/**************************remetre le graphique au propre*****************************/	
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
	}


	/***********************************************************************************/
    // fin de la session graphique
    attendre_clic();
    fermer_fenetre();
    return 0;
}
