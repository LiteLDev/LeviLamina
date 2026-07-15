#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class DataItem;
class EntityContext;
class Vec3;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct SynchedActorDataComponent;
// clang-format on

class SynchedActorDataEntityWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::SynchedActorDataComponent*>>    mData;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ActorDataFlagComponent*>>       mFlagData;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ActorDataDirtyFlagsComponent*>> mDirtyFlags;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>                      mEntityContext;
    // NOLINTEND

public:
    // prevent constructor by default
    SynchedActorDataEntityWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SynchedActorDataEntityWrapper(::EntityContext& entity);

#ifdef LL_PLAT_C
    MCAPI void assignValues(
        ::std::vector<::std::unique_ptr<::DataItem>> const& items,
        ::Actor&                                            actor,
        ::std::optional<uint64>                             targetFrame
    );
#endif

    MCAPI float getFloat(ushort id) const;

    MCAPI int getInt(ushort id) const;

    MCAPI int64 getInt64(ushort id) const;

    MCAPI schar getInt8(ushort id) const;

    MCAPI ::BlockPos getPosition(ushort id) const;

    MCAPI short getShort(ushort id) const;

    MCAPI ::std::string const& getString(ushort id) const;

    MCAPI ::Vec3 getVec3(ushort id) const;

    MCAPI bool hasData(ushort id) const;

    MCAPI void markDirty(ushort id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::EntityContext& entity);
    // NOLINTEND
};
