#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/ActorDataComponentBase.h"

struct ActorDataFlagComponent : public ::ActorDataComponentBase<::std::bitset<120>> {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::std::bitset<120>> setFlags(::std::bitset<120>& bitset, uint64 flags, int id);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::bitset<120> const& ALL_HIGHER_ONES();

    MCAPI static ::std::bitset<120> const& ALL_LOWER_ONES();
    // NOLINTEND
};
