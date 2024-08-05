#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec2.h"
#include "mc/math/Vec3.h"

// auto generated inclusion list
#include "mc/common/wrapper/BedSleepingResult.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/GameType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/enums/SubClientId.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/server/ServerPlayer.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/sim/LookDuration.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

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
        std::string const& name,
        class Vec3 const&  pos      = Vec3::MIN,
        DimensionType      dimId    = 0,
        class Vec2 const&  rotation = Vec2::ZERO
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
    virtual void teleportTo(class Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool);

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
        std::function<void(class ServerPlayer&)>,
        class mce::UUID                    uuid,
        std::string const&                 deviceId,
        std::unique_ptr<class Certificate> certificate,
        int                                maxChunkRadius,
        bool                               enableItemStackNetManager,
        class EntityContext&               entityContext
    );

    MCAPI class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper> getGameTestHelper() const;

    MCAPI void postAiStep();

    MCAPI void preAiStep();

    MCAPI void setGameTestHelper(class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper>);

    MCAPI void setXuid(std::string const& xuid);

    MCAPI bool simulateAttack();

    MCAPI bool simulateAttack(class Actor* actor);

    MCAPI void simulateChat(std::string const&);

    MCAPI bool simulateDestroyBlock(class BlockPos const& pos, ::ScriptModuleMinecraft::ScriptFacing face);

    MCAPI void simulateDisconnect();

    MCAPI bool simulateDropSelectedItem();

    MCAPI void simulateFly();

    MCAPI bool simulateGiveItem(class ItemStack& item, bool);

    MCAPI bool simulateInteract();

    MCAPI bool simulateInteract(class Actor& actor);

    MCAPI bool simulateInteract(class BlockPos const& pos, ::ScriptModuleMinecraft::ScriptFacing face);

    MCAPI bool simulateJump();

    MCAPI void simulateLocalMove(class Vec3 const&, float speed);

    MCAPI void simulateLookAt(class Actor&, ::sim::LookDuration);

    MCAPI void simulateLookAt(class BlockPos const&, ::sim::LookDuration);

    MCAPI void simulateLookAt(class Vec3 const&, ::sim::LookDuration);

    MCAPI void simulateMoveToLocation(class Vec3 const&, float, bool);

    MCAPI struct ScriptModuleGameTest::ScriptNavigationResult simulateNavigateToEntity(class Actor& actor, float speed);

    MCAPI struct ScriptModuleGameTest::ScriptNavigationResult
    simulateNavigateToLocation(class Vec3 const& position, float speed);

    MCAPI void simulateNavigateToLocations(std::vector<class Vec3>&& positions, float speed);

    MCAPI bool simulateRespawn();

    MCAPI void simulateSetBodyRotation(float);

    MCAPI bool simulateSetItem(class ItemStack& item, bool, int slot);

    MCAPI void simulateStartBuildInSlot(int);

    MCAPI void simulateStopBuild();

    MCAPI void simulateStopDestroyingBlock();

    MCAPI void simulateStopFlying();

    MCAPI void simulateStopInteracting();

    MCAPI void simulateStopMoving();

    MCAPI void simulateStopUsingItem();

    MCAPI bool simulateUseItem(class ItemStack& item);

    MCAPI bool simulateUseItemInSlot(int slot);

    MCAPI bool
    simulateUseItemInSlotOnBlock(int slot, class BlockPos const& pos, ::ScriptModuleMinecraft::ScriptFacing face, class Vec3 const&);

    MCAPI bool
    simulateUseItemOnBlock(class ItemStack& item, class BlockPos const& pos, ::ScriptModuleMinecraft::ScriptFacing face, class Vec3 const&);

    MCAPI void simulateWorldMove(class Vec3 const&, float speed);

    MCAPI static class SimulatedPlayer* create(
        std::string const&                                      name,
        class BlockPos const&                                   spawnPos,
        DimensionType                                           dimensionId,
        Bedrock::NotNullNonOwnerPtr<class ServerNetworkHandler> serverNetworkHandler,
        std::string const&                                      xuid
    );

    MCAPI static class SimulatedPlayer* tryGetFromEntity(class EntityContext& entity, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addMoveComponent();

    MCAPI struct ScriptModuleGameTest::ScriptNavigationResult
    _createNavigationResult(class NavigationComponent* navigation) const;

    MCAPI void _startCooldown();

    MCAPI bool _trySwing();

    // NOLINTEND
};
