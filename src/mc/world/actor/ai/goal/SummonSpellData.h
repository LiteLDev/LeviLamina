#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SummonSpellData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUMMONSPELLDATA
public:
    SummonSpellData() = delete;
#endif

public:
    /**
     * @symbol ??0SummonSpellData\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI SummonSpellData(struct SummonSpellData const&);
    /**
     * @symbol ??4SummonSpellData\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct SummonSpellData& operator=(struct SummonSpellData const&);
    /**
     * @symbol ??1SummonSpellData\@\@QEAA\@XZ
     */
    MCAPI ~SummonSpellData();
};
