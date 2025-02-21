#include "mc/server/SimulatedPlayer.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/utils/RandomUtils.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/server/ServerLevel.h"
#include "mc/world/actor/player/Inventory.h"
#include "mc/world/actor/player/PlayerItemInUse.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/phys/HitResult.h"

optional_ref<SimulatedPlayer> SimulatedPlayer::create(
    std::string const&         name,
    std::optional<Vec3> const& pos,
    DimensionType              dimId,
    Vec2 const&                rotation
) {
    // TODO: fix this
    //    auto ownerPtr = ll::service::getServerNetworkHandler().and_then([&](auto& handler) {
    //        return handler.createSimulatedPlayer(name, std::to_string(ll::random_utils::rand<int64>(INT64_MIN, -1)));
    //    });
    //    auto player   = ownerPtr.tryUnwrap<SimulatedPlayer>();
    //    if (!player) {
    //        return nullptr;
    //    }
    //    player->mInventory->mUnk53f793.as<std::unique_ptr<Inventory>>()->setupDefault();
    //    player->mLevel->addUser(std::move(ownerPtr));
    //    if (!pos) {
    //        player->mUnk26a7dc.as<bool>() = true;
    //        player->doInitialSpawn();
    //        return player;
    //    }
    //    player->mRespawnPositionCandidate = *pos + Vec3{0, 1.62001, 0};
    //    player->mRespawnReady             = true;
    //    player->mRespawningFromTheEnd     = false;
    //    player->setRespawnPosition(*pos, dimId);
    //    player->mUnk26a7dc.as<bool>() = true;
    //    player->doInitialSpawn();
    //    player->teleport(*pos, dimId, rotation);
    //    return player;
    return nullptr;
}

bool SimulatedPlayer::simulateDestroyBlock(const BlockPos& pos, ScriptModuleMinecraft::ScriptFacing face) {
    if (isAlive()) {
        if (mDestroyingBlockPos->has_value() && mDestroyingBlockFace->has_value()) {
            if (pos.x == mDestroyingBlockPos->value_or(BlockPos::ZERO()).x
                && pos.y == mDestroyingBlockPos->value_or(BlockPos::ZERO()).y
                && pos.z == mDestroyingBlockPos->value_or(BlockPos::ZERO()).z
                && (uchar)face == mDestroyingBlockFace->value()) {
                return true;
            }
            simulateStopDestroyingBlock();
        }

        BlockLegacy const& block = getDimensionBlockSource().getBlock(pos).getLegacyBlock();

        if (block.mayPick() && !mItemInUse->mUnkf0096a.as<ItemStack>().isNull()) {
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
