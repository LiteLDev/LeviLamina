#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/enums/CreativeItemCategory.h"
#include "mc/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class CreativeItemRegistry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    CreativeItemRegistry& operator=(CreativeItemRegistry const&);
    CreativeItemRegistry(CreativeItemRegistry const&);

public:
    // NOLINTBEGIN
    // symbol: ??1CreativeItemRegistry@@UEAA@XZ
    MCVAPI ~CreativeItemRegistry();

    // symbol: ??0CreativeItemRegistry@@QEAA@XZ
    MCAPI CreativeItemRegistry();

    // symbol:
    // ?findCreativeItemEntry@CreativeItemRegistry@@QEAAPEAVCreativeItemEntry@@AEBV?$TypedServerNetId@UCreativeItemNetIdTag@@I$0A@@@@Z
    MCAPI class CreativeItemEntry* findCreativeItemEntry(CreativeItemNetId const&);

    // symbol: ?findCreativeItemEntry@CreativeItemRegistry@@QEAAPEAVCreativeItemEntry@@AEBVItemInstance@@@Z
    MCAPI class CreativeItemEntry* findCreativeItemEntry(class ItemInstance const&);

    // symbol: ?getCreativeCategory@CreativeItemRegistry@@QEAAPEAVCreativeItemGroupCategory@@W4CreativeItemCategory@@@Z
    MCAPI class CreativeItemGroupCategory* getCreativeCategory(::CreativeItemCategory);

    // symbol:
    // ?getCreativeItemEntries@CreativeItemRegistry@@QEAAAEBV?$vector@VCreativeItemEntry@@V?$allocator@VCreativeItemEntry@@@std@@@std@@XZ
    MCAPI std::vector<class CreativeItemEntry> const& getCreativeItemEntries();

    // symbol: ?getItemEntry@CreativeItemRegistry@@QEAAPEAVCreativeItemEntry@@I@Z
    MCAPI class CreativeItemEntry* getItemEntry(uint);

    // symbol:
    // ?newCreativeCategory@CreativeItemRegistry@@QEAAPEAVCreativeItemGroupCategory@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CreativeItemCategory@@@Z
    MCAPI class CreativeItemGroupCategory* newCreativeCategory(std::string const&, ::CreativeItemCategory);

    // symbol:
    // ?newCreativeGroup@CreativeItemRegistry@@QEAAPEAVCreativeGroupInfo@@W4CreativeItemCategory@@AEBVHashedString@@AEBVItemInstance@@@Z
    MCAPI class CreativeGroupInfo*
    newCreativeGroup(::CreativeItemCategory, class HashedString const&, class ItemInstance const&);

    // symbol:
    // ?newItemEntry@CreativeItemRegistry@@QEAAPEAVCreativeItemEntry@@AEBV?$TypedServerNetId@UCreativeItemNetIdTag@@I$0A@@@AEBVItemInstance@@@Z
    MCAPI class CreativeItemEntry* newItemEntry(CreativeItemNetId const&, class ItemInstance const&);

    // symbol: ?resetGroups@CreativeItemRegistry@@QEAAXXZ
    MCAPI void resetGroups();

    // symbol: ?updateItemEntry@CreativeItemRegistry@@QEAAPEAVCreativeItemEntry@@IAEBVItemInstance@@@Z
    MCAPI class CreativeItemEntry* updateItemEntry(uint, class ItemInstance const&);

    // symbol: ?updateNetIdMap@CreativeItemRegistry@@QEAAXXZ
    MCAPI void updateNetIdMap();

    // symbol: ?current@CreativeItemRegistry@@SAPEAV1@XZ
    MCAPI static class CreativeItemRegistry* current();

    // symbol: ?forEachCreativeItemInstance@CreativeItemRegistry@@SAXV?$function@$$A6A_NAEAVItemInstance@@@Z@std@@@Z
    MCAPI static void forEachCreativeItemInstance(std::function<bool(class ItemInstance&)>);

    // symbol: ?reset@CreativeItemRegistry@@SAXXZ
    MCAPI static void reset();

    // symbol:
    // ?setCurrentRegistry@CreativeItemRegistry@@SAX$$QEAV?$unique_ptr@VCreativeItemRegistry@@U?$default_delete@VCreativeItemRegistry@@@std@@@std@@@Z
    MCAPI static void setCurrentRegistry(std::unique_ptr<class CreativeItemRegistry>&&);

    // symbol: ?mCreativeListMutex@CreativeItemRegistry@@2Vmutex@std@@A
    MCAPI static std::mutex mCreativeListMutex;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_forEachCreativeItemInstance@CreativeItemRegistry@@AEAAXV?$function@$$A6A_NAEAVItemInstance@@@Z@std@@@Z
    MCAPI void _forEachCreativeItemInstance(std::function<bool(class ItemInstance&)>);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?mCurrentRegistry@CreativeItemRegistry@@0V?$unique_ptr@VCreativeItemRegistry@@U?$default_delete@VCreativeItemRegistry@@@std@@@std@@A
    MCAPI static std::unique_ptr<class CreativeItemRegistry> mCurrentRegistry;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $mCurrentRegistry() { return mCurrentRegistry; }

    // NOLINTEND
};
