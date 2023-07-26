#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GeneticVariant {

public:
    // prevent constructor by default
    GeneticVariant& operator=(GeneticVariant const&) = delete;
    GeneticVariant()                                 = delete;

public:
    /**
     * @symbol ??0GeneticVariant\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI GeneticVariant(struct GeneticVariant const&); // NOLINT
    /**
     * @symbol ??1GeneticVariant\@\@QEAA\@XZ
     */
    MCAPI ~GeneticVariant(); // NOLINT
};
