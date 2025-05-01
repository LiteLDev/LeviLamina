#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/item/registry/ItemVersion.h"

// auto generated forward declare list
// clang-format off
class ItemRegistryRef;
// clang-format on

struct ItemData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mName;
    ::ll::TypedStorage<2, 2, short>           mId;
    ::ll::TypedStorage<1, 1, bool>            mIsComponentBased;
    ::ll::TypedStorage<4, 4, ::ItemVersion>   mItemVersion;
    ::ll::TypedStorage<8, 24, ::CompoundTag>  mComponentData;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemData& operator=(ItemData const&);
    ItemData(ItemData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemData(::ItemData&&);

    MCNAPI ~ItemData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::ItemData> fromItemRegistry(::ItemRegistryRef itemRegistry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
