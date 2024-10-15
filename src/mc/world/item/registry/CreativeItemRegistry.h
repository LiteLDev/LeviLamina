#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/CreativeItemCategory.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class CreativeItemRegistry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    CreativeItemRegistry& operator=(CreativeItemRegistry const&);
    CreativeItemRegistry(CreativeItemRegistry const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CreativeItemRegistry();

    MCAPI CreativeItemRegistry();

    MCAPI class CreativeItemEntry* findCreativeItemEntry(class ItemInstance const& instance);

    MCAPI class CreativeItemEntry* findCreativeItemEntry(CreativeItemNetId const& netId);

    MCAPI class CreativeItemGroupCategory* getCreativeCategory(::CreativeItemCategory category);

    MCAPI std::vector<class CreativeItemEntry> const& getCreativeItemEntries();

    MCAPI class CreativeItemEntry* getItemEntry(uint index);

    MCAPI class CreativeItemGroupCategory*
    newCreativeCategory(std::string const& name, ::CreativeItemCategory category);

    MCAPI class CreativeGroupInfo*
    newCreativeGroup(::CreativeItemCategory category, class HashedString const& name, class ItemInstance const& icon);

    MCAPI class CreativeItemEntry* newItemEntry(CreativeItemNetId const& creativeNetId, class ItemInstance const& item);

    MCAPI void resetGroups();

    MCAPI class CreativeItemEntry* updateItemEntry(uint index, class ItemInstance const& item);

    MCAPI void updateNetIdMap();

    MCAPI static class CreativeItemRegistry* current();

    MCAPI static void forEachCreativeItemInstance(std::function<bool(class ItemInstance&)> func);

    MCAPI static void setCurrentRegistry(std::unique_ptr<class CreativeItemRegistry>&& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _forEachCreativeItemInstance(std::function<bool(class ItemInstance&)> func);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI static class Bedrock::Threading::Mutex& mCreativeListMutex();

    MCAPI static std::unique_ptr<class CreativeItemRegistry>& mCurrentRegistry();

    // NOLINTEND
};
