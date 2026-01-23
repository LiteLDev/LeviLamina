#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/CreativeItemCategory.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
class CreativeContentPacket;
class CreativeGroupInfo;
class CreativeItemEntry;
class CreativeItemGroupCategory;
class HashedString;
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
    virtual ~CreativeItemRegistry() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::brstd::flat_map<
        ::CreativeItemCategory,
        ::gsl::not_null<::CreativeItemGroupCategory*>,
        ::std::less<::CreativeItemCategory>,
        ::std::vector<::CreativeItemCategory>,
        ::std::vector<::gsl::not_null<::CreativeItemGroupCategory*>>>
    createCategories();

    MCAPI void forEachCreativeItemInstance(::std::function<bool(::ItemInstance const&)> func) const;

    MCAPI_C ::CreativeItemGroupCategory* getCreativeCategory(::CreativeItemCategory category);

    MCAPI_C void initializeFromCreativeContentPacket(
        ::CreativeContentPacket const& creativeContentPacket,
        ::BlockPalette const&          blockPalette
    );

    MCAPI ::CreativeItemGroupCategory* newCreativeCategory(::std::string const& name, ::CreativeItemCategory category);

    MCAPI ::CreativeGroupInfo*
    newCreativeGroup(::CreativeItemCategory category, ::HashedString const& name, ::ItemInstance const& icon);

    MCAPI void updateNetIdMap();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
