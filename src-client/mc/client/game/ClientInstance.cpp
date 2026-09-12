#include "mc/client/game/ClientInstance.h"

#include "mc/world/actor/player/Player.h"
#include "mc/world/gamemode/GameMode.h"
#include "mc/world/phys/HitResult.h"

bool ClientInstance::tickDestroyBlock(::ClientInstance::ClientDestroyBlockState& destroyBlockState, bool advanceTime) {
    auto* player = destroyBlockState.mUnkff7778.as<Player*>();
    if (!player) {
        return false;
    }

    auto& onFailedCallback    = destroyBlockState.mUnk4fd828.as<std::function<void()>>();
    auto& onResetCallback     = destroyBlockState.mUnk738e7f.as<std::function<void()>>();
    auto& onDestroyedCallback = destroyBlockState.mUnk525e8f.as<std::function<void()>>();

    bool isDestroyingBlock = player->mDestroyingBlock;
    bool isDestroying      = destroyBlockState.mUnkb9c8a1.as<bool>();

    if (!isDestroying) {
        if (!isDestroyingBlock) {
            return false;
        }

        if (onResetCallback) {
            onResetCallback();
        }

        return true;
    }

    if (isDestroyingBlock) {
        auto const* hitResult = destroyBlockState.mUnk4fdef3.as<HitResult const*>();
        if (!hitResult || hitResult->mType != HitResultType::Tile || hitResult->mIsHitLiquid
            || player->getItemUseDuration() > 0) {
            if (onResetCallback) {
                onResetCallback();
            }

            return true;
        }

        auto* gameMode = destroyBlockState.mUnk241918.as<GameMode*>();
        if (!gameMode) {
            return true;
        }

        if (advanceTime) {
            gameMode->tick();
        }

        BlockPos const& pos          = hitResult->mBlock;
        uchar           face         = hitResult->mFacing;
        bool            hasDestroyed = false;

        bool result = gameMode->continueDestroyBlock(pos, face, hitResult->mStartPos, hasDestroyed);
        if (!result) {
            if (onFailedCallback) {
                onFailedCallback();
            }

            return true;
        }

        if (hasDestroyed) {
            if (onDestroyedCallback) {
                onDestroyedCallback();
            }

            ++gameMode->mContinueBreakBlockCount;
        }
    }

    return true;
}
