#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/CreativeItemCategory.h"

// auto generated forward declare list
// clang-format off
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
    // vIndex: 0
    virtual ~CreativeItemRegistry() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CreativeItemRegistry();

    MCAPI ::CreativeItemEntry* findCreativeItemEntry(::ItemInstance const& instance);

    MCAPI ::CreativeItemEntry* findCreativeItemEntry(::CreativeItemNetId const& netId);

    MCAPI void forEachCreativeItemInstance(::std::function<bool(::ItemInstance const&)> func) const;

    MCAPI ::CreativeItemGroupCategory* getCreativeCategory(::CreativeItemCategory category);

    MCFOLD ::std::vector<::CreativeItemEntry> const& getCreativeItemEntries();

    MCAPI ::CreativeItemEntry* getItemEntry(uint index);

    MCAPI ::CreativeItemGroupCategory* newCreativeCategory(::std::string const& name, ::CreativeItemCategory category);

    MCAPI ::CreativeGroupInfo*
    newCreativeGroup(::CreativeItemCategory category, ::HashedString const& name, ::ItemInstance const& icon);

    MCAPI ::CreativeItemEntry* newItemEntry(::CreativeItemNetId const& creativeNetId, ::ItemInstance const& item);

    MCAPI void resetGroups();

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
