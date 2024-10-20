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
    MCAPI SynchedActorData();

    MCAPI SynchedActorData(class SynchedActorData&& rhs);

    MCAPI class SynchedActorData _clone() const;

    MCAPI float getFloat(ushort id) const;

    MCAPI int getInt(ushort id) const;

    MCAPI int64 getInt64(ushort id) const;

    MCAPI schar getInt8(ushort id) const;

    MCAPI class Vec3 getVec3(ushort id) const;

    MCAPI bool hasData(ushort id) const;

    MCAPI class SynchedActorData& operator=(class SynchedActorData&& rhs);

    MCAPI std::vector<std::unique_ptr<class DataItem>> packAll(class EntityContext const& entity) const;

    MCAPI std::vector<std::unique_ptr<class DataItem>> packDirty(class EntityContext& entity);

    MCAPI ~SynchedActorData();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class DataItem* _find(ushort id) const;

    MCAPI class DataItem& _get(ushort id);

    MCAPI void _resizeToContain(ushort id);

    MCAPI void _setDirty(ushort);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(class SynchedActorData&& rhs);

    MCAPI void dtor$();

    MCAPI static std::string const& DIFF_ITEM();

    MCAPI static std::string const& DIFF_ITEMS_SIZE();

    MCAPI static std::string const& DIFF_ITEM_NULL();

    // NOLINTEND
};
