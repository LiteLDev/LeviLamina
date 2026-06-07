#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
class CreativeContentPacket;
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
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SharedTypes::CreativeItemCategory, ::CreativeItemGroupCategory>>
                                                                                 mCreativeGroupCategories;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::CreativeItemNetId, uint64>> mCreativeNetIdIndex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CreativeItemRegistry() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CreativeItemRegistry();

    MCAPI ::brstd::flat_map<
        ::SharedTypes::CreativeItemCategory,
        ::gsl::not_null<::CreativeItemGroupCategory*>,
        ::std::less<::SharedTypes::CreativeItemCategory>,
        ::std::vector<::SharedTypes::CreativeItemCategory>,
        ::std::vector<::gsl::not_null<::CreativeItemGroupCategory*>>>
    createCategories();

    MCAPI ::CreativeItemEntry* findCreativeItemEntry(::ItemInstance const& instance);

    MCAPI ::CreativeItemEntry* findCreativeItemEntry(::CreativeItemNetId const& netId);

    MCAPI void forEachCreativeItemInstance(::brstd::function_ref<bool(::ItemInstance const&)> func) const;

    MCAPI ::CreativeItemGroupCategory* getCreativeCategory(::SharedTypes::CreativeItemCategory category);

#ifdef LL_PLAT_C
    MCAPI ::CreativeGroupInfo* getCreativeGroup(uint index);
#endif

    MCFOLD ::std::vector<::CreativeGroupInfo> const& getCreativeGroups() const;

    MCFOLD ::std::vector<::CreativeItemEntry> const& getCreativeItemEntries() const;

    MCAPI ::CreativeItemEntry* getItemEntry(uint index);

#ifdef LL_PLAT_C
    MCAPI void initializeFromCreativeContentPacket(
        ::CreativeContentPacket const& creativeContentPacket,
        ::BlockPalette const&          blockPalette
    );
#endif

    MCAPI ::CreativeItemEntry* newItemEntry(::CreativeItemNetId const& creativeNetId, ::ItemInstance const& item);

    MCAPI ::CreativeItemEntry* updateItemEntry(uint index, ::ItemInstance const& item);

    MCAPI void updateNetIdMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
