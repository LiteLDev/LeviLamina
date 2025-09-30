#include "mc/server/SimulatedPlayer.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/utils/RandomUtils.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/entity/components_json_legacy/NavigationComponent.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/server/ServerLevel.h"
#include "mc/server/sim/sim.h"
#include "mc/world/actor/ai/navigation/PathNavigation.h"
#include "mc/world/actor/player/Inventory.h"
#include "mc/world/actor/player/LayeredAbilities.h"
#include "mc/world/actor/player/PlayerInventory.h"
#include "mc/world/actor/player/PlayerItemInUse.h"
#include "mc/world/actor/provider/MobMovement.h"
#include "mc/world/gamemode/GameMode.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/phys/HitResult.h"


optional_ref<SimulatedPlayer>
SimulatedPlayer::create(std::string const& name, Vec3 const& pos, DimensionType dimId, Vec2 const& rotation) {
    auto handler = ll::service::getServerNetworkHandler();
    if (!handler) {
        return nullptr;
    }
    auto player = create(
        name,
        BlockPos{pos},
        dimId,
        *handler,
        std::to_string(ll::random_utils::rand<int64>(INT64_MIN, -1)),
        std::nullopt
    );
    if (!player) {
        return nullptr;
    }
    player->teleport(pos, dimId, rotation);
    return player;
}

bool SimulatedPlayer::simulateDestroyBlock(const BlockPos& pos, ScriptModuleMinecraft::ScriptFacing face) {
    if (isAlive()) {
        if (*mDestroyingBlockPos && *mDestroyingBlockFace) {
            if (pos == **mDestroyingBlockPos && (uchar)face == **mDestroyingBlockFace) {
                return true;
            }
            simulateStopDestroyingBlock();
        }

        BlockType const& block = getDimensionBlockSource().getBlock(pos).getBlockType();

        if (block.mayPick() && mItemInUse->mItem->isNull()) {
            mDestroyingBlockPos  = pos;
            mDestroyingBlockFace = (uchar)face;
            return true;
        }
    }
    return false;
}

bool SimulatedPlayer::simulateDestroyLookAt(float handLength) {

    auto hitResult = traceRay(handLength, false);

    if (hitResult.mType != HitResultType::Tile) {
        return false;
    }
    return simulateDestroyBlock(hitResult.mBlock, (ScriptModuleMinecraft::ScriptFacing)hitResult.mFacing);
}


void SimulatedPlayer::simulateStopMoving() {
    visit(
        [&](auto& intent) {
            using T = std::decay_t<decltype(intent)>;
            if constexpr (!std::is_same_v<T, sim::VoidMoveIntent>) {
                MobMovement::setLocalMoveVelocity(mEntityContext, 0);
            }
            if constexpr (std::is_same_v<T, sim::NavigateToEntityIntent>
                          || std::is_same_v<T, sim::NavigateToPositionsIntent>) {
                auto navComponent = getEntityContext().tryGetComponent<NavigationComponent>();
                if (navComponent && navComponent->mNavigation) {
                    navComponent->mNavigation->stop(navComponent, *this);
                }
            }
        },
        *mSimulatedMovement->mType
    );
    mSimulatedMovement->mType->emplace<sim::VoidMoveIntent>();
}
bool SimulatedPlayer::simulateAttack(Actor* target) {
    if (!target || !isAlive()) {
        return false;
    }
    auto currentTick = getLevel().getCurrentServerTick().tickID;
    if (currentTick - mCooldownTick < 10) {
        return false;
    }
    _trySwing();
    mCooldownTick = currentTick;
    return attack(*target, SharedTypes::Legacy::ActorDamageCause::EntityAttack);
}
void SimulatedPlayer::simulateStartBuildInSlot(int slot) {
    mBuildIntention = sim::startBuild(*this, getDimensionBlockSource(), slot);
}
void SimulatedPlayer::simulateStopBuild() {
    if (!std::holds_alternative<sim::VoidBuildIntent>(*mBuildIntention->mType)) {
        mGameMode->stopBuildBlock();
    }
    mBuildIntention->mType->emplace<sim::VoidBuildIntent>();
}
void SimulatedPlayer::simulateStopUsingItem() {
    if (isAlive()) {
        mGameMode->releaseUsingItem();
    }
}
bool SimulatedPlayer::simulateGiveItem(ItemStack& item, bool selectSlot) {
    auto result = add(item);
    if (result && selectSlot) {
        selectItem(item);
    }
    return result;
}
bool SimulatedPlayer::simulateSetItem(ItemStack const& item, bool selectSlot, int slot) {
    auto& inv = getInventory();
    inv.setItem(slot, item);
    if (selectSlot) {
        setSelectedSlot(slot);
    }
    return inv.getItem(slot) == item;
}
bool SimulatedPlayer::simulateDropSelectedItem() {
    if (drop(getSelectedItem(), false)) {
        setSelectedItem(ItemStack::EMPTY_ITEM());
        return true;
    }
    return false;
}
bool SimulatedPlayer::simulateInteract(Actor& actor) { return isAlive() && interact(actor, 0); }
void SimulatedPlayer::simulateStopInteracting() { deleteContainerManager(); }
bool SimulatedPlayer::isSimulatingDestroyingBlock() { return *mDestroyingBlockPos && *mDestroyingBlockFace; }
void SimulatedPlayer::simulateLookAt(Vec3 const& pos, sim::LookDuration lookType) {
    mLookAtIntent = sim::lookAt(*this, {pos.x, pos.y, pos.z}, lookType);
}
void SimulatedPlayer::simulateLookAt(Actor& actor, sim::LookDuration lookType) {
    mLookAtIntent = sim::lookAt(*this, actor.getEntityContext(), lookType);
}
void SimulatedPlayer::simulateLookAt(BlockPos const& blockPos, sim::LookDuration lookType) {
    simulateLookAt(Vec3{blockPos} + 0.5f, lookType);
}
void SimulatedPlayer::simulateDisconnect() {
    disconnect();
    remove();
    setGameTestHelper(nullptr);
}
bool SimulatedPlayer::simulateRespawn() {
    if (isAlive()) {
        return false;
    }
    mRespawnPositionCandidate = Vec3{0.5f, 1.62001f, 0.5f} + *mPlayerRespawnPoint->mPlayerPosition;
    mRespawnReady             = 1;
    mRespawningFromTheEnd     = 0;
    respawn();
    return true;
}
void SimulatedPlayer::simulateFly() { getAbilities().setAbility(AbilitiesIndex::Flying, true); }
void SimulatedPlayer::simulateStopFlying() { getAbilities().setAbility(AbilitiesIndex::Flying, false); }

::SimulatedPlayer* SimulatedPlayer::tryGetFromEntity(::EntityContext& entity, bool includeRemoved) {
    auto result = static_cast<SimulatedPlayer*>(Player::tryGetFromEntity(entity, includeRemoved));
    if (result && result->isSimulated()) {
        return result;
    }
    return nullptr;
}
