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
    virtual ~Messenger() /*override*/ = default;

    virtual void
    onAgentAction(::AgentActionType actionType, ::std::string const& requestId, ::Json::Value const& result) const
        /*override*/;

    virtual void onCommand(::CommandOrigin const& origin, ::CommandOutput const& output) /*override*/;

    virtual void
    blockBroken(::Player const* player, ::Block const& block, int method, int variantData, ushort auxType) const
        /*override*/;

    virtual void blockPlaced(::Player const* player, ::Block const& block, bool underWater, ushort auxType) const
        /*override*/;

    virtual void cameraUsed(bool isSelfie) const /*override*/;

    virtual void codeBuilderRuntimeAction(::std::string const& action) const /*override*/;

    virtual void codeBuilderScoreChanged(::std::string const& objective, int const score) const /*override*/;

    virtual void chunkChanged(::LevelChunk& chunk) const /*override*/;

    virtual void chunkLoaded(::LevelChunk& chunk) const /*override*/;

    virtual void chunkUnloaded(::LevelChunk& chunk) const /*override*/;

    virtual void endOfDay(::Player const* player) const /*override*/;

    virtual void entitySpawned(::Player const* player, int mobType, uint spawnMethod) const /*override*/;

    virtual void itemAcquired(
        ::Player const*         player,
        ::ItemDescriptor const& item,
        int,
        uint amountAcquired,
        int  acquisitionMethod
    ) const /*override*/;

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

    virtual void itemDropped(::Player const* player, ::ItemDescriptor const& item) const /*override*/;

    virtual void itemEquipped(::Player const* player, ::ItemInstance const& item, int slot) const /*override*/;

    virtual void itemInteracted(::Player const* player, ::ItemInstance const& item, int method) const /*override*/;

    virtual void
    itemSmelted(::Player const* player, ::ItemDescriptor const& item, ::ItemDescriptor const& lastFuelItem) const
        /*override*/;

    virtual void itemUsed(::Player const* player, ::ItemDescriptor const& item, int useMethod) const /*override*/;

    virtual void mobInteracted(
        ::Player const* player,
        int             legacyInteractedEntityType,
        int             interactionType,
        int             interactedEntityVariant,
        uchar           interactedEntityColor
    ) const /*override*/;

    virtual void mobKilled(
        ::Player const* player,
        ::Actor*        entKiller,
        ::Mob&          mobKilled,
        uint            method,
        ::std::string const&,
        int traderTier
    ) const /*override*/;

    virtual void
    piglinBarter(::Player const* player, ::std::string const& itemUsed, bool wasTargetingBarteringPlayer) const
        /*override*/;

    virtual void playerBounced(::Player const* player, ::Block const& block, int bounceHeight, int auxType) const
        /*override*/;

    virtual void playerDied(::Player const* player, int killerId, int killerVariant, int reason, bool inRaid) const
        /*override*/;

    virtual void playerJoined(::Player const* player) const /*override*/;

    virtual void playerLeave(::Player const* player) const /*override*/;

    virtual void playerMessage(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message,
        ::std::string const& messageType
    ) const /*override*/;

    virtual void playerTeleported(::Player const* player, float metersTravelled, int cause, int sourceType) const
        /*override*/;

    virtual void playerTransform(::Player const* player) const /*override*/;

    virtual void playerTravelled(
        ::Player const* player,
        float           metersTravelledSinceLastEvent,
        int             travelMethodType,
        int             newBiome
    ) const /*override*/;

    virtual void targetBlockHit(::Player const* player, int const redstoneLevel) const /*override*/;

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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
    $onAgentAction(::AgentActionType actionType, ::std::string const& requestId, ::Json::Value const& result) const;

    MCNAPI void $onCommand(::CommandOrigin const& origin, ::CommandOutput const& output);

    MCNAPI void
    $blockBroken(::Player const* player, ::Block const& block, int method, int variantData, ushort auxType) const;

    MCNAPI void $blockPlaced(::Player const* player, ::Block const& block, bool underWater, ushort auxType) const;

    MCNAPI void $cameraUsed(bool isSelfie) const;

    MCNAPI void $codeBuilderRuntimeAction(::std::string const& action) const;

    MCNAPI void $codeBuilderScoreChanged(::std::string const& objective, int const score) const;

    MCNAPI void $chunkChanged(::LevelChunk& chunk) const;

    MCNAPI void $chunkLoaded(::LevelChunk& chunk) const;

    MCNAPI void $chunkUnloaded(::LevelChunk& chunk) const;

    MCNAPI void $endOfDay(::Player const* player) const;

    MCNAPI void $entitySpawned(::Player const* player, int mobType, uint spawnMethod) const;

    MCNAPI void $itemAcquired(
        ::Player const*         player,
        ::ItemDescriptor const& item,
        int,
        uint amountAcquired,
        int  acquisitionMethod
    ) const;

    MCNAPI void $itemCrafted(
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

    MCNAPI void $itemDropped(::Player const* player, ::ItemDescriptor const& item) const;

    MCNAPI void $itemEquipped(::Player const* player, ::ItemInstance const& item, int slot) const;

    MCNAPI void $itemInteracted(::Player const* player, ::ItemInstance const& item, int method) const;

    MCNAPI void
    $itemSmelted(::Player const* player, ::ItemDescriptor const& item, ::ItemDescriptor const& lastFuelItem) const;

    MCNAPI void $itemUsed(::Player const* player, ::ItemDescriptor const& item, int useMethod) const;

    MCNAPI void $mobInteracted(
        ::Player const* player,
        int             legacyInteractedEntityType,
        int             interactionType,
        int             interactedEntityVariant,
        uchar           interactedEntityColor
    ) const;

    MCNAPI void $mobKilled(
        ::Player const* player,
        ::Actor*        entKiller,
        ::Mob&          mobKilled,
        uint            method,
        ::std::string const&,
        int traderTier
    ) const;

    MCNAPI void
    $piglinBarter(::Player const* player, ::std::string const& itemUsed, bool wasTargetingBarteringPlayer) const;

    MCNAPI void $playerBounced(::Player const* player, ::Block const& block, int bounceHeight, int auxType) const;

    MCNAPI void $playerDied(::Player const* player, int killerId, int killerVariant, int reason, bool inRaid) const;

    MCNAPI void $playerJoined(::Player const* player) const;

    MCNAPI void $playerLeave(::Player const* player) const;

    MCNAPI void $playerMessage(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message,
        ::std::string const& messageType
    ) const;

    MCNAPI void $playerTeleported(::Player const* player, float metersTravelled, int cause, int sourceType) const;

    MCNAPI void $playerTransform(::Player const* player) const;

    MCNAPI void $playerTravelled(
        ::Player const* player,
        float           metersTravelledSinceLastEvent,
        int             travelMethodType,
        int             newBiome
    ) const;

    MCNAPI void $targetBlockHit(::Player const* player, int const redstoneLevel) const;

    MCNAPI void $tradeCompleted(
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
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForCommandOutputObserver();
    // NOLINTEND
};

} // namespace CodeBuilder
