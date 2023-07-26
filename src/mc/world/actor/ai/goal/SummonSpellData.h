#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SummonSpellData {

public:
    // prevent constructor by default
    SummonSpellData() = delete;

public:
    /**
     * @symbol ??0SummonSpellData\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI SummonSpellData(struct SummonSpellData const&); // NOLINT
    /**
     * @symbol ??4SummonSpellData\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct SummonSpellData& operator=(struct SummonSpellData const&); // NOLINT
    /**
     * @symbol ??1SummonSpellData\@\@QEAA\@XZ
     */
    MCAPI ~SummonSpellData(); // NOLINT
};
