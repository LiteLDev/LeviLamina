#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/shared_types/item/CreativeItemCategory.h"

// auto generated forward declare list
// clang-format off
class CreativeGroupInfo;
class CreativeItemRegistry;
class ItemInstance;
// clang-format on

class CreativeItemGroupCategory : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                              mName;
    ::ll::TypedStorage<1, 1, ::SharedTypes::CreativeItemCategory>         mCategory;
    ::ll::TypedStorage<8, 8, ::CreativeItemRegistry*>                     mRegistry;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, uint>> mNamedGroupIndex;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                        mGroupIndexes;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~CreativeItemGroupCategory() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~CreativeItemGroupCategory() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CreativeGroupInfo* addAnonymousGroup();

    MCAPI ::CreativeGroupInfo* addChildGroup(::HashedString const& name, ::ItemInstance const& icon);

    MCAPI ::CreativeGroupInfo* getChildGroup(::HashedString const& name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
