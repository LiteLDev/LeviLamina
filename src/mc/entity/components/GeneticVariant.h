#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GeneticVariant {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GENETICVARIANT
public:
    GeneticVariant& operator=(GeneticVariant const&) = delete;
    GeneticVariant()                                 = delete;
#endif

public:
    /**
     * @symbol ??0GeneticVariant\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI GeneticVariant(struct GeneticVariant const&);
    /**
     * @symbol ??1GeneticVariant\@\@QEAA\@XZ
     */
    MCAPI ~GeneticVariant();
};
