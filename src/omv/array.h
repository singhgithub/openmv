/*
 * This file is part of the OpenMV project.
 * Copyright (c) 2013/2014 Ibrahim Abdelkader <i.abdalkader@gmail.com>
 * This work is licensed under the MIT license, see the file LICENSE for details.
 *
 * Dynamic array.
 *
 */
#ifndef __ARRAY_H__
#define __ARRAY_H__
struct array;
typedef struct array array_t;
typedef void (*array_dtor)(void*);
typedef int  (*array_comp)(const void*, const void*);
void array_alloc(struct array **array, array_dtor dtor);
void array_alloc_init(struct array **array, array_dtor dtor, int size);
void array_free(struct array *array);
int array_length(struct array *array);
void *array_at(struct array *array, int index);
void array_push_back(struct array *array, void *value);
void *array_pop_back(struct array *array);
void array_sort(struct array *array, array_comp);
void array_erase(struct array *array, int index);
void array_resize(struct array *array, int index);
#endif //__ARRAY_H__
