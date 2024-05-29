#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/enums/CreativeItemCategory.h"
#include "mc/network/TypedServerNetId.h"

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
    // vIndex: 0, symbol: ??1CreativeItemRegistry@@UEAA@XZ
    virtual ~CreativeItemRegistry();

    // symbol: ??0CreativeItemRegistry@@QEAA@XZ
    MCAPI CreativeItemRegistry();

    // symbol: ?findCreativeItemEntry@CreativeItemRegistry@@QEAAPEAVCreativeItemEntry@@AEBVItemInstance@@@Z
    MCAPI class CreativeItemEntry* findCreativeItemEntry(class ItemInstance const& instance);

    // symbol:
    // ?findCreativeItemEntry@CreativeItemRegistry@@QEAAPEAVCreativeItemEntry@@AEBV?$TypedServerNetId@UCreativeItemNetIdTag@@I$0A@@@@Z
    MCAPI class CreativeItemEntry* findCreativeItemEntry(CreativeItemNetId const& netId);

    // symbol: ?getCreativeCategory@CreativeItemRegistry@@QEAAPEAVCreativeItemGroupCategory@@W4CreativeItemCategory@@@Z
    MCAPI class CreativeItemGroupCategory* getCreativeCategory(::CreativeItemCategory category);

    // symbol:
    // ?getCreativeItemEntries@CreativeItemRegistry@@QEAAAEBV?$vector@VCreativeItemEntry@@V?$allocator@VCreativeItemEntry@@@std@@@std@@XZ
    MCAPI std::vector<class CreativeItemEntry> const& getCreativeItemEntries();

    // symbol: ?getItemEntry@CreativeItemRegistry@@QEAAPEAVCreativeItemEntry@@I@Z
    MCAPI class CreativeItemEntry* getItemEntry(uint index);

    // symbol:
    // ?newCreativeCategory@CreativeItemRegistry@@QEAAPEAVCreativeItemGroupCategory@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CreativeItemCategory@@@Z
    MCAPI class CreativeItemGroupCategory*
    newCreativeCategory(std::string const& name, ::CreativeItemCategory category);

    // symbol:
    // ?newCreativeGroup@CreativeItemRegistry@@QEAAPEAVCreativeGroupInfo@@W4CreativeItemCategory@@AEBVHashedString@@AEBVItemInstance@@@Z
    MCAPI class CreativeGroupInfo*
    newCreativeGroup(::CreativeItemCategory category, class HashedString const& name, class ItemInstance const& icon);

    // symbol:
    // ?newItemEntry@CreativeItemRegistry@@QEAAPEAVCreativeItemEntry@@AEBV?$TypedServerNetId@UCreativeItemNetIdTag@@I$0A@@@AEBVItemInstance@@@Z
    MCAPI class CreativeItemEntry* newItemEntry(CreativeItemNetId const& creativeNetId, class ItemInstance const& item);

    // symbol: ?resetGroups@CreativeItemRegistry@@QEAAXXZ
    MCAPI void resetGroups();

    // symbol: ?updateItemEntry@CreativeItemRegistry@@QEAAPEAVCreativeItemEntry@@IAEBVItemInstance@@@Z
    MCAPI class CreativeItemEntry* updateItemEntry(uint index, class ItemInstance const& item);

    // symbol: ?updateNetIdMap@CreativeItemRegistry@@QEAAXXZ
    MCAPI void updateNetIdMap();

    // symbol: ?current@CreativeItemRegistry@@SAPEAV1@XZ
    MCAPI static class CreativeItemRegistry* current();

    // symbol: ?forEachCreativeItemInstance@CreativeItemRegistry@@SAXV?$function@$$A6A_NAEAVItemInstance@@@Z@std@@@Z
    MCAPI static void forEachCreativeItemInstance(std::function<bool(class ItemInstance&)> func);

    // symbol:
    // ?setCurrentRegistry@CreativeItemRegistry@@SAX$$QEAV?$unique_ptr@VCreativeItemRegistry@@U?$default_delete@VCreativeItemRegistry@@@std@@@std@@@Z
    MCAPI static void setCurrentRegistry(std::unique_ptr<class CreativeItemRegistry>&& registry);

    // symbol: ?mCreativeListMutex@CreativeItemRegistry@@2VMutex@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::Mutex mCreativeListMutex;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_forEachCreativeItemInstance@CreativeItemRegistry@@AEAAXV?$function@$$A6A_NAEAVItemInstance@@@Z@std@@@Z
    MCAPI void _forEachCreativeItemInstance(std::function<bool(class ItemInstance&)> func);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mCurrentRegistry@CreativeItemRegistry@@0V?$unique_ptr@VCreativeItemRegistry@@U?$default_delete@VCreativeItemRegistry@@@std@@@std@@A
    MCAPI static std::unique_ptr<class CreativeItemRegistry> mCurrentRegistry;

    // NOLINTEND
};
