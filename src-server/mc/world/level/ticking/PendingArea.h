#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/UUID.h"
#include "mc/util/Bounds.h"
#include "mc/world/level/ticking/TickingAreaLoadMode.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Dimension;
struct TickingAreaDescription;
// clang-format on

struct PendingArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID> mUID;
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mEntityId;
    ::ll::TypedStorage<4, 48, ::Bounds> mBounds;
    ::ll::TypedStorage<4, 4, float> mMaxDistToPlayers;
    ::ll::TypedStorage<1, 1, bool> mIsCircle;
    ::ll::TypedStorage<1, 1, bool> mAlwaysActive;
    ::ll::TypedStorage<1, 1, ::TickingAreaLoadMode> mLoadMode;
    ::ll::TypedStorage<1, 1, bool> mCreated;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::TickingAreaDescription getDescription() const;

    MCAPI ::CompoundTag serialize(::DimensionType dimensionId) const;

    MCAPI ~PendingArea();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::PendingArea load(::std::string const& key, ::CompoundTag const& tag);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
