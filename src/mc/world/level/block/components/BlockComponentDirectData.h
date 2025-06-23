#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/Brightness.h"
#include "mc/world/level/block/DetectionRule.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockTransformationComponent;
struct BlockBakedMaterialDataComponent;
struct BlockCollisionBoxComponent;
struct BlockDestructibleByMiningComponent;
struct BlockGeometryComponent;
struct BlockItemVisualComponent;
struct BlockRedstoneComponent;
struct BlockSelectionBoxComponent;
// clang-format on

struct BlockComponentDirectData {
public:
    // BlockComponentDirectData inner types define
    enum class LayerBitMask : int {
        None      = 0,
        Init      = 1,
        Rendering = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockTransformationComponent const*>       mBlockTransformationComponent;
    ::ll::TypedStorage<8, 8, ::BlockCollisionBoxComponent const*>         mBlockCollisionBoxComponent;
    ::ll::TypedStorage<8, 8, ::BlockSelectionBoxComponent const*>         mBlockSelectionBoxComponent;
    ::ll::TypedStorage<8, 8, ::BlockRedstoneComponent const*>             mBlockRedstoneComponent;
    ::ll::TypedStorage<8, 8, ::BlockGeometryComponent const*>             mBlockGeometryComponent;
    ::ll::TypedStorage<8, 8, ::BlockBakedMaterialDataComponent const*>    mBlockBakedMaterialDataComponent;
    ::ll::TypedStorage<8, 8, ::BlockItemVisualComponent const*>           mBlockItemVisualComponent;
    ::ll::TypedStorage<1, 1, bool>                                        mIsFullBlock;
    ::ll::TypedStorage<1, 1, bool>                                        mUseNewTessellation;
    ::ll::TypedStorage<1, 1, bool>                                        mNeedsLegacyTopRotation;
    ::ll::TypedStorage<1, 1, bool>                                        mIsOpaqueFullBlock;
    ::ll::TypedStorage<1, 1, ::Brightness>                                mLightEmission;
    ::ll::TypedStorage<1, 1, ::Brightness>                                mLight;
    ::ll::TypedStorage<4, 4, float>                                       mExplosionResistance;
    ::ll::TypedStorage<4, 4, int>                                         mBurnOdds;
    ::ll::TypedStorage<4, 4, int>                                         mFlameOdds;
    ::ll::TypedStorage<4, 4, float>                                       mFriction;
    ::ll::TypedStorage<4, 4, float>                                       mDestroySpeed;
    ::ll::TypedStorage<1, 4, ::DetectionRule>                             mWaterDetectionRule;
    ::ll::TypedStorage<4, 4, ::BlockComponentDirectData::LayerBitMask>    mFinalized;
    ::ll::TypedStorage<8, 8, ::BlockDestructibleByMiningComponent const*> mDestructibleByMiningComponent;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _finalizeInit(::Block const& block);
    // NOLINTEND
};
