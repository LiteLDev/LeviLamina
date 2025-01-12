#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/server/ServerPlayer.h"
#include "mc/server/sim/LookDuration.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class Certificate;
class ChunkSource;
class ChunkViewSource;
class Dimension;
class EntityContext;
class ItemStack;
class Level;
class NavigationComponent;
class NetworkIdentifier;
class PacketSender;
class PlayerSuspendLevelStorageSaveToken;
class ServerNetworkHandler;
class ServerNetworkSystem;
class Vec3;
struct PlayerMovementSettings;
struct VariantParameterList;
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace ScriptModuleGameTest { struct ScriptNavigationResult; }
namespace gametest { class BaseGameTestHelper; }
namespace mce { class UUID; }
namespace sim { struct BuildIntent; }
namespace sim { struct LookAtIntent; }
namespace sim { struct MovementIntent; }
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
    }
    [[nodiscard]] inline bool simulateStopSneaking() {
        setSneaking(false);
        return !isSneaking();
    }
    inline bool simulateUseItem() { return simulateUseItemInSlot(getSelectedItemSlot()); }

    LLAPI bool simulateDestroyLookAt(float handLength = 5.5f);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::sim::MovementIntent>                                      mSimulatedMovement;
    ::ll::TypedStorage<1, 2, ::sim::BuildIntent>                                          mBuildIntention;
    ::ll::TypedStorage<8, 40, ::sim::LookAtIntent>                                        mLookAtIntent;
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>>                                mDestroyingBlockPos;
    ::ll::TypedStorage<1, 2, ::std::optional<uchar>>                                      mDestroyingBlockFace;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::gametest::BaseGameTestHelper>> mGameTestHelper;
    ::ll::TypedStorage<8, 8, uint64>                                                      mCooldownTick;
    ::ll::TypedStorage<8, 72, ::PlayerMovementSettings>                                   mMovementSettings;
    ::ll::TypedStorage<4, 4, float>                                                       mBaseInputSpeed;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mXuid;
    ::ll::TypedStorage<8, 40, ::PlayerSuspendLevelStorageSaveToken const> mPlayerSuspendLevelStorageSaveToken;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 150
    virtual void aiStep() /*override*/;

    // vIndex: 237
    virtual bool isSimulated() const /*override*/;

    // vIndex: 238
    virtual ::std::string getXuid() const /*override*/;

    // vIndex: 239
    virtual ::PlayerMovementSettings const& getMovementSettings() const /*override*/;

    // vIndex: 21
    virtual void teleportTo(
        ::Vec3 const& pos,
        bool          shouldStopRiding,
        int           cause,
        int           sourceEntityType,
        bool          keepVelocity
    ) /*override*/;

    // vIndex: 247
    virtual int _getSpawnChunkLimit() const /*override*/;

    // vIndex: 243
    virtual ::std::shared_ptr<::ChunkViewSource> _createChunkSource(::ChunkSource& mainChunkSource) /*override*/;

    // vIndex: 248
    virtual void _updateChunkPublisherView(::Vec3 const& position, float minDistance) /*override*/;

    // vIndex: 0
    virtual ~SimulatedPlayer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SimulatedPlayer(
        ::Level&                                           level,
        ::PacketSender&                                    packetSender,
        ::ServerNetworkSystem&                             network,
        ::ClientBlobCache::Server::ActiveTransfersManager& clientCacheMirror,
        ::GameType                                         playerGameType,
        ::NetworkIdentifier const&                         owner,
        ::SubClientId                                      subid,
        ::std::function<void(::ServerPlayer&)>             playerLoadedCallback,
        ::mce::UUID                                        uuid,
        ::std::string const&                               deviceId,
        ::std::unique_ptr<::Certificate>                   certificate,
        int                                                maxChunkRadius,
        bool                                               enableItemStackNetManager,
        ::EntityContext&                                   entityContext
    );

    MCAPI void _addMoveComponent();

    MCAPI ::ScriptModuleGameTest::ScriptNavigationResult _createNavigationResult(::NavigationComponent* navigation
    ) const;

    MCAPI bool _trySwing();

    MCAPI void _updateMovement();

    MCAPI void _updateRidingComponents();

    MCAPI ::Bedrock::NonOwnerPointer<::gametest::BaseGameTestHelper> getGameTestHelper() const;

    MCAPI void postAiStep();

    MCAPI void preAiStep();

    MCAPI void setGameTestHelper(::Bedrock::NonOwnerPointer<::gametest::BaseGameTestHelper> gameTestHelper);

    MCAPI void setXuid(::std::string const& xuid);

    MCAPI bool simulateAttack();

    MCAPI bool simulateAttack(::Actor* actor);

    MCAPI void simulateChat(::std::string const& message);

    MCAPI bool simulateDestroyBlock(::BlockPos const& pos, ::ScriptModuleMinecraft::ScriptFacing face);

    MCAPI void simulateDisconnect();

    MCAPI bool simulateDropSelectedItem();

    MCAPI void simulateFly();

    MCAPI bool simulateGiveItem(::ItemStack& item, bool selectSlot);

    MCAPI bool simulateInteract();

    MCAPI bool simulateInteract(::Actor& actor);

    MCAPI bool simulateInteract(::BlockPos const& pos, ::ScriptModuleMinecraft::ScriptFacing face);

    MCAPI bool simulateJump();

    MCAPI void simulateLocalMove(::Vec3 const& localDirection, float);

    MCAPI void simulateLookAt(::Actor& actor, ::sim::LookDuration lookType);

    MCAPI void simulateLookAt(::BlockPos const& blockPos, ::sim::LookDuration lookType);

    MCAPI void simulateLookAt(::Vec3 const& pos, ::sim::LookDuration lookType);

    MCAPI void simulateMoveToLocation(::Vec3 const& position, float speed, bool faceTarget);

    MCAPI ::ScriptModuleGameTest::ScriptNavigationResult simulateNavigateToEntity(::Actor& actor, float speed);

    MCAPI ::ScriptModuleGameTest::ScriptNavigationResult
    simulateNavigateToLocation(::Vec3 const& position, float speed);

    MCAPI void simulateNavigateToLocations(::std::vector<::Vec3>&& positions, float speed);

    MCAPI bool simulateRespawn();

    MCAPI void simulateSetBodyRotation(float degY);

    MCAPI bool simulateSetItem(::ItemStack& item, bool selectSlot, int slot);

    MCAPI void simulateStartBuildInSlot(int slot);

    MCAPI void simulateStopBuild();

    MCAPI void simulateStopDestroyingBlock();

    MCAPI void simulateStopFlying();

    MCAPI void simulateStopInteracting();

    MCAPI void simulateStopMoving();

    MCAPI void simulateStopUsingItem();

    MCAPI bool simulateUseItem(::ItemStack& item);

    MCAPI bool simulateUseItemInSlot(int slot);

    MCAPI bool simulateUseItemInSlotOnBlock(
        int                                   slot,
        ::BlockPos const&                     pos,
        ::ScriptModuleMinecraft::ScriptFacing face,
        ::Vec3 const&                         facePos
    );

    MCAPI bool simulateUseItemOnBlock(
        ::ItemStack&                          item,
        ::BlockPos const&                     pos,
        ::ScriptModuleMinecraft::ScriptFacing face,
        ::Vec3 const&                         facePos
    );

    MCAPI void simulateWorldMove(::Vec3 const& worldDirection, float);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SimulatedPlayer* create(
        ::std::string const&                                  name,
        ::BlockPos const&                                     spawnPos,
        ::DimensionType                                       dimensionId,
        ::Bedrock::NotNullNonOwnerPtr<::ServerNetworkHandler> serverNetworkHandler,
        ::std::string const&                                  xuid
    );

    MCAPI static ::SimulatedPlayer* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Level&                                           level,
        ::PacketSender&                                    packetSender,
        ::ServerNetworkSystem&                             network,
        ::ClientBlobCache::Server::ActiveTransfersManager& clientCacheMirror,
        ::GameType                                         playerGameType,
        ::NetworkIdentifier const&                         owner,
        ::SubClientId                                      subid,
        ::std::function<void(::ServerPlayer&)>             playerLoadedCallback,
        ::mce::UUID                                        uuid,
        ::std::string const&                               deviceId,
        ::std::unique_ptr<::Certificate>                   certificate,
        int                                                maxChunkRadius,
        bool                                               enableItemStackNetManager,
        ::EntityContext&                                   entityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $aiStep();

    MCFOLD bool $isSimulated() const;

    MCAPI ::std::string $getXuid() const;

    MCAPI ::PlayerMovementSettings const& $getMovementSettings() const;

    MCAPI void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    MCFOLD int $_getSpawnChunkLimit() const;

    MCAPI ::std::shared_ptr<::ChunkViewSource> $_createChunkSource(::ChunkSource& mainChunkSource);

    MCFOLD void $_updateChunkPublisherView(::Vec3 const& position, float minDistance);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
