#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GeneDefinition {

public:
    // prevent constructor by default
    GeneDefinition& operator=(GeneDefinition const&) = delete;
    GeneDefinition(GeneDefinition const&)            = delete;
    GeneDefinition()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?addGeneticVariant\@GeneDefinition\@\@QEAAXAEBUGeneticVariant\@\@\@Z
     */
    MCAPI void addGeneticVariant(struct GeneticVariant const&);
    /**
     * @symbol ??1GeneDefinition\@\@QEAA\@XZ
     */
    MCAPI ~GeneDefinition();
    // NOLINTEND
};
