#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GeneDefinition {
public:
    // prevent constructor by default
    GeneDefinition& operator=(GeneDefinition const&);
    GeneDefinition(GeneDefinition const&);
    GeneDefinition();

public:
    // NOLINTBEGIN
    MCAPI void addGeneticVariant(struct GeneticVariant const& geneticVariant);

    MCAPI ~GeneDefinition();

    // NOLINTEND
};
