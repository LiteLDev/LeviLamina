#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class ScatteredFeaturePiece : public ::StructurePiece {
public:
    // ScatteredFeaturePiece inner types declare
    // clang-format off
    struct LocalRegistry;
    // clang-format on

    // ScatteredFeaturePiece inner types define
    struct LocalRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Block const&> mSandstoneStairs;
        ::ll::TypedStorage<8, 8, ::Block const&> mSandstone;
        ::ll::TypedStorage<8, 8, ::Block const&> mCutSandstone;
        ::ll::TypedStorage<8, 8, ::Block const&> mChiseledSandstone;
        ::ll::TypedStorage<8, 8, ::Block const&> mOrangeHardenedClay;
        ::ll::TypedStorage<8, 8, ::Block const&> mBlueHardenedClay;
        ::ll::TypedStorage<8, 8, ::Block const&> mStoneStairs;
        ::ll::TypedStorage<8, 8, ::Block const&> mOakFence;
        ::ll::TypedStorage<8, 8, ::Block const&> mSprucePlanks;
        ::ll::TypedStorage<8, 8, ::Block const&> mLog;
        ::ll::TypedStorage<8, 8, ::Block const&> mFlowerPot;
        ::ll::TypedStorage<8, 8, ::Block const&> mRedMushroom;
        ::ll::TypedStorage<8, 8, ::Block const&> mCraftingTable;
        ::ll::TypedStorage<8, 8, ::Block const&> mOakStairs;
        ::ll::TypedStorage<8, 8, ::Block const&> mSpruceStairs;
        ::ll::TypedStorage<8, 8, ::Block const&> mChiseledStoneBricks;
        ::ll::TypedStorage<8, 8, ::Block const&> mVine;
        ::ll::TypedStorage<8, 8, ::Block const&> mMossyCobblestone;
        ::ll::TypedStorage<8, 8, ::Block const&> mCobblestone;
        ::ll::TypedStorage<8, 8, ::Block const&> mAirBlock;
        // NOLINTEND

    public:
        // prevent constructor by default
        LocalRegistry& operator=(LocalRegistry const&);
        LocalRegistry(LocalRegistry const&);
        LocalRegistry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                      mWidth;
    ::ll::TypedStorage<4, 4, int>                                      mHeight;
    ::ll::TypedStorage<4, 4, int>                                      mDepth;
    ::ll::TypedStorage<4, 4, int>                                      mHeightPosition;
    ::ll::TypedStorage<8, 160, ::ScatteredFeaturePiece::LocalRegistry> mLocalRegistry;
    // NOLINTEND
};
