#ifndef XMALLOC_H
#define XMALLOC_H

#include <stddef.h>

/**
** \brief Malloc wrapper that exit on failure.
**
** \param size The size to malloc.
** \return The malloc return.
*/
void *xmalloc(size_t size);

/**
** \brief Calloc wrapper that exit on failure.
**
** \param nmemb The number of elements.
** \param size The size to calloc.
** \return The calloc return.
*/
void *xcalloc(size_t nmemb, size_t size);

/**
** \brief Realloc wrapper that exit on failure.
**
** \param ptr The mem pointer.
** \param size The size to realloc.
** \return The realloc return.
*/
void *xrealloc(void *ptr, size_t size);

/**
** \brief Free wrapper that fre and return null pointer.
**
** \param ptr A pointer to free.
** \return NULL.
*/
void *xfree(void *ptr);

/**
** \brief Free wrapper that fre and return null pointer and do free null
*pointers.
**
** \param ptr A pointer to free.
** \return NULL.
*/
void *xfree_null(void *ptr);

#endif /* !XALLOC_H */
