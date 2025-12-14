#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
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
    struct CopyableDataList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DataItem>>> mData;
        // NOLINTEND

    public:
        // prevent constructor by default
        CopyableDataList& operator=(CopyableDataList const&);
        CopyableDataList();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI_C CopyableDataList(::SynchedActorData::CopyableDataList const& other);

        MCAPI_C ~CopyableDataList();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI_C void* $ctor(::SynchedActorData::CopyableDataList const& other);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD_C void $dtor();
        // NOLINTEND
    };

    using DataList = ::std::vector<::std::unique_ptr<::DataItem>>;

    using ID = ushort;

    using TypeFloat = float;

    using TypeInt = int;

    using TypeInt64 = int64;

    using TypeInt8 = char;

    using TypeShort = short;

    using TypeString = ::std::string;

    using TypeVec3 = ::Vec3;

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

    MCAPI_C bool assignValue(::DataItem const& newItem);

    MCAPI_C void assignValues(
        ::std::vector<::std::unique_ptr<::DataItem>> const& items,
        ::Actor&                                            actor,
        ::std::optional<uint64>                             targetFrame
    );

    MCAPI void markDirty(::DataItem& item);

    MCAPI ::std::vector<::std::unique_ptr<::DataItem>> packAll(::EntityContext const& entity) const;

    MCAPI ::std::vector<::std::unique_ptr<::DataItem>> packDirty(::EntityContext& entity);

    MCAPI_C void queueAssignment(
        ::std::vector<::std::unique_ptr<::DataItem>> const& items,
        ::Actor&                                            actor,
        ::std::optional<uint64>                             targetFrame
    );

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
