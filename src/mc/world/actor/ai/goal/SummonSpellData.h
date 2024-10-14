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

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
