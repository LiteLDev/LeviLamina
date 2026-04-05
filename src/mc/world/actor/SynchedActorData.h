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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
    public:
        // prevent constructor by default
        CopyableDataList& operator=(CopyableDataList const&);
        CopyableDataList();

#endif
    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI CopyableDataList(::SynchedActorData::CopyableDataList const& other);

        MCAPI ~CopyableDataList();
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI void* $ctor(::SynchedActorData::CopyableDataList const& other);
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCFOLD void $dtor();
#endif
        // NOLINTEND
    };

    using DataList = ::std::vector<::std::unique_ptr<::DataItem>>;

    using ID = ushort;

    using TypeFloat = float;

    using TypeInt = int;

    using TypeInt64 = int64;

    using TypeInt8 = schar;

    using TypeShort = short;

    using TypeString = ::std::string;

    using TypeVec3 = ::Vec3;

public:
    template <class T>
    MCAPI void set(ushort id, T const& value);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DataItem>>> mItemsArray;
    ::ll::TypedStorage<8, 24, ::std::bitset<139>>                           mDirtyFlags;
    ::ll::TypedStorage<8, 24, ::std::bitset<139>>                           mHasComponentData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SynchedActorData _clone() const;

#ifdef LL_PLAT_C
    MCAPI bool assignValue(::DataItem const& newItem);

    MCAPI void assignValues(
        ::std::vector<::std::unique_ptr<::DataItem>> const& items,
        ::Actor&                                            actor,
        ::std::optional<uint64>                             targetFrame
    );

    MCAPI int getInt(ushort id) const;
#endif

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
