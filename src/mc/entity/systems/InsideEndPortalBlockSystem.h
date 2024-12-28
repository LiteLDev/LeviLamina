#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct InsideEndPortalBlockSystem {
public:
    // prevent constructor by default
    InsideEndPortalBlockSystem& operator=(InsideEndPortalBlockSystem const&);
    InsideEndPortalBlockSystem(InsideEndPortalBlockSystem const&);
    InsideEndPortalBlockSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
