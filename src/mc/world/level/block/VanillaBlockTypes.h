#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"

namespace VanillaBlockTypes {
// NOLINTBEGIN
MCAPI void registerBlockMappings();

MCAPI void registerBlocks(class BaseGameVersion const& baseGameVersion, class Experiments const& experiments);

MCAPI void unregisterBlocks();
// NOLINTEND

// thunks
// NOLINTBEGIN
MCAPI class WeakPtr<class BlockLegacy>& mBambooSapling();

MCAPI class WeakPtr<class BlockLegacy>& mCutCopperStairs();

MCAPI class WeakPtr<class BlockLegacy>& mExposedCutCopperStairs();

MCAPI class WeakPtr<class BlockLegacy>& mGildedBlackstone();

MCAPI class WeakPtr<class BlockLegacy>& mGoldBlock();

MCAPI class WeakPtr<class BlockLegacy>& mGrassPathBlock();

MCAPI class WeakPtr<class BlockLegacy>& mLodestoneBlock();

MCAPI class WeakPtr<class BlockLegacy>& mMagmaBlock();

MCAPI class WeakPtr<class BlockLegacy>& mMangroveWood();

MCAPI class WeakPtr<class BlockLegacy>& mOxidizedCutCopperStairs();

MCAPI class WeakPtr<class BlockLegacy>& mPolishedBlackstone();

MCAPI class WeakPtr<class BlockLegacy>& mPolishedBlackstoneBrickDoubleSlab();

MCAPI class WeakPtr<class BlockLegacy>& mPolishedBlackstoneBrickSlab();

MCAPI class WeakPtr<class BlockLegacy>& mPolishedDeepslate();

MCAPI class WeakPtr<class BlockLegacy>& mPortal();

MCAPI class WeakPtr<class BlockLegacy>& mQuartzBricks();

MCAPI class WeakPtr<class BlockLegacy>& mSmoothStone();

MCAPI class WeakPtr<class BlockLegacy>& mSnifferEgg();

MCAPI class WeakPtr<class BlockLegacy>& mStrippedMangroveWood();

MCAPI class WeakPtr<class BlockLegacy>& mWaxedCutCopperStairs();

MCAPI class WeakPtr<class BlockLegacy>& mWaxedExposedCutCopperStairs();

MCAPI class WeakPtr<class BlockLegacy>& mWaxedOxidizedCutCopperStairs();

MCAPI class WeakPtr<class BlockLegacy>& mWaxedWeatheredCutCopperStairs();

MCAPI class WeakPtr<class BlockLegacy>& mWeatheredCutCopperStairs();
// NOLINTEND

}; // namespace VanillaBlockTypes
