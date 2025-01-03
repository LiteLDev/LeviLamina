#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CompoundBlockVolumeAction.h"
#include "mc/world/level/block/CompoundBlockVolumePositionRelativity.h"

// auto generated forward declare list
// clang-format off
class CompoundBlockVolume;
class SimpleBlockVolume;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CompoundBlockVolumeItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CompoundBlockVolumeAction>             mAction;
    ::ll::TypedStorage<4, 4, ::CompoundBlockVolumePositionRelativity> mRelativity;
    ::ll::TypedStorage<4, 32, ::SimpleBlockVolume>                    mVolume;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SimpleBlockVolume getAbsoluteVolume(::CompoundBlockVolume const& parent) const;

    MCAPI ::SimpleBlockVolume getRelativeVolume(::CompoundBlockVolume const& parent) const;

    MCAPI bool operator==(::CompoundBlockVolumeItem const& other) const;

    MCAPI ::std::string toString() const;

    MCAPI ~CompoundBlockVolumeItem();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
