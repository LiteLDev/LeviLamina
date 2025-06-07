#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/CreativeItemCategory.h"

// auto generated forward declare list
// clang-format off
class CreativeGroupInfo;
class CreativeItemEntry;
class CreativeItemGroupCategory;
class ItemInstance;
struct CreativeItemNetIdTag;
// clang-format on

class CreativeItemRegistry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::CreativeItemEntry>> mCreativeItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::CreativeGroupInfo>> mCreativeGroups;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::CreativeItemCategory, ::CreativeItemGroupCategory>>
                                                                                 mCreativeGroupCategories;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::CreativeItemNetId, uint64>> mCreativeNetIdIndex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CreativeItemRegistry() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CreativeItemRegistry();

    MCNAPI ::brstd::flat_map<
        ::CreativeItemCategory,
        ::gsl::not_null<::CreativeItemGroupCategory*>,
        ::std::less<::CreativeItemCategory>,
        ::std::vector<::CreativeItemCategory>,
        ::std::vector<::gsl::not_null<::CreativeItemGroupCategory*>>>
    createCategories();

    MCNAPI void forEachCreativeItemInstance(::std::function<bool(::ItemInstance const&)> func) const;

    MCNAPI ::CreativeItemGroupCategory* newCreativeCategory(::std::string const& name, ::CreativeItemCategory category);

    MCNAPI void updateNetIdMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
