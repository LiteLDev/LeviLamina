#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CompoundTag;
class DataItem;
class EntityContext;
class SynchedActorData;
class SynchedActorDataReader;
class SynchedActorDataWriter;
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
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SynchedActorDataEntityWrapper(::EntityContext& entity);

    MCAPI ::gsl::not_null<::SynchedActorData const*> _get() const;

    MCFOLD ::gsl::not_null<::SynchedActorData*> _get();

    MCAPI ::CompoundTag const& getCompoundTag(ushort id) const;

    MCAPI float getFloat(ushort id) const;

    MCAPI int getInt(ushort id) const;

    MCAPI int64 getInt64(ushort id) const;

    MCAPI schar getInt8(ushort id) const;

    MCFOLD ::BlockPos getPosition(ushort id) const;

    MCAPI short getShort(ushort id) const;

    MCAPI ::std::string const& getString(ushort id) const;

    MCAPI ::Vec3 getVec3(ushort id) const;

    MCAPI bool hasData(ushort id) const;

    MCAPI bool isDirty() const;

    MCAPI void markDirty(ushort id);

    MCAPI ::std::vector<::std::unique_ptr<::DataItem>> packAll() const;

    MCAPI ::std::vector<::std::unique_ptr<::DataItem>> packDirty();

    MCFOLD ::SynchedActorDataReader reader() const;

    MCAPI ::SynchedActorDataWriter writer();

    MCAPI ~SynchedActorDataEntityWrapper();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::EntityContext& entity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
