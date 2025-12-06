#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/item/CreativeItemCategory.h"

// auto generated forward declare list
// clang-format off
class CreativeGroupInfo;
class CreativeItemRegistry;
class HashedString;
class ItemInstance;
// clang-format on

class CreativeItemGroupCategory : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                              mName;
    ::ll::TypedStorage<4, 4, ::CreativeItemCategory>                      mCategory;
    ::ll::TypedStorage<8, 8, ::CreativeItemRegistry*>                     mRegistry;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, uint>> mNamedGroupIndex;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                        mGroupIndexes;
    // NOLINTEND

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

    MCAPI uint64 getTotalNumberChildItems();
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
