#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/item/CreativeItemCategory.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class CreativeItemEntry;
class CreativeItemRegistry;
// clang-format on

class CreativeGroupInfo : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CreativeItemCategory> mCategory;
    ::ll::TypedStorage<8, 8, ::CreativeItemRegistry*> mRegistry;
    ::ll::TypedStorage<8, 48, ::HashedString> mName;
    ::ll::TypedStorage<8, 128, ::ItemInstance> mIcon;
    ::ll::TypedStorage<4, 4, uint> mIndex;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>> mItemIndexes;
    // NOLINTEND

public:
    // prevent constructor by default
    CreativeGroupInfo& operator=(CreativeGroupInfo const&);
    CreativeGroupInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CreativeGroupInfo() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CreativeGroupInfo(::CreativeGroupInfo const&);

    MCAPI CreativeGroupInfo(::CreativeItemRegistry* registry, ::CreativeItemCategory category, ::HashedString const& name, uint index, ::ItemInstance const& icon);

    MCAPI void addCreativeItem(::CreativeItemEntry* itemEntry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CreativeGroupInfo const&);

    MCAPI void* $ctor(::CreativeItemRegistry* registry, ::CreativeItemCategory category, ::HashedString const& name, uint index, ::ItemInstance const& icon);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
