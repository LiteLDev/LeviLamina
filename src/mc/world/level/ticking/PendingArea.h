#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/UUID.h"
#include "mc/util/Bounds.h"
#include "mc/world/level/ticking/TickingAreaLoadMode.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
struct DimensionType;
struct TickingAreaDescription;
// clang-format on

struct PendingArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>             mUID;
    ::ll::TypedStorage<8, 32, ::std::string>           mName;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>          mEntityId;
    ::ll::TypedStorage<4, 48, ::Bounds>                mBounds;
    ::ll::TypedStorage<4, 4, float>                    mMaxDistToPlayers;
    ::ll::TypedStorage<1, 1, bool>                     mIsCircle;
    ::ll::TypedStorage<1, 1, bool>                     mAlwaysActive;
    ::ll::TypedStorage<1, 1, ::TickingAreaLoadMode>    mLoadMode;
    ::ll::TypedStorage<1, 1, bool>                     mCreated;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>> mScope;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingArea();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PendingArea(
        ::mce::UUID           uniqueId,
        ::std::string const&  name,
        ::Bounds const&       bounds,
        bool                  circle,
        ::TickingAreaLoadMode loadMode
    );

    MCAPI ::TickingAreaDescription getDescription() const;

    MCFOLD bool isScoped() const;

    MCAPI bool isStandalone() const;

    MCAPI ::CompoundTag serialize(::DimensionType dimensionId) const;

    MCAPI void setScope(uint64 scope);

    MCAPI ~PendingArea();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::PendingArea createEntityTickingArea(
        ::mce::UUID     uniqueId,
        ::ActorUniqueID entityId,
        ::Bounds const& bounds,
        bool            alwaysActive,
        float           maxDistToPlayers
    );

    MCAPI static ::PendingArea createTickingArea(
        ::mce::UUID           uniqueId,
        ::std::string const&  name,
        ::Bounds const&       bounds,
        bool                  circle,
        ::TickingAreaLoadMode loadMode
    );

    MCAPI static ::PendingArea load(::std::string const& key, ::CompoundTag const& tag);

    MCAPI static bool validTag(::CompoundTag const& tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::mce::UUID           uniqueId,
        ::std::string const&  name,
        ::Bounds const&       bounds,
        bool                  circle,
        ::TickingAreaLoadMode loadMode
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
