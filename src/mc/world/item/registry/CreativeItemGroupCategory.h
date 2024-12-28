#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/item/CreativeItemCategory.h"

// auto generated forward declare list
// clang-format off
class CreativeGroupInfo;
class HashedString;
class ItemInstance;
// clang-format on

class CreativeItemGroupCategory : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkde0cd1;
    ::ll::UntypedStorage<4, 4>  mUnkb1fac7;
    ::ll::UntypedStorage<8, 8>  mUnk90b560;
    ::ll::UntypedStorage<8, 64> mUnk249d7d;
    ::ll::UntypedStorage<8, 24> mUnk1e1068;
    // NOLINTEND

public:
    // prevent constructor by default
    CreativeItemGroupCategory& operator=(CreativeItemGroupCategory const&);
    CreativeItemGroupCategory(CreativeItemGroupCategory const&);
    CreativeItemGroupCategory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CreativeItemGroupCategory() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CreativeGroupInfo* addAnonymousGroup();

    MCAPI ::CreativeGroupInfo* addChildGroup(::HashedString const& name, ::ItemInstance const& icon);

    MCAPI ::CreativeGroupInfo* getChildGroup(::HashedString const& name);

    MCAPI ::CreativeItemCategory getCreativeCategory();

    MCAPI ::CreativeGroupInfo* getOrAddTailAnonymousGroup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
