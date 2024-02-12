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
    // symbol: ??0SynchedActorDataEntityWrapper@@QEAA@AEAVEntityContext@@@Z
    MCAPI explicit SynchedActorDataEntityWrapper(class EntityContext& entity);

    // symbol: ?getCompoundTag@SynchedActorDataEntityWrapper@@QEBAAEBVCompoundTag@@G@Z
    MCAPI class CompoundTag const& getCompoundTag(ushort id) const;

    // symbol: ?getFloat@SynchedActorDataEntityWrapper@@QEBAMG@Z
    MCAPI float getFloat(ushort id) const;

    // symbol: ?getInt@SynchedActorDataEntityWrapper@@QEBAHG@Z
    MCAPI int getInt(ushort id) const;

    // symbol: ?getInt64@SynchedActorDataEntityWrapper@@QEBA_JG@Z
    MCAPI int64 getInt64(ushort id) const;

    // symbol: ?getInt8@SynchedActorDataEntityWrapper@@QEBACG@Z
    MCAPI schar getInt8(ushort id) const;

    // symbol: ?getPosition@SynchedActorDataEntityWrapper@@QEBA?AVBlockPos@@G@Z
    MCAPI class BlockPos getPosition(ushort id) const;

    // symbol: ?getShort@SynchedActorDataEntityWrapper@@QEBAFG@Z
    MCAPI short getShort(ushort id) const;

    // symbol:
    // ?getString@SynchedActorDataEntityWrapper@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@Z
    MCAPI std::string const& getString(ushort) const;

    // symbol: ?getVec3@SynchedActorDataEntityWrapper@@QEBA?AVVec3@@G@Z
    MCAPI class Vec3 getVec3(ushort id) const;

    // symbol: ?hasData@SynchedActorDataEntityWrapper@@QEBA_NG@Z
    MCAPI bool hasData(ushort id) const;

    // symbol: ?isDirty@SynchedActorDataEntityWrapper@@QEBA_NXZ
    MCAPI bool isDirty() const;

    // symbol: ?markDirty@SynchedActorDataEntityWrapper@@QEAAXG@Z
    MCAPI void markDirty(ushort id);

    // symbol:
    // ?packAll@SynchedActorDataEntityWrapper@@QEBA?AV?$vector@V?$unique_ptr@VDataItem@@U?$default_delete@VDataItem@@@std@@@std@@V?$allocator@V?$unique_ptr@VDataItem@@U?$default_delete@VDataItem@@@std@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::unique_ptr<class DataItem>> packAll() const;

    // symbol:
    // ?packDirty@SynchedActorDataEntityWrapper@@QEAA?AV?$vector@V?$unique_ptr@VDataItem@@U?$default_delete@VDataItem@@@std@@@std@@V?$allocator@V?$unique_ptr@VDataItem@@U?$default_delete@VDataItem@@@std@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::unique_ptr<class DataItem>> packDirty();

    // symbol: ?reader@SynchedActorDataEntityWrapper@@QEBA?AVSynchedActorDataReader@@XZ
    MCAPI class SynchedActorDataReader reader() const;

    // symbol: ?writer@SynchedActorDataEntityWrapper@@QEAA?AVSynchedActorDataWriter@@XZ
    MCAPI class SynchedActorDataWriter writer();

    // symbol: ??1SynchedActorDataEntityWrapper@@QEAA@XZ
    MCAPI ~SynchedActorDataEntityWrapper();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_get@SynchedActorDataEntityWrapper@@AEAA?AV?$not_null@PEAVSynchedActorData@@@gsl@@XZ
    MCAPI gsl::not_null<class SynchedActorData*> _get();

    // symbol: ?_get@SynchedActorDataEntityWrapper@@AEBA?AV?$not_null@PEBVSynchedActorData@@@gsl@@XZ
    MCAPI gsl::not_null<class SynchedActorData const*> _get() const;

    // NOLINTEND
};
