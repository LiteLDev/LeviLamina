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
class BlockActorDataPacket;
class BlockEventPacket;
class ChangeDimensionPacket;
class ClientCacheMissResponsePacket;
class ClientLevel;
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
class NetworkChunkInserter;
class NetworkSettingsPacket;
class NetworkStackLatencyPacket;
class Player;
class PlayerHotbarPacket;
class PlayerListPacket;
class PlayerSkinPacket;
class PlayerUpdateEntityOverridesPacket;
class RemoveActorPacket;
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
struct ClientCreateLevelArguments;
struct LegacyClientNetworkHandlerArguments;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LegacyClientNetworkHandler : public ::ClientNetworkHandler, public ::LevelListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::DimensionDefinitionGroup>                             mDimensionDefinitionGroup;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ILevel>>                   mClientLevel;
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
        ::brstd::move_only_function<::std::unique_ptr<::ClientLevel>(::ClientCreateLevelArguments&&) const>>
                                                                            mCreateLevel;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>> mAppPlatform;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyClientNetworkHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LegacyClientNetworkHandler() /*override*/ = default;

    virtual void onPlayerReady(::Player&) /*override*/;

    virtual void onConnect(::NetworkIdentifier const&) /*override*/;

    virtual void
    onUnableToConnect(::Connection::DisconnectFailReason, ::std::string const&, ::std::string const&) /*override*/;

    virtual bool getIsConnectedToApplicationLayer() const /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AddActorPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AddItemActorPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AddPaintingPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AddPlayerPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AnimatePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::BlockActorDataPacket>) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::BlockEventPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ChangeDimensionPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ContainerClosePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ContainerOpenPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ContainerRegistryCleanupPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ContainerSetDataPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::DisconnectPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::LevelChunkPacket>) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::ClientCacheMissResponsePacket>) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::GameRulesChangedPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::HurtArmorPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::InventoryContentPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::InventorySlotPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::InventoryTransactionPacket>) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::MobArmorEquipmentPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::MobEffectPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::MobEquipmentPacket>) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::MoveActorAbsolutePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::MoveActorDeltaPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::MovementEffectPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::MovePlayerPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::NetworkSettingsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::NetworkStackLatencyPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerHotbarPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerListPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerSkinPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerUpdateEntityOverridesPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::RemoveActorPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetActorDataPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetActorLinkPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetActorMotionPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::MotionPredictionHintsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetCommandsEnabledPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetDefaultGameTypePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetDifficultyPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetHealthPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetSpawnPositionPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetTimePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetHudPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SpawnParticleEffectPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::StartGamePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockPacket>) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockSyncedPacket>) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CreativeContentPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ItemRegistryPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::DimensionDataPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::UpdateAbilitiesPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::UpdateAdventureSettingsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ServerStatsPacket const&) /*override*/;

    virtual void onTick() /*override*/;

    virtual void onEntityRemoved(::Actor&) /*override*/;

    virtual void onLevelDestruction(::std::string const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LegacyClientNetworkHandler(::LegacyClientNetworkHandlerArguments&& args);

    MCAPI void onSubClientConnect();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LegacyClientNetworkHandlerArguments&& args);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
