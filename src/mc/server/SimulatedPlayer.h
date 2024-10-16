#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/packet/types/world/actor/ActorEvent.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/server/ServerPlayer.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/sim/LookDuration.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/player/BedSleepingResult.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace Editor { class IEditorPlayer; }
namespace ScriptModuleGameTest { struct ScriptNavigationResult; }
namespace gametest { class BaseGameTestHelper; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class SimulatedPlayer : public ::ServerPlayer {
public:
    LLAPI static optional_ref<SimulatedPlayer> create(
        std::string const&         name,
        std::optional<Vec3> const& pos      = std::nullopt,
        DimensionType              dimId    = 0,
        Vec2 const&                rotation = {0, 0}
    );

    [[nodiscard]] inline bool simulateSneaking() {
        setSneaking(true);
        return isSneaking();
    };
    [[nodiscard]] inline bool simulateStopSneaking() {
        setSneaking(false);
        return !isSneaking();
    };
    inline bool simulateUseItem() { return simulateUseItemInSlot(getSelectedItemSlot()); };

    LLAPI bool simulateDestroyLookAt(float handLength = 5.5f);

    // prevent constructor by default
    SimulatedPlayer& operator=(SimulatedPlayer const&);
    SimulatedPlayer(SimulatedPlayer const&);
    SimulatedPlayer();

public:
    // NOLINTBEGIN
    // vIndex: 6
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~SimulatedPlayer() = default;

    // vIndex: 23
    virtual void
    teleportTo(class Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    // vIndex: 158
    virtual void aiStep();

    // vIndex: 245
    virtual bool isSimulated() const;

    // vIndex: 246
    virtual std::string getXuid() const;

    // vIndex: 247
    virtual struct PlayerMovementSettings const& getMovementSettings() const;

    // vIndex: 251
    virtual std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource& mainChunkSource);

    // vIndex: 255
    virtual int _getSpawnChunkLimit() const;

    // vIndex: 256
    virtual void _updateChunkPublisherView(class Vec3 const&, float);

    MCAPI SimulatedPlayer(
        class Level&                                           level,
        class PacketSender&                                    packetSender,
        class ServerNetworkSystem&                             network,
        class ClientBlobCache::Server::ActiveTransfersManager& clientCacheMirror,
        ::GameType                                             playerGameType,
        class NetworkIdentifier const&                         owner,
        ::SubClientId                                          subid,
        std::function<void(class ServerPlayer&)>               playerLoadedCallback,
        class mce::UUID                                        uuid,
        std::string const&                                     deviceId,
        std::unique_ptr<class Certificate>                     certificate,
        int                                                    maxChunkRadius,
        bool                                                   enableItemStackNetManager,
        class EntityContext&                                   entityContext
    );

    MCAPI class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper> getGameTestHelper() const;

    MCAPI void postAiStep();

    MCAPI void preAiStep();

    MCAPI void setGameTestHelper(class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper> gameTestHelper);

    MCAPI void setXuid(std::string const& xuid);

    MCAPI bool simulateAttack();

    MCAPI bool simulateAttack(class Actor* actor);

    MCAPI void simulateChat(std::string const& message);

    MCAPI bool simulateDestroyBlock(class BlockPos const& pos, ::ScriptModuleMinecraft::ScriptFacing face);

    MCAPI void simulateDisconnect();

    MCAPI bool simulateDropSelectedItem();

    MCAPI void simulateFly();

    MCAPI bool simulateGiveItem(class ItemStack& item, bool selectSlot);

    MCAPI bool simulateInteract();

    MCAPI bool simulateInteract(class Actor& actor);

    MCAPI bool simulateInteract(class BlockPos const& pos, ::ScriptModuleMinecraft::ScriptFacing face);

    MCAPI bool simulateJump();

    MCAPI void simulateLocalMove(class Vec3 const& localDirection, float);

    MCAPI void simulateLookAt(class Actor& actor, ::sim::LookDuration lookType);

    MCAPI void simulateLookAt(class BlockPos const& blockPos, ::sim::LookDuration lookType);

    MCAPI void simulateLookAt(class Vec3 const& pos, ::sim::LookDuration lookType);

    MCAPI void simulateMoveToLocation(class Vec3 const& position, float speed, bool faceTarget);

    MCAPI struct ScriptModuleGameTest::ScriptNavigationResult simulateNavigateToEntity(class Actor& actor, float speed);

    MCAPI struct ScriptModuleGameTest::ScriptNavigationResult
    simulateNavigateToLocation(class Vec3 const& position, float speed);

    MCAPI void simulateNavigateToLocations(std::vector<class Vec3>&& positions, float speed);

    MCAPI bool simulateRespawn();

    MCAPI void simulateSetBodyRotation(float degY);

    MCAPI bool simulateSetItem(class ItemStack& item, bool selectSlot, int slot);

    MCAPI void simulateStartBuildInSlot(int slot);

    MCAPI void simulateStopBuild();

    MCAPI void simulateStopDestroyingBlock();

    MCAPI void simulateStopFlying();

    MCAPI void simulateStopInteracting();

    MCAPI void simulateStopMoving();

    MCAPI void simulateStopUsingItem();

    MCAPI bool simulateUseItem(class ItemStack& item);

    MCAPI bool simulateUseItemInSlot(int slot);

    MCAPI bool simulateUseItemInSlotOnBlock(
        int                                   slot,
        class BlockPos const&                 pos,
        ::ScriptModuleMinecraft::ScriptFacing face,
        class Vec3 const&                     facePos
    );

    MCAPI bool simulateUseItemOnBlock(
        class ItemStack&                      item,
        class BlockPos const&                 pos,
        ::ScriptModuleMinecraft::ScriptFacing face,
        class Vec3 const&                     facePos
    );

    MCAPI void simulateWorldMove(class Vec3 const& worldDirection, float);

    MCAPI static class SimulatedPlayer* create(
        std::string const&                                      name,
        class BlockPos const&                                   spawnPos,
        DimensionType                                           dimensionId,
        Bedrock::NotNullNonOwnerPtr<class ServerNetworkHandler> serverNetworkHandler,
        std::string const&                                      xuid
    );

    MCAPI static class SimulatedPlayer* tryGetFromEntity(class EntityContext& entity, bool includeRemoved);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addMoveComponent();

    MCAPI struct ScriptModuleGameTest::ScriptNavigationResult
    _createNavigationResult(class NavigationComponent* navigation) const;

    MCAPI void _startCooldown();

    MCAPI bool _trySwing();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        class Level&                                           level,
        class PacketSender&                                    packetSender,
        class ServerNetworkSystem&                             network,
        class ClientBlobCache::Server::ActiveTransfersManager& clientCacheMirror,
        ::GameType                                             playerGameType,
        class NetworkIdentifier const&                         owner,
        ::SubClientId                                          subid,
        std::function<void(class ServerPlayer&)>               playerLoadedCallback,
        class mce::UUID                                        uuid,
        std::string const&                                     deviceId,
        std::unique_ptr<class Certificate>                     certificate,
        int                                                    maxChunkRadius,
        bool                                                   enableItemStackNetManager,
        class EntityContext&                                   entityContext
    );

    MCAPI std::shared_ptr<class ChunkViewSource> _createChunkSource$(class ChunkSource& mainChunkSource);

    MCAPI int _getSpawnChunkLimit$() const;

    MCAPI void _updateChunkPublisherView$(class Vec3 const&, float);

    MCAPI void aiStep$();

    MCAPI struct PlayerMovementSettings const& getMovementSettings$() const;

    MCAPI std::string getXuid$() const;

    MCAPI void initializeComponents$(::ActorInitializationMethod method, class VariantParameterList const& params);

    MCAPI bool isSimulated$() const;

    MCAPI void
    teleportTo$(class Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    // NOLINTEND
};
