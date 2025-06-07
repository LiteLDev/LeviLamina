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
    ::ll::TypedStorage<8, 24, ::std::bitset<136>>                           mDirtyFlags;
    ::ll::TypedStorage<8, 24, ::std::bitset<136>>                           mHasComponentData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SynchedActorData _clone() const;

    MCNAPI void markDirty(::DataItem& item);

    MCNAPI ::std::vector<::std::unique_ptr<::DataItem>> packAll(::EntityContext const& entity) const;

    MCNAPI ::std::vector<::std::unique_ptr<::DataItem>> packDirty(::EntityContext& entity);

    MCNAPI ~SynchedActorData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& DIFF_ITEM();

    MCNAPI static ::std::string const& DIFF_ITEMS_SIZE();

    MCNAPI static ::std::string const& DIFF_ITEM_NULL();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
