#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SummonSpellStage {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUMMONSPELLSTAGE
public:
    SummonSpellStage(SummonSpellStage const&) = delete;
    SummonSpellStage()                        = delete;
#endif

public:
    /**
     * @symbol ??4SummonSpellStage\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct SummonSpellStage& operator=(struct SummonSpellStage const&);
    /**
     * @symbol ??1SummonSpellStage\@\@QEAA\@XZ
     */
    MCAPI ~SummonSpellStage();
};
