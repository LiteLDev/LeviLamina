#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DataItem;
class EntityContext;
class Vec3;
// clang-format on

class SynchedActorData {
public:
    // SynchedActorData inner types define
    using TypeInt8 = char;

    using TypeShort = short;

    using TypeString = ::std::string;

    using TypeInt = int;

    using TypeInt64 = int64;

    using TypeFloat = float;

    using TypeVec3 = ::Vec3;

    using DataList = ::std::vector<::std::unique_ptr<::DataItem>>;

    using ID = ushort;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DataItem>>> mItemsArray;
    ::ll::TypedStorage<8, 24, ::std::bitset<132>>                           mDirtyFlags;
    ::ll::TypedStorage<8, 24, ::std::bitset<132>>                           mHasComponentData;
    // NOLINTEND

public:
    // prevent constructor by default
    SynchedActorData& operator=(SynchedActorData const&);
    SynchedActorData(SynchedActorData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SynchedActorData();

    MCAPI SynchedActorData(::SynchedActorData&& rhs);

    MCAPI ::SynchedActorData _clone() const;

    MCAPI ::DataItem* _find(ushort id) const;

    MCAPI ::DataItem& _get(ushort id);

    MCAPI void _resizeToContain(ushort id);

    MCAPI float getFloat(ushort id) const;

    MCAPI int getInt(ushort id) const;

    MCAPI int64 getInt64(ushort id) const;

    MCAPI schar getInt8(ushort id) const;

    MCAPI ::Vec3 getVec3(ushort id) const;

    MCAPI bool hasData(ushort id) const;

    MCAPI ::SynchedActorData& operator=(::SynchedActorData&& rhs);

    MCAPI ::std::vector<::std::unique_ptr<::DataItem>> packAll(::EntityContext const& entity) const;

    MCAPI ::std::vector<::std::unique_ptr<::DataItem>> packDirty(::EntityContext& entity);

    MCAPI ~SynchedActorData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DIFF_ITEM();

    MCAPI static ::std::string const& DIFF_ITEMS_SIZE();

    MCAPI static ::std::string const& DIFF_ITEM_NULL();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SynchedActorData&& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
