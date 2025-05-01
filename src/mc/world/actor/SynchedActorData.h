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
    template <class T>
    MCAPI void set(ushort id, T const& value);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DataItem>>> mItemsArray;
    ::ll::TypedStorage<8, 24, ::std::bitset<134>>                           mDirtyFlags;
    ::ll::TypedStorage<8, 24, ::std::bitset<134>>                           mHasComponentData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SynchedActorData _clone() const;

    MCNAPI ::std::vector<::std::unique_ptr<::DataItem>> packAll(::EntityContext const& entity) const;

    MCNAPI ::std::vector<::std::unique_ptr<::DataItem>> packDirty(::EntityContext& entity);

    MCNAPI ~SynchedActorData();
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
    MCNAPI void $dtor();
    // NOLINTEND
};
