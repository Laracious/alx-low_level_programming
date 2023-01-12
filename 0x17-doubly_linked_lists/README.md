# C - Doubly linked lists

## Learning objectives

### - What is a doubly linked list
### - How to use doubly linked lists

## Requirements

### - All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
### - Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
### - The only C standard library functions allowed are malloc, free, printf and exit.

## Structure for this project: 

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

## **Tasks**

### 0.print list

Write a function that prints all the elements of a dlistint_t list.

- Prototype: size_t print_dlistint(const dlistint_t *h)
- Return: the number of nodes

### 1. List length

#### Write a function that returns the number of elements in a linked dlistint_t list.
- Prototype: size_t dlistint_len(const dlistint_t *h);

### 2. Add node

#### Write a function that adds a new node at the beginning of a dlistint_t list- Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
- Return: the address of the new element, or NULL if it failed

### 3. Add node at the end
#### Write a function that adds a new node at the end of a dlistint_t list.
- Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
- Return: the address of the new element, or NULL if it failed

### 4. Free list
#### Write a function that frees a dlistint_t list.

- Prototype: void free_dlistint(dlistint_t *head);

