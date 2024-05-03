#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/ServerPlayer.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/ParticleType.h"
#include "mc/enums/SubClientId.h"
#include "mc/enums/connection/DisconnectFailReason.h"
#include "mc/events/ServerTextEvent.h"
#include "mc/services/ServiceReference.h"
#include "mc/world/actor/player/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
namespace Automation { class AutomationClient; }
namespace Social { class MultiplayerServiceManager; }
namespace mce { class UUID; }
// clang-format on

class NetworkIdentifier;

class ServerNetworkHandler {
public:
    // ServerNetworkHandler inner types declare
    // clang-format off
    class Client;
    struct HandlerToggles;
    // clang-format on

    // ServerNetworkHandler inner types define
    class Client {
    public:
        // prevent constructor by default
        Client& operator=(Client const&);
        Client(Client const&);
        Client();

    public:
        // NOLINTBEGIN
        // symbol: ?removeSubClientRequest@Client@ServerNetworkHandler@@QEAAXW4SubClientId@@@Z
        MCAPI void removeSubClientRequest(::SubClientId subClientId);

        // NOLINTEND
    };

    struct HandlerToggles {
    public:
        // prevent constructor by default
        HandlerToggles& operator=(HandlerToggles const&);
        HandlerToggles(HandlerToggles const&);
        HandlerToggles();
    };

public:
    // Do not use _getServerPlayer directly
    // Please get SubID from the packet
    [[nodiscard]] inline optional_ref<ServerPlayer>
    getServerPlayer(class NetworkIdentifier const& source, ::SubClientId subId) {
        auto& handler = ll::memory::dAccess<ServerNetworkHandler>(this, -16);
        return {handler._getServerPlayer(source, subId)};
    }

    // prevent constructor by default
    ServerNetworkHandler& operator=(ServerNetworkHandler const&);
    ServerNetworkHandler(ServerNetworkHandler const&);
    ServerNetworkHandler();

public:
    // NOLINTBEGIN
    // symbol: ?_getServerPlayer@ServerNetworkHandler@@EEAAPEAVServerPlayer@@AEBVNetworkIdentifier@@W4SubClientId@@@Z
    MCVAPI class ServerPlayer* _getServerPlayer(class NetworkIdentifier const& source, ::SubClientId subId);

    // symbol: ?allowIncomingPacketId@ServerNetworkHandler@@UEAA_NAEBVNetworkIdentifier@@W4MinecraftPacketIds@@@Z
    MCVAPI bool allowIncomingPacketId(class NetworkIdentifier const& id, ::MinecraftPacketIds packetId);

    // symbol: ?completeHandshake@ServerNetworkHandler@@MEAAXAEBVNetworkIdentifier@@@Z
    MCVAPI void completeHandshake(class NetworkIdentifier const&);

    // symbol: ?getGameSpecificNetEventCallback@ServerNetworkHandler@@UEAAPEAVGameSpecificNetEventCallback@@XZ
    MCVAPI class GameSpecificNetEventCallback* getGameSpecificNetEventCallback();

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSetPlayerInventoryOptionsPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetPlayerInventoryOptionsPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVChangeMobPropertyPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const&, class ChangeMobPropertyPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPhotoTransferPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PhotoTransferPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVCreatePhotoPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class CreatePhotoPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVEditorNetworkPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class EditorNetworkPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPurchaseReceiptPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PurchaseReceiptPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVCompletedUsingItemPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class CompletedUsingItemPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVActorPickRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ActorPickRequestPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVMultiplayerSettingsPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class MultiplayerSettingsPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVCodeBuilderSourcePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class CodeBuilderSourcePacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerSkinPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PlayerSkinPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVClientCacheStatusPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ClientCacheStatusPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVGameTestRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class GameTestRequestPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVMobEquipmentPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class MobEquipmentPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVLabTablePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class LabTablePacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVUpdatePlayerGameTypePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class UpdatePlayerGameTypePacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVNpcRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class NpcRequestPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVMovePlayerPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class MovePlayerPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackChunkRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ResourcePackChunkRequestPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVRequestAbilityPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class RequestAbilityPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVBlockPickRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class BlockPickRequestPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerHotbarPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PlayerHotbarPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVLevelSoundEventPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class LevelSoundEventPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVLevelSoundEventPacketV2@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class LevelSoundEventPacketV2 const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVLoginPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class LoginPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVStructureBlockUpdatePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class StructureBlockUpdatePacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVEmotePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class EmotePacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSubChunkRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SubChunkRequestPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVClientCacheBlobStatusPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ClientCacheBlobStatusPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVScriptMessagePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ScriptMessagePacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVBossEventPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class BossEventPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVAnvilDamagePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class AnvilDamagePacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSetLocalPlayerAsInitializedPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetLocalPlayerAsInitializedPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVDebugInfoPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class DebugInfoPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVCommandRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class CommandRequestPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVCommandBlockUpdatePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class CommandBlockUpdatePacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSubClientLoginPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SubClientLoginPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVContainerClosePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ContainerClosePacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVDisconnectPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class DisconnectPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSetDifficultyPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetDifficultyPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVEmoteListPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class EmoteListPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPassengerJumpPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PassengerJumpPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSimpleEventPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SimpleEventPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVModalFormResponsePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ModalFormResponsePacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VBlockActorDataPacket@@@std@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, std::shared_ptr<class BlockActorDataPacket> packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVMapInfoRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class MapInfoRequestPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVRequestPermissionsPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class RequestPermissionsPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVRequestChunkRadiusPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class RequestChunkRadiusPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSpawnExperienceOrbPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SpawnExperienceOrbPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVBookEditPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class BookEditPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerActionPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PlayerActionPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVTextPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class TextPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVMapCreateLockedCopyPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class MapCreateLockedCopyPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVRespawnPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class RespawnPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVActorEventPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ActorEventPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerAuthInputPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PlayerAuthInputPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSettingsCommandPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SettingsCommandPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVRequestNetworkSettingsPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class RequestNetworkSettingsPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPositionTrackingDBClientRequestPacket@@@Z
    MCVAPI void
    handle(class NetworkIdentifier const& source, class PositionTrackingDBClientRequestPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVLevelSoundEventPacketV1@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class LevelSoundEventPacketV1 const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVNetworkStackLatencyPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class NetworkStackLatencyPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVItemStackRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ItemStackRequestPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVTickSyncPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class TickSyncPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSetPlayerGameTypePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetPlayerGameTypePacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVMoveActorAbsolutePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class MoveActorAbsolutePacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerInputPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PlayerInputPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVStructureTemplateDataRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class StructureTemplateDataRequestPacket const& packet);

    // symbol:
    // ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VInventoryTransactionPacket@@@std@@@Z
    MCVAPI void handle(class NetworkIdentifier const&, std::shared_ptr<class InventoryTransactionPacket>);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVAnimatePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class AnimatePacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVInteractPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class InteractPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVClientToServerHandshakePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ClientToServerHandshakePacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVShowCreditsPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ShowCreditsPacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVLecternUpdatePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class LecternUpdatePacket const& packet);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerToggleCrafterSlotRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const&, class PlayerToggleCrafterSlotRequestPacket const&);

    // symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSetDefaultGameTypePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetDefaultGameTypePacket const& packet);

    // symbol: ?onConnect@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@@Z
    MCVAPI void onConnect(class NetworkIdentifier const&);

    // symbol:
    // ?onDisconnect@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@W4DisconnectFailReason@Connection@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N2@Z
    MCVAPI void
    onDisconnect(class NetworkIdentifier const&, ::Connection::DisconnectFailReason, std::string const&, bool, std::string const&);

    // symbol:
    // ?onInvalidPlayerJoinedLobby@ServerNetworkHandler@@UEAAXAEBVUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void onInvalidPlayerJoinedLobby(class mce::UUID const& uuid, std::string const& xuid);

    // symbol: ?onPlayerReady@ServerNetworkHandler@@UEAAXAEAVPlayer@@@Z
    MCVAPI void onPlayerReady(class Player& player);

    // symbol: ?onTick@ServerNetworkHandler@@UEAAXXZ
    MCVAPI void onTick();

    // symbol:
    // ?onTransferRequest@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCVAPI void onTransferRequest(class NetworkIdentifier const& id, std::string const& serverAddress, int serverPort);

    // symbol:
    // ?onWebsocketRequest@ServerNetworkHandler@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$function@$$A6AXXZ@3@@Z
    MCVAPI void onWebsocketRequest(
        std::string const&    serverAddress,
        std::string const&    payload,
        std::function<void()> errorCallback
    );

    // symbol:
    // ?onXboxUserBlocked@ServerNetworkHandler@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void onXboxUserBlocked(std::string const& xuid);

    // symbol:
    // ?onXboxUserUnblocked@ServerNetworkHandler@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void onXboxUserUnblocked(std::string const& xuid);

    // symbol: ?sendServerLegacyParticle@ServerNetworkHandler@@UEAAXW4ParticleType@@AEBVVec3@@1H@Z
    MCVAPI void sendServerLegacyParticle(::ParticleType name, class Vec3 const& pos, class Vec3 const&, int data);

    // symbol: ??1ServerNetworkHandler@@UEAA@XZ
    MCVAPI ~ServerNetworkHandler();

    // symbol:
    // ??0ServerNetworkHandler@@QEAA@AEAVGameCallbacks@@AEBV?$NonOwnerPointer@VILevel@@@Bedrock@@AEAVServerNetworkSystem@@AEAVPrivateKeyManager@@AEAVServerLocator@@AEAVPacketSender@@AEAVAllowList@@PEAVPermissionsFile@@AEBVUUID@mce@@HAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEAVMinecraftCommands@@AEAVIMinecraftApp@@AEBV?$unordered_map@UPackIdVersion@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@UPackIdVersion@@@3@U?$equal_to@UPackIdVersion@@@3@V?$allocator@U?$pair@$$CBUPackIdVersion@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@AEAVScheduler@@V?$NonOwnerPointer@VTextFilteringProcessor@@@3@V?$optional_ref@VMinecraftGameTest@@@@V?$ServiceReference@VAppConfigs@@@@V?$ServiceReference@VMultiplayerServiceManager@Social@@@@AEBUNetworkPermissions@@AEBUHandlerToggles@0@@Z
    MCAPI
    ServerNetworkHandler(class GameCallbacks&, class Bedrock::NonOwnerPointer<class ILevel> const&, class ServerNetworkSystem&, class PrivateKeyManager&, class ServerLocator&, class PacketSender&, class AllowList&, class PermissionsFile*, class mce::UUID const&, int, std::vector<std::string> const&, std::string, int, class MinecraftCommands&, class IMinecraftApp&, std::unordered_map<struct PackIdVersion, std::string> const&, class Scheduler&, class Bedrock::NonOwnerPointer<class TextFilteringProcessor>, class optional_ref<class MinecraftGameTest>, class ServiceReference<class AppConfigs>, class ServiceReference<class Social::MultiplayerServiceManager>, struct NetworkPermissions const&, struct ServerNetworkHandler::HandlerToggles const&);

    // symbol: ?activateAllowList@ServerNetworkHandler@@QEAAXXZ
    MCAPI void activateAllowList();

    // symbol:
    // ?addToDenyList@ServerNetworkHandler@@QEAAXAEBVUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addToDenyList(class mce::UUID const& uuid, std::string const& xuid);

    // symbol:
    // ?allowIncomingConnections@ServerNetworkHandler@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI void allowIncomingConnections(std::string const& serverName, bool shouldAnnounce);

    // symbol:
    // ?createNewPlayer@ServerNetworkHandler@@QEAA?AV?$OwnerPtr@VEntityContext@@@@AEBVNetworkIdentifier@@AEBVConnectionRequest@@@Z
    MCAPI class OwnerPtr<class EntityContext>
    createNewPlayer(class NetworkIdentifier const& source, class ConnectionRequest const& connectionRequest);

    // symbol:
    // ?createSimulatedPlayer@ServerNetworkHandler@@QEAA?AV?$OwnerPtr@VEntityContext@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI class OwnerPtr<class EntityContext> createSimulatedPlayer(std::string const& name, std::string const& xuid);

    // symbol: ?disallowIncomingConnections@ServerNetworkHandler@@QEAAXXZ
    MCAPI void disallowIncomingConnections();

    // symbol:
    // ?disconnectClient@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@W4DisconnectFailReason@Connection@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI void disconnectClient(
        class NetworkIdentifier const&     id,
        ::Connection::DisconnectFailReason subId,
        std::string const&                 message,
        bool                               skipMessage
    );

    // symbol:
    // ?disconnectClient@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@W4SubClientId@@W4DisconnectFailReason@Connection@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI void disconnectClient(
        class NetworkIdentifier const&,
        ::SubClientId,
        ::Connection::DisconnectFailReason,
        std::string const&,
        bool
    );

    // symbol:
    // ?engineCancelResponseHelper@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@AEBVResourcePackClientResponsePacket@@@Z
    MCAPI void engineCancelResponseHelper(
        class NetworkIdentifier const&                source,
        class ResourcePackClientResponsePacket const& packet
    );

    // symbol:
    // ?engineDownloadingFinishedResponseHelper@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@AEBVResourcePackClientResponsePacket@@@Z
    MCAPI void engineDownloadingFinishedResponseHelper(
        class NetworkIdentifier const&                source,
        class ResourcePackClientResponsePacket const& packet
    );

    // symbol:
    // ?engineDownloadingResponseHelper@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@AEBVResourcePackClientResponsePacket@@@Z
    MCAPI void engineDownloadingResponseHelper(
        class NetworkIdentifier const&                source,
        class ResourcePackClientResponsePacket const& packet
    );

    // symbol: ?fetchConnectionRequest@ServerNetworkHandler@@QEAAAEBVConnectionRequest@@AEBVNetworkIdentifier@@@Z
    MCAPI class ConnectionRequest const& fetchConnectionRequest(class NetworkIdentifier const& source);

    // symbol:
    // ?getGlobalMultiplayerCorrelationId@ServerNetworkHandler@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getGlobalMultiplayerCorrelationId() const;

    // symbol: ?isDedicatedServer@ServerNetworkHandler@@QEAA_NXZ
    MCAPI bool isDedicatedServer();

    // symbol: ?isHost@ServerNetworkHandler@@QEAA_NAEAVServerPlayer@@@Z
    MCAPI bool isHost(class ServerPlayer& player);

    // symbol: ?onReady_ClientGeneration@ServerNetworkHandler@@QEAAXAEAVPlayer@@AEBVNetworkIdentifier@@@Z
    MCAPI void onReady_ClientGeneration(class Player& newPlayer, class NetworkIdentifier const& source);

    // symbol: ?onStartShutdown@ServerNetworkHandler@@QEAAXXZ
    MCAPI void onStartShutdown();

    // symbol:
    // ?persistPlayerPermissionsToDisk@ServerNetworkHandler@@QEAAXAEBVUserEntityIdentifierComponent@@W4PlayerPermissionLevel@@@Z
    MCAPI void persistPlayerPermissionsToDisk(
        class UserEntityIdentifierComponent const&,
        ::PlayerPermissionLevel playerPermission
    );

    // symbol:
    // ?removeFromDenyList@ServerNetworkHandler@@QEAAXAEBVUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void removeFromDenyList(class mce::UUID const& uuid, std::string const& xuid);

    // symbol:
    // ?sendLoginMessageLocal@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@AEBVConnectionRequest@@AEAVServerPlayer@@@Z
    MCAPI void sendLoginMessageLocal(
        class NetworkIdentifier const& source,
        class ConnectionRequest const& connectionRequest,
        class ServerPlayer&            player
    );

    // symbol:
    // ?setAutomationClient@ServerNetworkHandler@@QEAAXV?$NonOwnerPointer@VAutomationClient@Automation@@@Bedrock@@@Z
    MCAPI void setAutomationClient(class Bedrock::NonOwnerPointer<class Automation::AutomationClient> client);

    // symbol: ?setMaxNumPlayers@ServerNetworkHandler@@QEAAHH@Z
    MCAPI int setMaxNumPlayers(int maxPlayers);

    // symbol: ?setNewPlayerPermissions@ServerNetworkHandler@@QEAAXAEAVServerPlayer@@@Z
    MCAPI void setNewPlayerPermissions(class ServerPlayer& newPlayer);

    // symbol: ?trytLoadPlayer@ServerNetworkHandler@@QEAA_NAEAVServerPlayer@@AEBVConnectionRequest@@@Z
    MCAPI bool trytLoadPlayer(class ServerPlayer& player, class ConnectionRequest const& connectionRequest);

    // symbol: ?updateServerAnnouncement@ServerNetworkHandler@@QEAAXXZ
    MCAPI void updateServerAnnouncement();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_buildSubChunkPacketData@ServerNetworkHandler@@AEAAXAEBVNetworkIdentifier@@PEBVServerPlayer@@AEBVSubChunkRequestPacket@@AEAVSubChunkPacket@@I_N@Z
    MCAPI void _buildSubChunkPacketData(
        class NetworkIdentifier const&     source,
        class ServerPlayer const*          player,
        class SubChunkRequestPacket const& packet,
        class SubChunkPacket&,
        uint,
        bool
    );

    // symbol:
    // ?_createNewPlayer@ServerNetworkHandler@@AEAAAEAVServerPlayer@@AEBVNetworkIdentifier@@AEBVSubClientConnectionRequest@@W4SubClientId@@@Z
    MCAPI class ServerPlayer& _createNewPlayer(
        class NetworkIdentifier const&          source,
        class SubClientConnectionRequest const& connectionRequest,
        ::SubClientId                           subid
    );

    // symbol: ?_displayGameMessage@ServerNetworkHandler@@AEAAXAEBVPlayer@@AEAUChatEvent@@@Z
    MCAPI void _displayGameMessage(class Player const& sender, struct ChatEvent&);

    // symbol:
    // ?_extractFirstConnectionData@ServerNetworkHandler@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVNetworkIdentifier@@@Z
    MCAPI std::string _extractFirstConnectionData(class NetworkIdentifier const&);

    // symbol: ?_getActiveAndInProgressPlayerCount@ServerNetworkHandler@@AEBAHVUUID@mce@@@Z
    MCAPI int _getActiveAndInProgressPlayerCount(class mce::UUID excludePlayer) const;

    // symbol:
    // ?_getDisplayName@ServerNetworkHandler@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCertificate@@_NAEBV23@@Z
    MCAPI std::string
    _getDisplayName(class Certificate const& certificate, bool isThirdPartyNameOnly, std::string const& thirdPartyName)
        const;

    // symbol:
    // ?_handleCommandBlockUpdatePacket@ServerNetworkHandler@@AEAAXAEBVServerPlayer@@AEBVNetworkIdentifier@@AEBVCommandBlockUpdatePacket@@@Z
    MCAPI void _handleCommandBlockUpdatePacket(
        class ServerPlayer const&             player,
        class NetworkIdentifier const&        source,
        class CommandBlockUpdatePacket const& packet
    );

    // symbol: ?_handleSetDifficulty@ServerNetworkHandler@@AEBAXAEBVServerPlayer@@AEBVSetDifficultyPacket@@@Z
    MCAPI void _handleSetDifficulty(class ServerPlayer const& player, class SetDifficultyPacket const& packet) const;

    // symbol: ?_isServerTextEnabled@ServerNetworkHandler@@AEBA_NAEBW4ServerTextEvent@@@Z
    MCAPI bool _isServerTextEnabled(::ServerTextEvent const&) const;

    // symbol: ?_loadNewPlayer@ServerNetworkHandler@@AEAA_NAEAVServerPlayer@@_N@Z
    MCAPI bool _loadNewPlayer(class ServerPlayer& newPlayer, bool isXboxLive);

    // symbol: ?_onClientAuthenticated@ServerNetworkHandler@@AEAAXAEBVNetworkIdentifier@@AEBVCertificate@@@Z
    MCAPI void _onClientAuthenticated(class NetworkIdentifier const& source, class Certificate const& certificate);

    // symbol: ?_onPlayerLeft@ServerNetworkHandler@@AEAAXPEAVServerPlayer@@_N@Z
    MCAPI void _onPlayerLeft(class ServerPlayer* player, bool skipMessage);

    // symbol:
    // ?_onSubClientAuthenticated@ServerNetworkHandler@@AEAAXAEBVNetworkIdentifier@@AEBVCertificate@@AEBVSubClientLoginPacket@@@Z
    MCAPI void _onSubClientAuthenticated(
        class NetworkIdentifier const&    source,
        class Certificate const&          certificate,
        class SubClientLoginPacket const& packet
    );

    // symbol: ?_sendAdditionalLevelData@ServerNetworkHandler@@AEAAXAEAVServerPlayer@@AEBVNetworkIdentifier@@@Z
    MCAPI void _sendAdditionalLevelData(class ServerPlayer& newPlayer, class NetworkIdentifier const& source);

    // symbol: ?_sendLevelData@ServerNetworkHandler@@AEAAXAEAVServerPlayer@@AEBVNetworkIdentifier@@@Z
    MCAPI void _sendLevelData(class ServerPlayer& newPlayer, class NetworkIdentifier const& source);

    // symbol:
    // ?_updatePermissions@ServerNetworkHandler@@AEAA_NAEBVServerPlayer@@AEBVRequestPermissionsPacket@@AEAVAbilities@@AEAVPermissionsHandler@@PEAVPlayer@@@Z
    MCAPI bool _updatePermissions(
        class ServerPlayer const&,
        class RequestPermissionsPacket const& packet,
        class Abilities&                      abilities,
        class PermissionsHandler&             permissions,
        class Player*                         player
    );

    // NOLINTEND
};
