#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/IMessenger.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/packet/AgentActionType.h"

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
namespace CodeBuilder { class IClient; }
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
    MCVAPI void
    blockBroken(class Player const* player, class Block const& block, int method, int variantData, ushort auxType)
        const;

    MCVAPI void
    blockPlaced(class Player const* player, class Block const& block, bool underWater, ushort auxType) const;

    MCVAPI void cameraUsed(bool isSelfie) const;

    MCVAPI void chunkChanged(class LevelChunk& chunk) const;

    MCVAPI void chunkLoaded(class LevelChunk& chunk) const;

    MCVAPI void chunkUnloaded(class LevelChunk& chunk) const;

    MCVAPI void codeBuilderRuntimeAction(std::string const& action) const;

    MCVAPI void codeBuilderScoreChanged(std::string const& objective, int score) const;

    MCVAPI void endOfDay(class Player const* player) const;

    MCVAPI void entitySpawned(class Player const* player, int mobType, uint spawnMethod) const;

    MCVAPI void itemAcquired(
        class Player const*         player,
        class ItemDescriptor const& item,
        int,
        uint amountAcquired,
        int  acquisitionMethod
    ) const;

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

    MCVAPI void itemDropped(class Player const* player, class ItemDescriptor const& item) const;

    MCVAPI void itemEquipped(class Player const* player, class ItemInstance const& item, int slot) const;

    MCVAPI void itemInteracted(class Player const* player, class ItemInstance const& item, int method) const;

    MCVAPI void
    itemSmelted(class Player const* player, class ItemDescriptor const& item, class ItemDescriptor const& lastFuelItem)
        const;

    MCVAPI void itemUsed(class Player const* player, class ItemDescriptor const& item, int useMethod) const;

    MCVAPI void mobInteracted(
        class Player const* player,
        int                 legacyInteractedEntityType,
        int                 interactionType,
        int                 interactedEntityVariant,
        uchar               interactedEntityColor
    ) const;

    MCVAPI void mobKilled(
        class Player const* player,
        class Actor*        entKiller,
        class Mob&          mobKilled,
        uint                method,
        std::string const&,
        int traderTier
    ) const;

    MCVAPI void
    onAgentAction(::AgentActionType actionType, std::string const& requestId, class Json::Value const& result) const;

    MCVAPI void onCommand(class CommandOrigin const& origin, class CommandOutput const& output);

    MCVAPI void
    piglinBarter(class Player const* player, std::string const& itemUsed, bool wasTargetingBarteringPlayer) const;

    MCVAPI void
    playerBounced(class Player const* player, class Block const& block, int bounceHeight, int auxType) const;

    MCVAPI void playerDied(class Player const* player, int killerId, int killerVariant, int reason, bool inRaid) const;

    MCVAPI void playerJoined(class Player const* player) const;

    MCVAPI void playerLeave(class Player const* player) const;

    MCVAPI void playerMessage(
        std::string const& fromName,
        std::string const& toName,
        std::string const& message,
        std::string const& messageType
    ) const;

    MCVAPI void playerTeleported(class Player const* player, float metersTravelled, int cause, int sourceType) const;

    MCVAPI void playerTransform(class Player const* player) const;

    MCVAPI void
    playerTravelled(class Player const* player, float metersTravelledSinceLastEvent, int travelMethodType, int newBiome)
        const;

    MCVAPI void targetBlockHit(class Player const* player, int redstoneLevel) const;

    MCVAPI void tradeCompleted(
        class Player const*         player,
        class Actor*                trader,
        class ItemDescriptor const& itemA,
        class ItemDescriptor const& itemB,
        class ItemInstance const&   tradedFor,
        int                         traderEmeraldCount
    ) const;

    MCAPI explicit Messenger(class Bedrock::NonOwnerPointer<class CodeBuilder::IClient> codeBuilderClient);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** $vftableForCodeBuilderCommandOutputObserver();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void
    blockBroken$(class Player const* player, class Block const& block, int method, int variantData, ushort auxType)
        const;

    MCAPI void
    blockPlaced$(class Player const* player, class Block const& block, bool underWater, ushort auxType) const;

    MCAPI void cameraUsed$(bool isSelfie) const;

    MCAPI void chunkChanged$(class LevelChunk& chunk) const;

    MCAPI void chunkLoaded$(class LevelChunk& chunk) const;

    MCAPI void chunkUnloaded$(class LevelChunk& chunk) const;

    MCAPI void codeBuilderRuntimeAction$(std::string const& action) const;

    MCAPI void codeBuilderScoreChanged$(std::string const& objective, int score) const;

    MCAPI void endOfDay$(class Player const* player) const;

    MCAPI void entitySpawned$(class Player const* player, int mobType, uint spawnMethod) const;

    MCAPI void itemAcquired$(
        class Player const*         player,
        class ItemDescriptor const& item,
        int,
        uint amountAcquired,
        int  acquisitionMethod
    ) const;

    MCAPI void itemCrafted$(
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

    MCAPI void itemDropped$(class Player const* player, class ItemDescriptor const& item) const;

    MCAPI void itemEquipped$(class Player const* player, class ItemInstance const& item, int slot) const;

    MCAPI void itemInteracted$(class Player const* player, class ItemInstance const& item, int method) const;

    MCAPI void
    itemSmelted$(class Player const* player, class ItemDescriptor const& item, class ItemDescriptor const& lastFuelItem)
        const;

    MCAPI void itemUsed$(class Player const* player, class ItemDescriptor const& item, int useMethod) const;

    MCAPI void mobInteracted$(
        class Player const* player,
        int                 legacyInteractedEntityType,
        int                 interactionType,
        int                 interactedEntityVariant,
        uchar               interactedEntityColor
    ) const;

    MCAPI void mobKilled$(
        class Player const* player,
        class Actor*        entKiller,
        class Mob&          mobKilled,
        uint                method,
        std::string const&,
        int traderTier
    ) const;

    MCAPI void
    onAgentAction$(::AgentActionType actionType, std::string const& requestId, class Json::Value const& result) const;

    MCAPI void onCommand$(class CommandOrigin const& origin, class CommandOutput const& output);

    MCAPI void
    piglinBarter$(class Player const* player, std::string const& itemUsed, bool wasTargetingBarteringPlayer) const;

    MCAPI void
    playerBounced$(class Player const* player, class Block const& block, int bounceHeight, int auxType) const;

    MCAPI void playerDied$(class Player const* player, int killerId, int killerVariant, int reason, bool inRaid) const;

    MCAPI void playerJoined$(class Player const* player) const;

    MCAPI void playerLeave$(class Player const* player) const;

    MCAPI void playerMessage$(
        std::string const& fromName,
        std::string const& toName,
        std::string const& message,
        std::string const& messageType
    ) const;

    MCAPI void playerTeleported$(class Player const* player, float metersTravelled, int cause, int sourceType) const;

    MCAPI void playerTransform$(class Player const* player) const;

    MCAPI void playerTravelled$(
        class Player const* player,
        float               metersTravelledSinceLastEvent,
        int                 travelMethodType,
        int                 newBiome
    ) const;

    MCAPI void targetBlockHit$(class Player const* player, int redstoneLevel) const;

    MCAPI void tradeCompleted$(
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
