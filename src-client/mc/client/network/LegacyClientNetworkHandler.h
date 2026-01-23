#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/LegacyMultiplayerToken.h"
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/certificates/identity/RawGameServerToken.h"
#include "mc/client/network/ClientNetworkHandler.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/world/actor/player/SkinMemThresholds.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/dimension/DimensionDefinitionGroup.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AddActorPacket;
class AddItemActorPacket;
class AddPaintingPacket;
class AddPlayerPacket;
class AnimatePacket;
class Block;
class BlockActorDataPacket;
class BlockEventPacket;
class BlockPos;
class ChangeDimensionPacket;
class ClientCacheMissResponsePacket;
class ContainerClosePacket;
class ContainerOpenPacket;
class ContainerRegistryCleanupPacket;
class ContainerSetDataPacket;
class CreativeContentPacket;
class DimensionDataPacket;
class DisconnectPacket;
class EntityOverrides;
class GameRulesChangedPacket;
class HurtArmorPacket;
class IBlockSource;
class ILevel;
class InventoryContentPacket;
class InventorySlotPacket;
class InventoryTransactionPacket;
class ItemRegistryPacket;
class LevelChunkPacket;
class MobArmorEquipmentPacket;
class MobEffectPacket;
class MobEquipmentPacket;
class MotionPredictionHintsPacket;
class MoveActorAbsolutePacket;
class MoveActorDeltaPacket;
class MovePlayerPacket;
class MovementEffectPacket;
class NetworkSettingsPacket;
class NetworkStackLatencyPacket;
class Player;
class PlayerHotbarPacket;
class PlayerListPacket;
class PlayerSkinPacket;
class PlayerUpdateEntityOverridesPacket;
class RemoveActorPacket;
class SerializedSkinRef;
class ServerStatsPacket;
class SetActorDataPacket;
class SetActorLinkPacket;
class SetActorMotionPacket;
class SetCommandsEnabledPacket;
class SetDefaultGameTypePacket;
class SetDifficultyPacket;
class SetHealthPacket;
class SetHudPacket;
class SetSpawnPositionPacket;
class SetTimePacket;
class SpawnParticleEffectPacket;
class StartGamePacket;
class UpdateAbilitiesPacket;
class UpdateAdventureSettingsPacket;
class UpdateBlockPacket;
class UpdateBlockSyncedPacket;
struct ActorBlockSyncMessage;
struct ClientCreateLevelArguments;
struct IPersonaNetworkHandlerDelegate;
struct LegacyClientNetworkHandlerArguments;
struct MultiPlayerLevel;
struct NetworkChunkInserter;
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

class LegacyClientNetworkHandler : public ::ClientNetworkHandler, public ::LevelListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::DimensionDefinitionGroup>                             mDimensionDefinitionGroup;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ILevel>>                   mMultiPlayerLevel;
    ::ll::TypedStorage<4, 4, int>                                                     mPendingTime;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mServerIdentifier;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::NetworkChunkInserter>>               mChunkInsertQueue;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier>                                   mServerGuid;
    ::ll::TypedStorage<4, 4, ::PlayerAuthenticationType>                              mPlayerAuthenticationType;
    ::ll::TypedStorage<8, 8, ::LegacyMultiplayerToken>                                mPlayerLegacyMultiplayerToken;
    ::ll::TypedStorage<8, 32, ::RawGameServerToken>                                   mGameServerToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mPackSettingChangeSubscriber;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                 mNextChunkRequestDrainTime;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                                mExistanceTracker;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IPersonaNetworkHandlerDelegate>>     mPersonaNetworkHandlerDelegate;
    ::ll::TypedStorage<8, 24, ::SkinMemThresholds>                                    mSkinMemThresholds;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsConnectedToApplicationLayer;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::cereal::ReflectionCtx>> mCtx;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EntityOverrides>>                    mEntityOverrides;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<::std::unique_ptr<::MultiPlayerLevel>(::ClientCreateLevelArguments&&) const>>
        mCreateLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyClientNetworkHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LegacyClientNetworkHandler() /*override*/;

    virtual void onPlayerReady(::Player& player) /*override*/;

    virtual void onConnect(::NetworkIdentifier const& hostId) /*override*/;

    virtual void
    onUnableToConnect(::Connection::DisconnectFailReason discoReason, ::std::string const& message) /*override*/;

    virtual bool getIsConnectedToApplicationLayer() const /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::AddActorPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::AddItemActorPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::AddPaintingPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::AddPlayerPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AnimatePacket const& packet) /*override*/;

    virtual void
    handle(::NetworkIdentifier const& source, ::std::shared_ptr<::BlockActorDataPacket> packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::BlockEventPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ChangeDimensionPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ContainerClosePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ContainerOpenPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ContainerRegistryCleanupPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ContainerSetDataPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::DisconnectPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::LevelChunkPacket> packet) /*override*/;

    virtual void
    handle(::NetworkIdentifier const& source, ::std::shared_ptr<::ClientCacheMissResponsePacket> packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::GameRulesChangedPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::HurtArmorPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::InventoryContentPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::InventorySlotPacket const& packet) /*override*/;

    virtual void
    handle(::NetworkIdentifier const&, ::std::shared_ptr<::InventoryTransactionPacket> packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::MobArmorEquipmentPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::MobEffectPacket const& packet) /*override*/;

    virtual void
    handle(::NetworkIdentifier const& source, ::std::shared_ptr<::MobEquipmentPacket> packetPtr) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::MoveActorAbsolutePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::MoveActorDeltaPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::MovementEffectPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::MovePlayerPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::NetworkSettingsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::NetworkStackLatencyPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::PlayerHotbarPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::PlayerListPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::PlayerSkinPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerUpdateEntityOverridesPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::RemoveActorPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SetActorDataPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SetActorLinkPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetActorMotionPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::MotionPredictionHintsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SetCommandsEnabledPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SetDefaultGameTypePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SetDifficultyPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SetHealthPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SetSpawnPositionPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SetTimePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SetHudPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SpawnParticleEffectPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::StartGamePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockPacket> packet) /*override*/;

    virtual void
    handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockSyncedPacket> packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::CreativeContentPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ItemRegistryPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::DimensionDataPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::UpdateAbilitiesPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::UpdateAdventureSettingsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ServerStatsPacket const& packet) /*override*/;

    virtual void onTick() /*override*/;

    virtual void onEntityRemoved(::Actor& entity) /*override*/;

    virtual void onLevelDestruction(::std::string const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LegacyClientNetworkHandler(::LegacyClientNetworkHandlerArguments&& args);

    MCAPI void _drainCacheMissesQueueAndSendPacket();

    MCAPI ::std::string _getServerIdentifier() const;

    MCAPI void _removePlayer(::mce::UUID const& playerEntryId);

    MCAPI bool _shouldKeepSkinBasedOnMemory(::mce::UUID const& playerId, ::SerializedSkinRef const& skin) const;

    MCAPI void onSubClientConnect();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void handleUpdateBlock(
        ::IBlockSource&                region,
        ::BlockPos const&              pos,
        ::Block const&                 block,
        int                            layer,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LegacyClientNetworkHandlerArguments&& args);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onPlayerReady(::Player& player);

    MCAPI void $onConnect(::NetworkIdentifier const& hostId);

    MCAPI void $onUnableToConnect(::Connection::DisconnectFailReason discoReason, ::std::string const& message);

    MCAPI bool $getIsConnectedToApplicationLayer() const;

    MCAPI void $handle(::NetworkIdentifier const& source, ::AddActorPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::AddItemActorPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::AddPaintingPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::AddPlayerPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::AnimatePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::BlockActorDataPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::BlockEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ChangeDimensionPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ContainerClosePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ContainerOpenPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ContainerRegistryCleanupPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ContainerSetDataPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::DisconnectPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::LevelChunkPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::ClientCacheMissResponsePacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::GameRulesChangedPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::HurtArmorPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::InventoryContentPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::InventorySlotPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::InventoryTransactionPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::MobArmorEquipmentPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::MobEffectPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::MobEquipmentPacket> packetPtr);

    MCAPI void $handle(::NetworkIdentifier const& source, ::MoveActorAbsolutePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::MoveActorDeltaPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::MovementEffectPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::MovePlayerPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::NetworkSettingsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::NetworkStackLatencyPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerHotbarPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerListPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerSkinPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlayerUpdateEntityOverridesPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::RemoveActorPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetActorDataPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetActorLinkPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetActorMotionPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::MotionPredictionHintsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetCommandsEnabledPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetDefaultGameTypePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetDifficultyPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetHealthPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetSpawnPositionPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetTimePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetHudPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SpawnParticleEffectPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::StartGamePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockSyncedPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::CreativeContentPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ItemRegistryPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::DimensionDataPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::UpdateAbilitiesPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::UpdateAdventureSettingsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ServerStatsPacket const& packet);

    MCAPI void $onTick();

    MCAPI void $onEntityRemoved(::Actor& entity);

    MCAPI void $onLevelDestruction(::std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForClientNetworkHandler();

    MCNAPI static void** $vftableForLevelListener();
    // NOLINTEND
};
