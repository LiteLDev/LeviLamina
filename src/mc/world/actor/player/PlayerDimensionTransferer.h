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
    // vIndex: 0, symbol:
    // ?getOnAnyPlayerChangeDimensionPreSuspendRegionConnector@PlayerDimensionTransferer@@UEAAAEAV?$Connector@$$A6AXV?$AutomaticID@VDimension@@H@@@Z@PubSub@Bedrock@@XZ
    virtual class Bedrock::PubSub::Connector<void(DimensionType)>&
    getOnAnyPlayerChangeDimensionPreSuspendRegionConnector();

    // vIndex: 1, symbol:
    // ?getOnAnyPlayerChangeDimensionPrepareRegionCompleteConnector@PlayerDimensionTransferer@@UEAAAEAV?$Connector@$$A6AXXZ@PubSub@Bedrock@@XZ
    virtual class Bedrock::PubSub::Connector<void()>& getOnAnyPlayerChangeDimensionPrepareRegionCompleteConnector();

    // vIndex: 2, symbol: __gen_??1PlayerDimensionTransferer@@UEAA@XZ
    virtual ~PlayerDimensionTransferer() = default;

    // vIndex: 3, symbol:
    // ?playerSaveLimboActors@PlayerDimensionTransferer@@UEAAXAEAVPlayer@@AEAVChangeDimensionRequest@@AEAVDimension@@PEAVPlayerLimboActorManager@@@Z
    virtual void
    playerSaveLimboActors(class Player&, class ChangeDimensionRequest&, class Dimension&, class PlayerLimboActorManager*);

    // vIndex: 4, symbol: ?playerDestroyRemotePlayers@PlayerDimensionTransferer@@UEAAXAEAVGameplayUserManager@@@Z
    virtual void playerDestroyRemotePlayers(class GameplayUserManager&);

    // vIndex: 5, symbol:
    // ?playerStartChangeDimensionSuspendRegion@PlayerDimensionTransferer@@UEAAXAEAVPlayer@@V?$AutomaticID@VDimension@@H@@@Z
    virtual void playerStartChangeDimensionSuspendRegion(class Player&, DimensionType);

    // vIndex: 6, symbol:
    // ?setTransitionLocation@PlayerDimensionTransferer@@UEAAXAEAVPlayer@@AEAVChangeDimensionRequest@@AEAVDimension@@@Z
    virtual void setTransitionLocation(class Player&, class ChangeDimensionRequest&, class Dimension&);

    // vIndex: 7, symbol:
    // ?syncTransitionComponentTargetPosition@PlayerDimensionTransferer@@UEAAXAEAVPlayer@@AEBVChangeDimensionRequest@@@Z
    virtual void syncTransitionComponentTargetPosition(class Player&, class ChangeDimensionRequest const&);

    // vIndex: 8, symbol:
    // ?playerDestroyRegion@PlayerDimensionTransferer@@UEAAXAEAVPlayer@@AEBVChangeDimensionRequest@@@Z
    virtual void playerDestroyRegion(class Player&, class ChangeDimensionRequest const&);

    // vIndex: 9, symbol:
    // ?playerPrepareRegion@PlayerDimensionTransferer@@UEAAXAEAVPlayer@@AEBVChangeDimensionRequest@@AEBVDimension@@@Z
    virtual void playerPrepareRegion(class Player&, class ChangeDimensionRequest const&, class Dimension const&);

    // vIndex: 10, symbol:
    // ?playerWaitForServer@PlayerDimensionTransferer@@UEAA_NAEAVPlayer@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    virtual bool playerWaitForServer(class Player&, std::chrono::steady_clock::time_point);

    // vIndex: 11, symbol:
    // ?playerWaitForDimensionTransitionSystem@PlayerDimensionTransferer@@UEAA_NAEBVPlayer@@AEAVEntityRegistry@@@Z
    virtual bool playerWaitForDimensionTransitionSystem(class Player const&, class EntityRegistry&);

    // vIndex: 12, symbol:
    // ?sendClientRespawnMovePacketFromServer@PlayerDimensionTransferer@@UEAAXAEBVPlayer@@AEAVChangeDimensionRequest@@@Z
    virtual void sendClientRespawnMovePacketFromServer(class Player const&, class ChangeDimensionRequest&);

    // vIndex: 13, symbol: ?waitForSubChunks@PlayerDimensionTransferer@@UEAA_NAEAVPlayer@@AEBVDimension@@@Z
    virtual bool waitForSubChunks(class Player&, class Dimension const&);

    // vIndex: 14, symbol: ?startWaitForRespawn@PlayerDimensionTransferer@@UEAAXAEBVPlayer@@@Z
    virtual void startWaitForRespawn(class Player const&);

    // vIndex: 15, symbol:
    // ?playerSwitchDimension@PlayerDimensionTransferer@@UEAAXAEAVPlayer@@AEAVChangeDimensionRequest@@PEAUAddLimboActorHelper@@@Z
    virtual void playerSwitchDimension(class Player&, class ChangeDimensionRequest&, struct AddLimboActorHelper*);

    // vIndex: 16, symbol:
    // ?doRespawnIfReady@PlayerDimensionTransferer@@UEAA_NAEAVPlayer@@AEAVChangeDimensionRequest@@PEAUAddLimboActorHelper@@@Z
    virtual bool doRespawnIfReady(class Player&, class ChangeDimensionRequest&, struct AddLimboActorHelper*);

    // vIndex: 17, symbol: ?setPacketSender@PlayerDimensionTransferer@@UEAAXAEAVPacketSender@@@Z
    virtual void setPacketSender(class PacketSender&);

    // symbol:
    // ??0PlayerDimensionTransferer@@QEAA@V?$unique_ptr@VIPlayerDimensionTransferProxy@@U?$default_delete@VIPlayerDimensionTransferProxy@@@std@@@std@@_NAEBV?$not_null@V?$StackRefResult@VPortalForcer@@@@@gsl@@V?$unique_ptr@VISharedSpawnGetter@@U?$default_delete@VISharedSpawnGetter@@@std@@@2@AEBV?$StackRefResult@VLevelStorage@@@@@Z
    MCAPI
    PlayerDimensionTransferer(std::unique_ptr<class IPlayerDimensionTransferProxy>, bool, gsl::not_null<class StackRefResult<class PortalForcer>> const&, std::unique_ptr<class ISharedSpawnGetter>, class StackRefResult<class LevelStorage> const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_finalizeDimensionChange@PlayerDimensionTransferer@@AEAAXAEAVPlayer@@AEBVChangeDimensionRequest@@@Z
    MCAPI void _finalizeDimensionChange(class Player&, class ChangeDimensionRequest const&);

    // symbol:
    // ?_loadAgentFromTag@PlayerDimensionTransferer@@AEAAXAEAVPlayer@@AEAVChangeDimensionRequest@@AEAUAddLimboActorHelper@@@Z
    MCAPI void _loadAgentFromTag(class Player&, class ChangeDimensionRequest&, struct AddLimboActorHelper&);

    // NOLINTEND
};
