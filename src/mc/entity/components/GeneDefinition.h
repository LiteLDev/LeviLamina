#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GeneDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GENEDEFINITION
public:
    GeneDefinition& operator=(GeneDefinition const&) = delete;
    GeneDefinition(GeneDefinition const&)            = delete;
    GeneDefinition()                                 = delete;
#endif

public:
    /**
     * @symbol ?addGeneticVariant\@GeneDefinition\@\@QEAAXAEBUGeneticVariant\@\@\@Z
     */
    MCAPI void addGeneticVariant(struct GeneticVariant const&);
    /**
     * @symbol ??1GeneDefinition\@\@QEAA\@XZ
     */
    MCAPI ~GeneDefinition();
};
