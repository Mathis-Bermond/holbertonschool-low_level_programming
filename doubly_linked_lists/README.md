# Doubly Linked Lists

Ce dossier contient des implémentations et des exemples de listes doublement chaînées en langage C. Une liste doublement chaînée est une structure de données où chaque élément (ou nœud) contient un pointeur vers l'élément précédent et l'élément suivant, permettant une navigation bidirectionnelle.

## Fichiers

- `0-print_dlistint.c` : Fonction pour afficher tous les éléments d'une liste doublement chaînée.
- `1-dlistint_len.c` : Fonction pour retourner le nombre d'éléments dans une liste doublement chaînée.
- `2-add_dnodeint.c` : Fonction pour ajouter un nouveau nœud au début d'une liste doublement chaînée.
- `3-add_dnodeint_end.c` : Fonction pour ajouter un nouveau nœud à la fin d'une liste doublement chaînée.
- `4-free_dlistint.c` : Fonction pour libérer une liste doublement chaînée.
- `5-get_dnodeint.c` : Fonction pour obtenir le nœud à une position donnée dans une liste doublement chaînée.
- `6-sum_dlistint.c` : Fonction pour calculer la somme de tous les éléments d'une liste doublement chaînée.
- `7-insert_dnodeint.c` : Fonction pour insérer un nouveau nœud à une position donnée dans une liste doublement chaînée.
- `8-delete_dnodeint.c` : Fonction pour supprimer un nœud à une position donnée dans une liste doublement chaînée.

## Utilisation

Chaque fichier contient une fonction spécifique pour manipuler des listes doublement chaînées. Vous pouvez compiler les fichiers individuellement en utilisant `gcc` et les inclure dans vos projets pour gérer des listes doublement chaînées.

Exemple de compilation :
```sh
gcc -Wall -Werror -Wextra -pedantic 0-print_dlistint.c -o print_dlistint
```

## Auteur

Ce projet a été réalisé par Bermond Mathis.
