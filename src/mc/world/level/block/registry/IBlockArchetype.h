#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class IBlockArchetype {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBlockArchetype() = default;

    virtual ::std::string_view getName() = 0;

    virtual void buildNetworkTag(::CompoundTag& tag) const = 0;

    virtual void initializeFromNetwork(::CompoundTag const& tag) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
