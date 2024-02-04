#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/IMessenger.h"
#include "mc/enums/AgentActionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class CommandOrigin;
class CommandOutput;
class ItemDescriptor;
class ItemInstance;
class LevelChunk;
class Mob;
class Player;
namespace CodeBuilder { class IMessenger; }
namespace Json { class Value; }
// clang-format on

namespace CodeBuilder {

class Messenger : public ::CodeBuilder::IMessenger {
public:
    // prevent constructor by default
    Messenger& operator=(Messenger const&);
    Messenger(Messenger const&);
    Messenger();

public:
    // NOLINTBEGIN
    // symbol: ?blockBroken@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@AEBVBlock@@HHG@Z
    MCVAPI void
    blockBroken(class Player const* player, class ::Block const& block, int method, int variantData, ushort auxType)
        const;

    // symbol: ?blockPlaced@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@AEBVBlock@@_NG@Z
    MCVAPI void
    blockPlaced(class Player const* player, class ::Block const& block, bool underWater, ushort auxType) const;

    // symbol: ?cameraUsed@Messenger@CodeBuilder@@UEBAX_N@Z
    MCVAPI void cameraUsed(bool isSelfie) const;

    // symbol: ?chunkChanged@Messenger@CodeBuilder@@UEBAXAEAVLevelChunk@@@Z
    MCVAPI void chunkChanged(class LevelChunk& chunk) const;

    // symbol: ?chunkLoaded@Messenger@CodeBuilder@@UEBAXAEAVLevelChunk@@@Z
    MCVAPI void chunkLoaded(class LevelChunk& chunk) const;

    // symbol: ?chunkUnloaded@Messenger@CodeBuilder@@UEBAXAEAVLevelChunk@@@Z
    MCVAPI void chunkUnloaded(class LevelChunk& chunk) const;

    // symbol:
    // ?codeBuilderRuntimeAction@Messenger@CodeBuilder@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void codeBuilderRuntimeAction(std::string const& action) const;

    // symbol:
    // ?codeBuilderScoreChanged@Messenger@CodeBuilder@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCVAPI void codeBuilderScoreChanged(std::string const& objective, int score) const;

    // symbol: ?endOfDay@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@@Z
    MCVAPI void endOfDay(class Player const* player) const;

    // symbol: ?entitySpawned@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@HI@Z
    MCVAPI void entitySpawned(class Player const* player, int mobType, uint spawnMethod) const;

    // symbol: ?itemAcquired@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@AEBVItemDescriptor@@HIH@Z
    MCVAPI void itemAcquired(
        class Player const*         player,
        class ItemDescriptor const& item,
        int,
        uint amountAcquired,
        int  acquisitionMethod
    ) const;

    // symbol: ?itemCrafted@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@_NAEBVItemInstance@@111HHH11@Z
    MCVAPI void itemCrafted(
        class Player const*       player,
        bool                      craftingTable,
        class ItemInstance const& item,
        bool                      recipeBook,
        bool                      hadSearchString,
        bool                      craftedAutomatically,
        int                       startingTabId,
        int                       endingTabId,
        int                       numTabsChanged,
        bool                      filterOn,
        bool                      recipeBookShown
    ) const;

    // symbol: ?itemDropped@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@AEBVItemDescriptor@@@Z
    MCVAPI void itemDropped(class Player const* player, class ItemDescriptor const& item) const;

    // symbol: ?itemEquipped@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@AEBVItemInstance@@H@Z
    MCVAPI void itemEquipped(class Player const* player, class ItemInstance const& item, int slot) const;

    // symbol: ?itemInteracted@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@AEBVItemInstance@@H@Z
    MCVAPI void itemInteracted(class Player const* player, class ItemInstance const& item, int method) const;

    // symbol: ?itemSmelted@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@AEBVItemDescriptor@@1@Z
    MCVAPI void
    itemSmelted(class Player const* player, class ItemDescriptor const& item, class ItemDescriptor const& lastFuelItem)
        const;

    // symbol: ?itemUsed@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@AEBVItemDescriptor@@H@Z
    MCVAPI void itemUsed(class Player const* player, class ItemDescriptor const& item, int useMethod) const;

    // symbol: ?mobInteracted@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@HHHE@Z
    MCVAPI void mobInteracted(
        class Player const* player,
        int                 legacyInteractedEntityType,
        int                 interactionType,
        int                 interactedEntityVariant,
        uchar               interactedEntityColor
    ) const;

    // symbol:
    // ?mobKilled@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@PEAVActor@@AEAVMob@@IAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCVAPI void mobKilled(
        class Player const* player,
        class Actor*        entKiller,
        class Mob&          mobKilled,
        uint                method,
        std::string const&,
        int traderTier
    ) const;

    // symbol:
    // ?onAgentAction@Messenger@CodeBuilder@@UEBAXW4AgentActionType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@@Z
    MCVAPI void
    onAgentAction(::AgentActionType actionType, std::string const& requestId, class Json::Value const& result) const;

    // symbol: ?onCommand@Messenger@CodeBuilder@@UEAAXAEBVCommandOrigin@@AEBVCommandOutput@@@Z
    MCVAPI void onCommand(class CommandOrigin const& origin, class CommandOutput const& output);

    // symbol:
    // ?piglinBarter@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCVAPI void
    piglinBarter(class Player const* player, std::string const& itemUsed, bool wasTargetingBarteringPlayer) const;

    // symbol: ?playerBounced@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@AEBVBlock@@HH@Z
    MCVAPI void
    playerBounced(class Player const* player, class ::Block const& block, int bounceHeight, int auxType) const;

    // symbol: ?playerDied@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@HHH_N@Z
    MCVAPI void playerDied(class Player const* player, int killerId, int killerVariant, int reason, bool inRaid) const;

    // symbol: ?playerJoined@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@@Z
    MCVAPI void playerJoined(class Player const* player) const;

    // symbol: ?playerLeave@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@@Z
    MCVAPI void playerLeave(class Player const* player) const;

    // symbol:
    // ?playerMessage@Messenger@CodeBuilder@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
    MCVAPI void playerMessage(
        std::string const& fromName,
        std::string const& toName,
        std::string const& message,
        std::string const& messageType
    ) const;

    // symbol: ?playerTeleported@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@MHH@Z
    MCVAPI void playerTeleported(class Player const* player, float metersTravelled, int cause, int sourceType) const;

    // symbol: ?playerTransform@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@@Z
    MCVAPI void playerTransform(class Player const* player) const;

    // symbol: ?playerTravelled@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@MHH@Z
    MCVAPI void
    playerTravelled(class Player const* player, float metersTravelledSinceLastEvent, int travelMethodType, int newBiome)
        const;

    // symbol: ?targetBlockHit@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@H@Z
    MCVAPI void targetBlockHit(class Player const* player, int redstoneLevel) const;

    // symbol:
    // ?tradeCompleted@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@PEAVActor@@AEBVItemDescriptor@@2AEBVItemInstance@@H@Z
    MCVAPI void tradeCompleted(
        class Player const*         player,
        class Actor*                trader,
        class ItemDescriptor const& itemA,
        class ItemDescriptor const& itemB,
        class ItemInstance const&   tradedFor,
        int                         traderEmeraldCount
    ) const;

    // NOLINTEND
};

}; // namespace CodeBuilder
