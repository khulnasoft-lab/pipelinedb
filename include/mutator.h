/*-------------------------------------------------------------------------
 *
 * mutator.h
 *	  Interface for mutating parse trees
 *
 * Copyright (c) 2023, KhulnaSoft-Labs, Inc.
 *
 *-------------------------------------------------------------------------
 */
#ifndef PIPELINE_MUTATOR_H
#define PIPELINE_MUTATOR_H

#include "nodes/parsenodes.h"

extern Node * raw_expression_tree_mutator(Node *node, Node *(*walker) (),
									   void *context);

#endif
