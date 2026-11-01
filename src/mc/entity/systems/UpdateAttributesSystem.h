#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct AttributesComponent;
struct TickingSystemWithInfo;
// clang-format on

struct UpdateAttributesSystem {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::AttributesComponent copyMovementAttributes(::AttributesComponent const& attributes);
#endif

    MCNAPI static ::TickingSystemWithInfo createProcessRequestSystem();
    // NOLINTEND
};
