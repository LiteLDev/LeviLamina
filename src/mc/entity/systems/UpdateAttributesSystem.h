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
    MCNAPI_C static ::AttributesComponent copyMovementAttributes(::AttributesComponent const& attributes);

    MCNAPI static ::TickingSystemWithInfo createProcessRequestSystem();

    MCNAPI static ::TickingSystemWithInfo createUpdateSystem();
    // NOLINTEND
};
