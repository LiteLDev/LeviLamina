#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SummonSpellStage {
public:
    // prevent constructor by default
    SummonSpellStage(SummonSpellStage const&);
    SummonSpellStage();

public:
    // NOLINTBEGIN
    MCAPI struct SummonSpellStage& operator=(struct SummonSpellStage const&);

    MCAPI ~SummonSpellStage();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
