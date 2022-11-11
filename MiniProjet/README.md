# Description du projet
- Reprise du jeu Arkanoid
- Ajout de différentes briques bonus de couleurs différentes
* Brique YELLOW de type 1: Augmente la taille de la balle
* Brique BLUE de type 2: Augmente la vitesse de la balle
* Brique PURPLE de type 3: Détruit les briques adjacentes
* Brique RED de type 4: Diminue la taille du joueur
* Brique GREEN de type 5: Augmente la taille du joueur
- La taille et la vitesse de la balle sont réinitialisées à chaque vie

- compil: gcc -o arkanoid arkanoid.c -Wall -std=c11 /home/bot/Raylib.git/src/libraylib.a -lm -ldl -lrt -lpthread -lGL -lX11