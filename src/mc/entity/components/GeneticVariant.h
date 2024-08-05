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
};
