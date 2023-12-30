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
    // symbol: ?addGeneticVariant@GeneDefinition@@QEAAXAEBUGeneticVariant@@@Z
    MCAPI void addGeneticVariant(struct GeneticVariant const& geneticVariant);

    // symbol: ??1GeneDefinition@@QEAA@XZ
    MCAPI ~GeneDefinition();

    // NOLINTEND
};
