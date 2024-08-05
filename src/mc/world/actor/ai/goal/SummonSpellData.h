#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SummonSpellData {
public:
    // prevent constructor by default
    SummonSpellData();

public:
    // NOLINTBEGIN
    MCAPI SummonSpellData(struct SummonSpellData const&);

    MCAPI struct SummonSpellData& operator=(struct SummonSpellData const&);

    MCAPI ~SummonSpellData();

    // NOLINTEND
};
