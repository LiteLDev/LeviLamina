#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/CommandOutputObserver.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/packet/AgentActionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class ItemDescriptor;
class ItemInstance;
class LevelChunk;
class Mob;
class Player;
namespace Json { class Value; }
// clang-format on

namespace CodeBuilder {

class IMessenger : public ::Bedrock::EnableNonOwnerReferences, public ::CodeBuilder::CommandOutputObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMessenger() /*override*/;

    virtual void
    onAgentAction(::AgentActionType actionType, ::std::string const& requestId, ::Json::Value const& result) const = 0;

    virtual void
    blockBroken(::Player const* player, ::Block const& block, int method, int variantData, ushort auxType) const = 0;

    virtual void blockPlaced(::Player const* player, ::Block const& block, bool underWater, ushort auxType) const = 0;

    virtual void blockPlacedByCommand(::Block const& block, ushort auxType, int numberOfBlocksPlaced) const = 0;

    virtual void cameraUsed(bool isSelfie) const = 0;

    virtual void codeBuilderRuntimeAction(::std::string const& action) const = 0;

    virtual void codeBuilderScoreChanged(::std::string const& objective, int const score) const = 0;

    virtual void chunkChanged(::LevelChunk& chunk) const = 0;

    virtual void chunkLoaded(::LevelChunk& chunk) const = 0;

    virtual void chunkUnloaded(::LevelChunk& chunk) const = 0;

    virtual void endOfDay(::Player const* player) const = 0;

    virtual void entitySpawned(::Player const* player, int mobType, uint spawnMethod) const = 0;

    virtual void itemAcquired(::Player const*, ::ItemDescriptor const&, int, uint, int) const = 0;

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
    ) const = 0;

    virtual void itemDropped(::Player const* player, ::ItemDescriptor const& item) const = 0;

    virtual void itemEquipped(::Player const* player, ::ItemInstance const& item, int slot) const = 0;

    virtual void itemInteracted(::Player const* player, ::ItemInstance const& item, int method) const = 0;

    virtual void
    itemSmelted(::Player const* player, ::ItemDescriptor const& item, ::ItemDescriptor const& lastFuelItem) const = 0;

    virtual void itemUsed(::Player const* player, ::ItemDescriptor const& item, int useMethod) const = 0;

    virtual void mobInteracted(
        ::Player const* player,
        int             legacyInteractedEntityType,
        int             interactionType,
        int             interactedEntityVariant,
        uchar           interactedEntityColor
    ) const = 0;

    virtual void mobKilled(::Player const*, ::Actor*, ::Mob&, uint, ::std::string const&, int) const = 0;

    virtual void
    piglinBarter(::Player const* player, ::std::string const& itemUsed, bool wasTargetingBarteringPlayer) const = 0;

    virtual void playerBounced(::Player const* player, ::Block const& block, int bounceHeight, int auxType) const = 0;

    virtual void playerDied(::Player const* player, int killerId, int killerVariant, int reason, bool inRaid) const = 0;

    virtual void playerJoined(::Player const* player) const = 0;

    virtual void playerLeave(::Player const* player) const = 0;

    virtual void playerMessage(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message,
        ::std::string const& messageType
    ) const = 0;

    virtual void playerTeleported(::Player const* player, float metersTravelled, int cause, int sourceType) const = 0;

    virtual void playerTransform(::Player const* player) const = 0;

    virtual void playerTravelled(
        ::Player const* player,
        float           metersTravelledSinceLastEvent,
        int             travelMethodType,
        int             newBiome
    ) const = 0;

    virtual void targetBlockHit(::Player const* player, int const redstoneLevel) const = 0;

    virtual void tradeCompleted(
        ::Player const*         player,
        ::Actor*                trader,
        ::ItemDescriptor const& itemA,
        ::ItemDescriptor const& itemB,
        ::ItemInstance const&   tradedFor,
        int                     traderEmeraldCount
    ) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace CodeBuilder
