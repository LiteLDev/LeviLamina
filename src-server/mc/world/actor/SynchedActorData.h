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
    // SynchedActorData inner types declare
    // clang-format off
    struct CopyableDataList;
    // clang-format on

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

    struct CopyableDataList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DataItem>>> mData;
        // NOLINTEND
    };

public:
    template <class T>
    MCAPI void set(ushort id, T const& value);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DataItem>>> mItemsArray;
    ::ll::TypedStorage<8, 24, ::std::bitset<136>>                           mDirtyFlags;
    ::ll::TypedStorage<8, 24, ::std::bitset<136>>                           mHasComponentData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SynchedActorData _clone() const;

    MCAPI void markDirty(::DataItem& item);

    MCAPI ::std::vector<::std::unique_ptr<::DataItem>> packAll(::EntityContext const& entity) const;

    MCAPI ::std::vector<::std::unique_ptr<::DataItem>> packDirty(::EntityContext& entity);

    MCAPI ~SynchedActorData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::unique_ptr<::DataItem>>
    cloneDataList(::std::vector<::std::unique_ptr<::DataItem>> const& list);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DIFF_ITEM();

    MCAPI static ::std::string const& DIFF_ITEMS_SIZE();

    MCAPI static ::std::string const& DIFF_ITEM_NULL();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
