#AI BEHAVIOR EDITOR: Edition d’etats machines simples pour IA.

##I-	Le problème résolu :
1-	Problèmes vis-à-vis du code :
-	Rendre le code plus lisible.
-	Séparer de façon claire les comportements.
-	Facilite la maintenance.
2-	Problèmes vis-à-vis de l’IA déployée :
-	Il devient plus facile de comprendre le comportement de l’Ia(L’etat courant, la transition).
-	Possibilité de modifier l’IA sans tout recompiler.
-	Code réutilisable pour d’autres (robots, simulation ,etc …..).
-	Il est facile de faire evoluer une IA ou d’ajouter d’autres etats.
II-	Utilités du projet :
	Simulation et industries :
•	Machines automatiques
•	Processus industriels
•	Feux de signalisation
	IA simples/ systemes experts :
o	Systèmes de décision
o	Agents intelligents(voitures, maisons, robots)
o	Distributeurs automatiques
o	Jeux et loisirs
III-	Architecture technique :

-	Le main.cpp : C’est le point de demarrage du programme, Il initialise l’application, et il lance la boucle principale.
-	App.cpp : C’est la partie principale où se produit l’initialisation des modules, la connexion de la GUI avec la logique IA, et la gestion de la boucle principale.
-	GUI.cpp : gère la visualisation des états, l’interface utilisateur, et la modification des transitions.
-	Core/ : 
•	Core/State.cpp : Représente un etat abstrait.
•	Core/ConcreteStates/
•	Core/Transition.cpp : Définit quand changer déetat.
•	Core/StateMachine.cpp : le moteur FSM(Finite state machine)
-	Utils/ : Outils transverses : Qui sont des fonctions réutilisable parttout sans logique métiers.
•	Logger
•	Parser fichiers
•	Timer
•	Helpers string
-	Assets/ : Permet de stocker les comportements définis par l’utilisateur.
-	Thirdparty/ : Dépendances externes(séparation propre du code maison)
-	Build.py : Système de build pour compiler le projet, lier les bibliothèques et automatiser la construction
-	README.md : La documentation, description du projet, architecture .

IV-	Comment Build/executer :

-	Installer et vérifier la version de python
-	Installer et vérifier la version de clang++
-	‘’ python build.py ‘’ pour lancer la compilation
-	Application.exe pour executer.
 	Ainsi, le projet est compilé via un script python qui invoque directement le compilateur C++(clang++), ce qui permet une exécution multiplateforme simple sans dépendre de cmake.

V-	Raccourcis claviers :
Raccourcis cœur de l’editeur(machine à etats) :
ACTION	RACCOURCI
Ajouter un état	A
Supprimer un état	Suppr
Renommer un état	F2
Ajouter une transition	T
Supprimer une transition	Shift+suppr
Duppliquer un état	Ctrl+D
Sélection multiple	Shift+clic

	Raccourcis pour la navigation dans le graphe :		
ACTION 	RACCOURCI
Déplacer la vue	Clic molette+drag
Zoom avant	Molette+Avant
Zoom arrière	Molette+arrière
Centrer la vue 	F
Réinitialiser le Zoom	Ctrl+0
Sélectionner tout	Ctrl+A

	Raccourcis IA/Simulation
ACTION	RACCOURCI
Lancer la simulation	space
Pause simulation	space
Pas à pas(step)	S
Reset IA	R
Changer état manuellement	1-9
Activer debug	D


	Raccourcis fichier & export
ACTION	RACCOURCI
Export FSM(JSON)	Ctrl+E
Import FSM	Ctrl+I
Recharger fichier	Ctrl+R
Générer code C++	Ctrl+G

VI-	Extensions possibles :

1-	Extensions IA et logiques
	Etats hiérarchiques
	Timers & delais
	Priorité des transitions
	Conditions complexes
2-	Performance architecture
	Multi-agents
	Systèmes de plugins
	Simulation IA
3-	Données et formats
	Support JSON/YAML/XML
	Validation automatique
	Génération automatique de code
4-	Extensions Editeur&UX(ce que l’utilisateur voit )
	Drags & Drop des etats
	Coloration des etats
	Mini-map du garp
5-	Simulation et debug
	Simulation en temps réel
	Mode pas à pas
	Historique des états

 




