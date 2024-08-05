#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/gamerefs_entity/EntityRefTraits.h"

struct SynchedActorDataComponent;
struct ActorDataFlagComponent;
struct ActorDataDirtyFlagsComponent;
class EntityContext;

class SynchedActorDataEntityWrapper {
public:
    gsl::not_null<SynchedActorDataComponent*>    mSynchedActorData;
    gsl::not_null<ActorDataFlagComponent*>       mActorDataFlag;
    gsl::not_null<ActorDataDirtyFlagsComponent*> mActorDataDirtyFlag;
    WeakRef<EntityContext>                       mWeakEntity;

    template <typename T>
    MCAPI void define(ushort, T const&);
    template <typename T>
    MCAPI void set(ushort, T const&);

public:
    // NOLINTBEGIN
    MCAPI explicit SynchedActorDataEntityWrapper(class EntityContext& entity);

    MCAPI class CompoundTag const& getCompoundTag(ushort id) const;

    MCAPI float getFloat(ushort id) const;

    MCAPI int getInt(ushort id) const;

    MCAPI int64 getInt64(ushort id) const;

    MCAPI schar getInt8(ushort id) const;

    MCAPI class BlockPos getPosition(ushort id) const;

    MCAPI short getShort(ushort id) const;

    MCAPI std::string const& getString(ushort) const;

    MCAPI class Vec3 getVec3(ushort id) const;

    MCAPI bool hasData(ushort id) const;

    MCAPI bool isDirty() const;

    MCAPI void markDirty(ushort id);

    MCAPI std::vector<std::unique_ptr<class DataItem>> packAll() const;

    MCAPI std::vector<std::unique_ptr<class DataItem>> packDirty();

    MCAPI class SynchedActorDataReader reader() const;

    MCAPI class SynchedActorDataWriter writer();

    MCAPI ~SynchedActorDataEntityWrapper();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI gsl::not_null<class SynchedActorData*> _get();

    MCAPI gsl::not_null<class SynchedActorData const*> _get() const;

    // NOLINTEND
};
