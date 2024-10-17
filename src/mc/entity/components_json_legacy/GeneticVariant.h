#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GeneticVariant {
public:
    // prevent constructor by default
    GeneticVariant& operator=(GeneticVariant const&);
    GeneticVariant();

public:
    // NOLINTBEGIN
    MCAPI GeneticVariant(struct GeneticVariant const&);

    MCAPI ~GeneticVariant();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct GeneticVariant const&);

    MCAPI void dtor$();

    // NOLINTEND
};
