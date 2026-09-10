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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    PendingArea();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI PendingArea(
        ::mce::UUID           uniqueId,
        ::std::string const&  name,
        ::Bounds const&       bounds,
        bool                  circle,
        ::TickingAreaLoadMode loadMode
    );
#endif

    MCAPI ::TickingAreaDescription getDescription() const;

#ifdef LL_PLAT_C
    MCAPI ::CompoundTag serialize(::DimensionType dimensionId) const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::PendingArea load(::std::string const& key, ::CompoundTag const& tag);

    MCAPI static bool validTag(::CompoundTag const& tag);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::mce::UUID           uniqueId,
        ::std::string const&  name,
        ::Bounds const&       bounds,
        bool                  circle,
        ::TickingAreaLoadMode loadMode
    );
#endif
    // NOLINTEND
};
