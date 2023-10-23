#ifndef LINKED
#define LINKED

#include <stddef.h>
<<<<<<< HEAD
#include <stdlib.h>
#include <string.h>
=======
#include <string.h>
#include <stdlib.h>
>>>>>>> 09482b60abf586cdee1c6edb8735f26609cf8695

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
<<<<<<< HEAD
    char *str;
    unsigned int len;
    struct list_s *next;
=======
	char *str;
	unsigned int len;
	struct list_s *next;
>>>>>>> 09482b60abf586cdee1c6edb8735f26609cf8695
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
<<<<<<< HEAD
int _putchar(char c);
void free_list(list_t *head);
list_t *add_node_end(list_t **head, const char *str);
=======
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _putchar(char c);
>>>>>>> 09482b60abf586cdee1c6edb8735f26609cf8695

#endif /*LINKED*/
