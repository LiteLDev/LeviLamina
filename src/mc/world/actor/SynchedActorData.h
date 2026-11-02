#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
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
        CopyableDataList(CopyableDataList const&);
        CopyableDataList();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::SynchedActorData::CopyableDataList& operator=(::SynchedActorData::CopyableDataList const& other);

        MCNAPI ~CopyableDataList();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
    ::ll::TypedStorage<8, 24, ::std::bitset<142>>                           mDirtyFlags;
    ::ll::TypedStorage<8, 24, ::std::bitset<142>>                           mHasComponentData;
    // NOLINTEND

public:
    // prevent constructor by default
    SynchedActorData& operator=(SynchedActorData const&);
    SynchedActorData(SynchedActorData const&);
    SynchedActorData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SynchedActorData _clone() const;

#ifdef LL_PLAT_C
    MCNAPI bool assignValue(::DataItem const& newItem);

    MCNAPI void assignValues(
        ::std::vector<::std::unique_ptr<::DataItem>> const& items,
        ::Actor&                                            actor,
        ::std::optional<uint64>                             targetFrame
    );
#endif

    MCNAPI ::CompoundTag const& getCompoundTag(ushort id) const;

    MCNAPI ::SynchedActorData& operator=(::SynchedActorData&& rhs);

    MCAPI ::std::vector<::std::unique_ptr<::DataItem>> packAll(::EntityContext const& entity) const;

    MCNAPI ::std::vector<::std::unique_ptr<::DataItem>> packDirty(::EntityContext& entity);

#ifdef LL_PLAT_C
    MCNAPI void queueAssignment(
        ::std::vector<::std::unique_ptr<::DataItem>> const& items,
        ::Actor&                                            actor,
        ::std::optional<uint64>                             targetFrame
    );
#endif

    MCNAPI ~SynchedActorData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::std::unique_ptr<::DataItem>>
    cloneDataList(::std::vector<::std::unique_ptr<::DataItem>> const& list);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& DIFF_ITEM_NULL();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
