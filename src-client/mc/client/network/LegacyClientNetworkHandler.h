#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
class AppPlatform;
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
class IPersonaNetworkHandlerDelegate;
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
class MultiPlayerLevel;
class NetworkChunkInserter;
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
struct LegacyClientNetworkHandlerArguments;
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
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>> mAppPlatform;
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

    virtual void onUnableToConnect(
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               messageFromServer,
        ::std::string const&               messageBodyOverride
    ) /*override*/;

    virtual bool getIsConnectedToApplicationLayer() const /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::AddActorPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::AddItemActorPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::AddPaintingPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::AddPlayerPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::AnimatePacket const&) /*override*/;

    virtual void
    handle(::NetworkIdentifier const& source, ::std::shared_ptr<::BlockActorDataPacket> packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::BlockEventPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ChangeDimensionPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ContainerClosePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ContainerOpenPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ContainerRegistryCleanupPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ContainerSetDataPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::DisconnectPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::LevelChunkPacket> packet) /*override*/;

    virtual void
    handle(::NetworkIdentifier const& source, ::std::shared_ptr<::ClientCacheMissResponsePacket> packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::GameRulesChangedPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::HurtArmorPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::InventoryContentPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::InventorySlotPacket const&) /*override*/;

    virtual void
    handle(::NetworkIdentifier const& packet, ::std::shared_ptr<::InventoryTransactionPacket>) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::MobArmorEquipmentPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::MobEffectPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packetPtr, ::std::shared_ptr<::MobEquipmentPacket>) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::MoveActorAbsolutePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::MoveActorDeltaPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::MovementEffectPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::MovePlayerPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::NetworkSettingsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::NetworkStackLatencyPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::PlayerHotbarPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::PlayerListPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::PlayerSkinPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::PlayerUpdateEntityOverridesPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::RemoveActorPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SetActorDataPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SetActorLinkPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SetActorMotionPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::MotionPredictionHintsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SetCommandsEnabledPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SetDefaultGameTypePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SetDifficultyPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SetHealthPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SetSpawnPositionPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SetTimePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SetHudPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SpawnParticleEffectPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::StartGamePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockPacket> packet) /*override*/;

    virtual void
    handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockSyncedPacket> packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::CreativeContentPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ItemRegistryPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::DimensionDataPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::UpdateAbilitiesPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::UpdateAdventureSettingsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ServerStatsPacket const&) /*override*/;

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

    MCAPI void _updateBlobCacheTrackingData();

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

    MCAPI void $onUnableToConnect(
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               messageFromServer,
        ::std::string const&               messageBodyOverride
    );

    MCAPI bool $getIsConnectedToApplicationLayer() const;

    MCAPI void $handle(::NetworkIdentifier const& source, ::AddActorPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::AddItemActorPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::AddPaintingPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& source, ::AddPlayerPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::AnimatePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::BlockActorDataPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::BlockEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ChangeDimensionPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ContainerClosePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ContainerOpenPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ContainerRegistryCleanupPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ContainerSetDataPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& source, ::DisconnectPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::LevelChunkPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::ClientCacheMissResponsePacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::GameRulesChangedPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::HurtArmorPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::InventoryContentPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::InventorySlotPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::std::shared_ptr<::InventoryTransactionPacket>);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::MobArmorEquipmentPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::MobEffectPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packetPtr, ::std::shared_ptr<::MobEquipmentPacket>);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::MoveActorAbsolutePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::MoveActorDeltaPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::MovementEffectPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::MovePlayerPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& source, ::NetworkSettingsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::NetworkStackLatencyPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::PlayerHotbarPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::PlayerListPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::PlayerSkinPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::PlayerUpdateEntityOverridesPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::RemoveActorPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::SetActorDataPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::SetActorLinkPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::SetActorMotionPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::MotionPredictionHintsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::SetCommandsEnabledPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::SetDefaultGameTypePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::SetDifficultyPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::SetHealthPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::SetSpawnPositionPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::SetTimePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::SetHudPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::SpawnParticleEffectPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& source, ::StartGamePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockSyncedPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::CreativeContentPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ItemRegistryPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& source, ::DimensionDataPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::UpdateAbilitiesPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::UpdateAdventureSettingsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ServerStatsPacket const&);

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
