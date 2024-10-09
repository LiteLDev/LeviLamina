#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/world/level/IPlayerDimensionTransferer.h"

class PlayerDimensionTransferer : public ::IPlayerDimensionTransferer {
public:
    // prevent constructor by default
    PlayerDimensionTransferer& operator=(PlayerDimensionTransferer const&);
    PlayerDimensionTransferer(PlayerDimensionTransferer const&);
    PlayerDimensionTransferer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual class Bedrock::PubSub::Connector<void(DimensionType)>&
    getOnAnyPlayerChangeDimensionPreSuspendRegionConnector();

    // vIndex: 1
    virtual class Bedrock::PubSub::Connector<void()>& getOnAnyPlayerChangeDimensionPrepareRegionCompleteConnector();

    // vIndex: 2
    virtual ~PlayerDimensionTransferer() = default;

    // vIndex: 3
    virtual void playerSaveLimboActors(
        class Player&                  player,
        class ChangeDimensionRequest&  changeRequest,
        class Dimension&               toDimension,
        class PlayerLimboActorManager* playerLimboActorManager
    );

    // vIndex: 4
    virtual void playerDestroyRemotePlayers(class GameplayUserManager& gameplayUserManager);

    // vIndex: 5
    virtual void playerStartChangeDimensionSuspendRegion(class Player& player, DimensionType fromDimension);

    // vIndex: 6
    virtual void setTransitionLocation(
        class Player&                 player,
        class ChangeDimensionRequest& changeRequest,
        class Dimension&              toDimension
    );

    // vIndex: 7
    virtual void
    syncTransitionComponentTargetPosition(class Player& player, class ChangeDimensionRequest const& changeRequest);

    // vIndex: 8
    virtual void playerDestroyRegion(class Player& player, class ChangeDimensionRequest const& changeRequest);

    // vIndex: 9
    virtual void playerPrepareRegion(
        class Player&                       player,
        class ChangeDimensionRequest const& changeRequest,
        class Dimension const&              toDimension
    );

    // vIndex: 10
    virtual bool playerWaitForServer(class Player& player, std::chrono::steady_clock::time_point currentTime);

    // vIndex: 11
    virtual bool
    playerWaitForDimensionTransitionSystem(class Player const& player, class EntityRegistry& entityRegistry);

    // vIndex: 12
    virtual void
    sendClientRespawnMovePacketFromServer(class Player const& player, class ChangeDimensionRequest& changeRequest);

    // vIndex: 13
    virtual bool waitForSubChunks(class Player& player, class Dimension const& toDimension);

    // vIndex: 14
    virtual void startWaitForRespawn(class Player const& player);

    // vIndex: 15
    virtual void playerSwitchDimension(
        class Player&                 player,
        class ChangeDimensionRequest& changeRequest,
        struct AddLimboActorHelper*   addLimboActorHelper
    );

    // vIndex: 16
    virtual bool doRespawnIfReady(
        class Player&                 player,
        class ChangeDimensionRequest& changeRequest,
        struct AddLimboActorHelper*   addLimboActorHelper
    );

    // vIndex: 17
    virtual void setPacketSender(class PacketSender& packetSender);

    MCAPI PlayerDimensionTransferer(
        std::unique_ptr<class IPlayerDimensionTransferProxy>           playerDimensionTransferProxy,
        bool                                                           isClientSide,
        gsl::not_null<class StackRefResult<class PortalForcer>> const& portalForcer,
        std::unique_ptr<class ISharedSpawnGetter>                      sharedSpawnGetter,
        class StackRefResult<class LevelStorage> const&                levelStorage
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _finalizeDimensionChange(class Player& player, class ChangeDimensionRequest const& changeRequest);

    MCAPI void _loadAgentFromTag(
        class Player&                 player,
        class ChangeDimensionRequest& changeRequest,
        struct AddLimboActorHelper&   addLimboActorHelper
    );

    // NOLINTEND
};
