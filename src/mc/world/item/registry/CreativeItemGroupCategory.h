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
    ::ll::TypedStorage<4, 4, ::SharedTypes::CreativeItemCategory>         mCategory;
    ::ll::TypedStorage<8, 8, ::CreativeItemRegistry*>                     mRegistry;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, uint>> mNamedGroupIndex;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                        mGroupIndexes;
    // NOLINTEND

public:
    // prevent constructor by default
    CreativeItemGroupCategory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CreativeItemGroupCategory() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CreativeItemGroupCategory(
        ::CreativeItemRegistry*             registry,
        ::std::string const&                name,
        ::SharedTypes::CreativeItemCategory category
    );

    MCAPI ::CreativeGroupInfo* addAnonymousGroup();

    MCAPI ::CreativeGroupInfo* addChildGroup(::HashedString const& name, ::ItemInstance const& icon);

    MCAPI ::CreativeGroupInfo* getChildGroup(::HashedString const& name);

#ifdef LL_PLAT_C
    MCAPI uint getGroupIndex(uint64 i) const;

    MCAPI uint64 getGroupIndexCount() const;
#endif

    MCAPI ::CreativeGroupInfo* getOrAddTailAnonymousGroup();

#ifdef LL_PLAT_C
    MCAPI uint64 getTotalNumberChildItems();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::CreativeItemRegistry* registry, ::std::string const& name, ::SharedTypes::CreativeItemCategory category);
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
