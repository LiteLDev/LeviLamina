#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OverworldBlendRules {
public:
    // prevent constructor by default
    OverworldBlendRules& operator=(OverworldBlendRules const&);
    OverworldBlendRules(OverworldBlendRules const&);
    OverworldBlendRules();

public:
    // NOLINTBEGIN
    MCAPI ~OverworldBlendRules();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
