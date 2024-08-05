#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/deps/core/common/bedrock/pubsub/Connector.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/player/IPlayerDimensionTransferer.h"

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
    virtual void
    playerSaveLimboActors(class Player&, class ChangeDimensionRequest&, class Dimension&, class PlayerLimboActorManager*);

    // vIndex: 4
    virtual void playerDestroyRemotePlayers(class GameplayUserManager&);

    // vIndex: 5
    virtual void playerStartChangeDimensionSuspendRegion(class Player&, DimensionType);

    // vIndex: 6
    virtual void setTransitionLocation(class Player&, class ChangeDimensionRequest&, class Dimension&);

    // vIndex: 7
    virtual void syncTransitionComponentTargetPosition(class Player&, class ChangeDimensionRequest const&);

    // vIndex: 8
    virtual void playerDestroyRegion(class Player&, class ChangeDimensionRequest const&);

    // vIndex: 9
    virtual void playerPrepareRegion(class Player&, class ChangeDimensionRequest const&, class Dimension const&);

    // vIndex: 10
    virtual bool playerWaitForServer(class Player&, std::chrono::steady_clock::time_point);

    // vIndex: 11
    virtual bool playerWaitForDimensionTransitionSystem(class Player const&, class EntityRegistry&);

    // vIndex: 12
    virtual void sendClientRespawnMovePacketFromServer(class Player const&, class ChangeDimensionRequest&);

    // vIndex: 13
    virtual bool waitForSubChunks(class Player&, class Dimension const&);

    // vIndex: 14
    virtual void startWaitForRespawn(class Player const&);

    // vIndex: 15
    virtual void playerSwitchDimension(class Player&, class ChangeDimensionRequest&, struct AddLimboActorHelper*);

    // vIndex: 16
    virtual bool doRespawnIfReady(class Player&, class ChangeDimensionRequest&, struct AddLimboActorHelper*);

    // vIndex: 17
    virtual void setPacketSender(class PacketSender&);

    MCAPI
    PlayerDimensionTransferer(std::unique_ptr<class IPlayerDimensionTransferProxy>, bool, gsl::not_null<class StackRefResult<class PortalForcer>> const&, std::unique_ptr<class ISharedSpawnGetter>, class StackRefResult<class LevelStorage> const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _finalizeDimensionChange(class Player&, class ChangeDimensionRequest const&);

    MCAPI void _loadAgentFromTag(class Player&, class ChangeDimensionRequest&, struct AddLimboActorHelper&);

    // NOLINTEND
};
