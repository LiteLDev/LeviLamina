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
#ifdef LL_PLAT_S
    virtual ~CreativeItemRegistry() /*override*/;
#else // LL_PLAT_C
    virtual ~CreativeItemRegistry() /*override*/ = default;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI CreativeItemRegistry();
#endif

    MCAPI ::brstd::flat_map<
        ::SharedTypes::CreativeItemCategory,
        ::gsl::not_null<::CreativeItemGroupCategory*>,
        ::std::less<::SharedTypes::CreativeItemCategory>,
        ::std::vector<::SharedTypes::CreativeItemCategory>,
        ::std::vector<::gsl::not_null<::CreativeItemGroupCategory*>>> createCategories();

#ifdef LL_PLAT_S
    MCAPI void forEachCreativeItemInstance(::brstd::function_ref<bool(::ItemInstance const&)> func) const;
#endif

#ifdef LL_PLAT_C
    MCAPI void initializeFromCreativeContentPacket(
        ::CreativeContentPacket const& creativeContentPacket,
        ::BlockPalette const&          blockPalette
    );

    MCAPI ::CreativeItemEntry* newItemEntry(::CreativeItemNetId const& creativeNetId, ::ItemInstance const& item);

    MCAPI void updateNetIdMap();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void $dtor();
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
