#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/ActorDataComponentBase.h"
#include "mc/world/actor/ActorFlags.h"

struct ActorDataFlagComponent : public ::ActorDataComponentBase<::std::bitset<126>> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool getStatusFlag(::ActorFlags flag) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::bitset<126> const& ALL_HIGHER_ONES();

    MCNAPI static ::std::bitset<126> const& ALL_LOWER_ONES();
    // NOLINTEND
};
