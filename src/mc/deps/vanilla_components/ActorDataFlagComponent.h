#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/ActorDataComponentBase.h"

struct ActorDataFlagComponent : public ::ActorDataComponentBase<::std::bitset<123>> {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::std::bitset<123>> setFlags(::std::bitset<123>& bitset, uint64 flags, int id);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::bitset<123> const& ALL_HIGHER_ONES();

    MCNAPI static ::std::bitset<123> const& ALL_LOWER_ONES();
    // NOLINTEND
};
