#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SynchedActorData {
public:
    std::vector<std::unique_ptr<class DataItem>> mItemsArray;

    char filler[0x30];

    template <typename T>
    MCAPI void define(ushort, T const&);
    template <typename T>
    MCAPI void set(ushort, T const&);

public:
    // NOLINTBEGIN
    // symbol: ??0SynchedActorData@@QEAA@XZ
    MCAPI SynchedActorData();

    // symbol: ??0SynchedActorData@@QEAA@$$QEAV0@@Z
    MCAPI SynchedActorData(class SynchedActorData&& rhs);

    // symbol: ?_clone@SynchedActorData@@QEBA?AV1@XZ
    MCAPI class SynchedActorData _clone() const;

    // symbol: ?getFloat@SynchedActorData@@QEBAMG@Z
    MCAPI float getFloat(ushort id) const;

    // symbol: ?getInt@SynchedActorData@@QEBAHG@Z
    MCAPI int getInt(ushort id) const;

    // symbol: ?getInt64@SynchedActorData@@QEBA_JG@Z
    MCAPI int64 getInt64(ushort id) const;

    // symbol: ?getInt8@SynchedActorData@@QEBACG@Z
    MCAPI schar getInt8(ushort id) const;

    // symbol: ?getVec3@SynchedActorData@@QEBA?AVVec3@@G@Z
    MCAPI class Vec3 getVec3(ushort id) const;

    // symbol: ?hasData@SynchedActorData@@QEBA_NG@Z
    MCAPI bool hasData(ushort id) const;

    // symbol: ??4SynchedActorData@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class SynchedActorData& operator=(class SynchedActorData&& rhs);

    // symbol:
    // ?packAll@SynchedActorData@@QEBA?AV?$vector@V?$unique_ptr@VDataItem@@U?$default_delete@VDataItem@@@std@@@std@@V?$allocator@V?$unique_ptr@VDataItem@@U?$default_delete@VDataItem@@@std@@@std@@@2@@std@@AEBVEntityContext@@@Z
    MCAPI std::vector<std::unique_ptr<class DataItem>> packAll(class EntityContext const&) const;

    // symbol:
    // ?packDirty@SynchedActorData@@QEAA?AV?$vector@V?$unique_ptr@VDataItem@@U?$default_delete@VDataItem@@@std@@@std@@V?$allocator@V?$unique_ptr@VDataItem@@U?$default_delete@VDataItem@@@std@@@std@@@2@@std@@AEAVEntityContext@@@Z
    MCAPI std::vector<std::unique_ptr<class DataItem>> packDirty(class EntityContext&);

    // symbol: ??1SynchedActorData@@QEAA@XZ
    MCAPI ~SynchedActorData();

    // symbol: ?DIFF_ITEM@SynchedActorData@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const DIFF_ITEM;

    // symbol: ?DIFF_ITEMS_SIZE@SynchedActorData@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const DIFF_ITEMS_SIZE;

    // symbol: ?DIFF_ITEM_NULL@SynchedActorData@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const DIFF_ITEM_NULL;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_find@SynchedActorData@@AEBAPEAVDataItem@@G@Z
    MCAPI class DataItem* _find(ushort id) const;

    // symbol: ?_get@SynchedActorData@@AEAAAEAVDataItem@@G@Z
    MCAPI class DataItem& _get(ushort id);

    // symbol: ?_resizeToContain@SynchedActorData@@AEAAXG@Z
    MCAPI void _resizeToContain(ushort id);

    // symbol: ?_setDirty@SynchedActorData@@AEAAXG@Z
    MCAPI void _setDirty(ushort);

    // NOLINTEND
};
