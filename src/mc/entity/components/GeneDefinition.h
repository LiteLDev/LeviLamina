#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GeneDefinition {

public:
    // prevent constructor by default
    GeneDefinition& operator=(GeneDefinition const&) = delete;
    GeneDefinition(GeneDefinition const&)            = delete;
    GeneDefinition()                                 = delete;

public:
    /**
     * @symbol ?addGeneticVariant\@GeneDefinition\@\@QEAAXAEBUGeneticVariant\@\@\@Z
     */
    MCAPI void addGeneticVariant(struct GeneticVariant const&); // NOLINT
    /**
     * @symbol ??1GeneDefinition\@\@QEAA\@XZ
     */
    MCAPI ~GeneDefinition(); // NOLINT
};
