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
namespace Json { class Value; }
// clang-format on

namespace CodeBuilder {

class Messenger : public ::CodeBuilder::IMessenger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::CodeBuilder::IClient>> mCodeBuilderClient;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Messenger() /*override*/ = default;

    // vIndex: 1
    virtual void
    onAgentAction(::AgentActionType actionType, ::std::string const& requestId, ::Json::Value const& result) const
        /*override*/;

    // vIndex: 2
    virtual void onCommand(::CommandOrigin const& origin, ::CommandOutput const& output) /*override*/;

    // vIndex: 2
    virtual void
    blockBroken(::Player const* player, ::Block const& block, int method, int variantData, ushort auxType) const
        /*override*/;

    // vIndex: 3
    virtual void blockPlaced(::Player const* player, ::Block const& block, bool underWater, ushort auxType) const
        /*override*/;

    // vIndex: 4
    virtual void cameraUsed(bool isSelfie) const /*override*/;

    // vIndex: 5
    virtual void codeBuilderRuntimeAction(::std::string const& action) const /*override*/;

    // vIndex: 6
    virtual void codeBuilderScoreChanged(::std::string const& objective, int const score) const /*override*/;

    // vIndex: 7
    virtual void chunkChanged(::LevelChunk& chunk) const /*override*/;

    // vIndex: 8
    virtual void chunkLoaded(::LevelChunk& chunk) const /*override*/;

    // vIndex: 9
    virtual void chunkUnloaded(::LevelChunk& chunk) const /*override*/;

    // vIndex: 10
    virtual void endOfDay(::Player const* player) const /*override*/;

    // vIndex: 11
    virtual void entitySpawned(::Player const* player, int mobType, uint spawnMethod) const /*override*/;

    // vIndex: 12
    virtual void
    itemAcquired(::Player const* player, ::ItemDescriptor const& item, int, uint amountAcquired, int acquisitionMethod)
        const /*override*/;

    // vIndex: 13
    virtual void itemCrafted(
        ::Player const*       player,
        bool                  craftingTable,
        ::ItemInstance const& item,
        bool                  recipeBook,
        bool                  hadSearchString,
        bool                  craftedAutomatically,
        int                   startingTabId,
        int                   endingTabId,
        int                   numTabsChanged,
        bool                  filterOn,
        bool                  recipeBookShown
    ) const /*override*/;

    // vIndex: 14
    virtual void itemDropped(::Player const* player, ::ItemDescriptor const& item) const /*override*/;

    // vIndex: 15
    virtual void itemEquipped(::Player const* player, ::ItemInstance const& item, int slot) const /*override*/;

    // vIndex: 16
    virtual void itemInteracted(::Player const* player, ::ItemInstance const& item, int method) const /*override*/;

    // vIndex: 17
    virtual void
    itemSmelted(::Player const* player, ::ItemDescriptor const& item, ::ItemDescriptor const& lastFuelItem) const
        /*override*/;

    // vIndex: 18
    virtual void itemUsed(::Player const* player, ::ItemDescriptor const& item, int useMethod) const /*override*/;

    // vIndex: 19
    virtual void mobInteracted(
        ::Player const* player,
        int             legacyInteractedEntityType,
        int             interactionType,
        int             interactedEntityVariant,
        uchar           interactedEntityColor
    ) const /*override*/;

    // vIndex: 20
    virtual void mobKilled(
        ::Player const* player,
        ::Actor*        entKiller,
        ::Mob&          mobKilled,
        uint            method,
        ::std::string const&,
        int traderTier
    ) const /*override*/;

    // vIndex: 21
    virtual void
    piglinBarter(::Player const* player, ::std::string const& itemUsed, bool wasTargetingBarteringPlayer) const
        /*override*/;

    // vIndex: 22
    virtual void playerBounced(::Player const* player, ::Block const& block, int bounceHeight, int auxType) const
        /*override*/;

    // vIndex: 23
    virtual void playerDied(::Player const* player, int killerId, int killerVariant, int reason, bool inRaid) const
        /*override*/;

    // vIndex: 24
    virtual void playerJoined(::Player const* player) const /*override*/;

    // vIndex: 25
    virtual void playerLeave(::Player const* player) const /*override*/;

    // vIndex: 26
    virtual void playerMessage(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message,
        ::std::string const& messageType
    ) const /*override*/;

    // vIndex: 27
    virtual void playerTeleported(::Player const* player, float metersTravelled, int cause, int sourceType) const
        /*override*/;

    // vIndex: 28
    virtual void playerTransform(::Player const* player) const /*override*/;

    // vIndex: 29
    virtual void
    playerTravelled(::Player const* player, float metersTravelledSinceLastEvent, int travelMethodType, int newBiome)
        const /*override*/;

    // vIndex: 30
    virtual void targetBlockHit(::Player const* player, int const redstoneLevel) const /*override*/;

    // vIndex: 31
    virtual void tradeCompleted(
        ::Player const*         player,
        ::Actor*                trader,
        ::ItemDescriptor const& itemA,
        ::ItemDescriptor const& itemB,
        ::ItemInstance const&   tradedFor,
        int                     traderEmeraldCount
    ) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $onAgentAction(::AgentActionType actionType, ::std::string const& requestId, ::Json::Value const& result) const;

    MCAPI void $onCommand(::CommandOrigin const& origin, ::CommandOutput const& output);

    MCAPI void
    $blockBroken(::Player const* player, ::Block const& block, int method, int variantData, ushort auxType) const;

    MCAPI void $blockPlaced(::Player const* player, ::Block const& block, bool underWater, ushort auxType) const;

    MCAPI void $cameraUsed(bool isSelfie) const;

    MCAPI void $codeBuilderRuntimeAction(::std::string const& action) const;

    MCAPI void $codeBuilderScoreChanged(::std::string const& objective, int const score) const;

    MCAPI void $chunkChanged(::LevelChunk& chunk) const;

    MCAPI void $chunkLoaded(::LevelChunk& chunk) const;

    MCAPI void $chunkUnloaded(::LevelChunk& chunk) const;

    MCAPI void $endOfDay(::Player const* player) const;

    MCAPI void $entitySpawned(::Player const* player, int mobType, uint spawnMethod) const;

    MCAPI void
    $itemAcquired(::Player const* player, ::ItemDescriptor const& item, int, uint amountAcquired, int acquisitionMethod)
        const;

    MCAPI void $itemCrafted(
        ::Player const*       player,
        bool                  craftingTable,
        ::ItemInstance const& item,
        bool                  recipeBook,
        bool                  hadSearchString,
        bool                  craftedAutomatically,
        int                   startingTabId,
        int                   endingTabId,
        int                   numTabsChanged,
        bool                  filterOn,
        bool                  recipeBookShown
    ) const;

    MCAPI void $itemDropped(::Player const* player, ::ItemDescriptor const& item) const;

    MCAPI void $itemEquipped(::Player const* player, ::ItemInstance const& item, int slot) const;

    MCAPI void $itemInteracted(::Player const* player, ::ItemInstance const& item, int method) const;

    MCAPI void
    $itemSmelted(::Player const* player, ::ItemDescriptor const& item, ::ItemDescriptor const& lastFuelItem) const;

    MCAPI void $itemUsed(::Player const* player, ::ItemDescriptor const& item, int useMethod) const;

    MCAPI void $mobInteracted(
        ::Player const* player,
        int             legacyInteractedEntityType,
        int             interactionType,
        int             interactedEntityVariant,
        uchar           interactedEntityColor
    ) const;

    MCAPI void $mobKilled(
        ::Player const* player,
        ::Actor*        entKiller,
        ::Mob&          mobKilled,
        uint            method,
        ::std::string const&,
        int traderTier
    ) const;

    MCAPI void
    $piglinBarter(::Player const* player, ::std::string const& itemUsed, bool wasTargetingBarteringPlayer) const;

    MCAPI void $playerBounced(::Player const* player, ::Block const& block, int bounceHeight, int auxType) const;

    MCAPI void $playerDied(::Player const* player, int killerId, int killerVariant, int reason, bool inRaid) const;

    MCAPI void $playerJoined(::Player const* player) const;

    MCAPI void $playerLeave(::Player const* player) const;

    MCAPI void $playerMessage(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message,
        ::std::string const& messageType
    ) const;

    MCAPI void $playerTeleported(::Player const* player, float metersTravelled, int cause, int sourceType) const;

    MCAPI void $playerTransform(::Player const* player) const;

    MCAPI void
    $playerTravelled(::Player const* player, float metersTravelledSinceLastEvent, int travelMethodType, int newBiome)
        const;

    MCAPI void $targetBlockHit(::Player const* player, int const redstoneLevel) const;

    MCAPI void $tradeCompleted(
        ::Player const*         player,
        ::Actor*                trader,
        ::ItemDescriptor const& itemA,
        ::ItemDescriptor const& itemB,
        ::ItemInstance const&   tradedFor,
        int                     traderEmeraldCount
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForEnableNonOwnerReferences();

    MCAPI static void** $vftableForCommandOutputObserver();
    // NOLINTEND
};

} // namespace CodeBuilder
