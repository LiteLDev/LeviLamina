#include "llapi/mc/HitResult.hpp"

FaceID HitResult::getFacing() {
    // return dAccess<FaceID>(this, 28);
    return this->mFace;
}

Vec3 HitResult::getPos() {
    // return dAccess<Vec3>(this, 44);
    return this->mEndPos;
}

bool HitResult::isHitLiquid() {
    //return dAccess<bool>(this, 80);
    return this->mIsHitLiquid;
}

// LIAPI bool HitResult::isEntity() {
//     return getHitResultType() == HitResultType::ENTITY;
// }
// LIAPI bool HitResult::isTile() {
//     return getHitResultType() == HitResultType::TILE;
// }
BlockPos HitResult::getBlockPos() {
    //return dAccess<BlockPos>(this, 32);
    return this->mEndBlockPos;
}

BlockPos HitResult::getLiquidPos() {
    //return dAccess<BlockPos>(this, 84);
    return this->mLiquidBlockPos;
}

FaceID HitResult::getLiquidFacing() {
    //return dAccess<FaceID>(this, 81);
    return this->mLiquidFace;
}

// LIAPI Vec3 HitResult::getLiquidHitPos();
 HitResultType HitResult::getHitResultType() {
    // return dAccess<HitResultType>(this, 24);
    return this->mType;
 }

// static_assert(offsetof(HitResult, endBpos) == 32);
// static_assert(offsetof(HitResult, unk64) == 64);
// static_assert(offsetof(HitResult, unk81) == 81);
// static_assert(offsetof(HitResult, indirectHit) == 108);
// static_assert(sizeof(HitResult) == 112);