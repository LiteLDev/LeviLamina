#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/ActorDataComponentBase.h"
#include "mc/world/actor/ActorFlags.h"

struct ActorDataFlagComponent : public ::ActorDataComponentBase<::std::bitset<127>> {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool getStatusFlag(::ActorFlags flag) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::bitset<127> const& ALL_HIGHER_ONES();

    MCAPI static ::std::bitset<127> const& ALL_LOWER_ONES();
    // NOLINTEND
};
