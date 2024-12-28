#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct AttributesComponent;
struct TickingSystemWithInfo;
// clang-format on

struct UpdateAttributesSystem {
public:
    // prevent constructor by default
    UpdateAttributesSystem& operator=(UpdateAttributesSystem const&);
    UpdateAttributesSystem(UpdateAttributesSystem const&);
    UpdateAttributesSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::AttributesComponent copyMovementAttributes(::AttributesComponent const& attributes);

    MCAPI static ::TickingSystemWithInfo createProcessRequestSystem();

    MCAPI static ::TickingSystemWithInfo createUpdateSystem();
    // NOLINTEND
};
