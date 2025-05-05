#include "mc/server/SimulatedPlayer.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/utils/RandomUtils.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/server/ServerLevel.h"
#include "mc/world/actor/player/Inventory.h"
#include "mc/world/actor/player/PlayerInventory.h"
#include "mc/world/actor/player/PlayerItemInUse.h"
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

        BlockLegacy const& block = getDimensionBlockSource().getBlock(pos).getLegacyBlock();

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

::SimulatedPlayer* SimulatedPlayer::tryGetFromEntity(::EntityContext& entity, bool includeRemoved) {
    auto result = static_cast<SimulatedPlayer*>(Player::tryGetFromEntity(entity, includeRemoved));
    if (result && result->isSimulated()) {
        return result;
    }
    return nullptr;
}
