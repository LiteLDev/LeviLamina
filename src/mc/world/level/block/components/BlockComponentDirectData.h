#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/Brightness.h"
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/shared_types/legacy/Facing.h"
#include "mc/deps/shared_types/v1_26_0/block/DetectionRule.h"
#include "mc/deps/voxel_shapes/RegistryHandle.h"
#include "mc/world/level/block/BurnOdds.h"
#include "mc/world/level/block/FlameOdds.h"
#include "mc/world/level/block/LavaFlammable.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockTransformationComponent;
struct BlockCollisionBoxComponent;
struct BlockDestructibleByMiningComponent;
struct BlockGeometryComponent;
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

    using FaceShapeHandles = ::Bedrock::DenseEnumMap<::SharedTypes::Facing, ::VoxelShapes::RegistryHandle, 6>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockTransformationComponent const*> mBlockTransformationComponent;
    ::ll::TypedStorage<8, 8, ::BlockCollisionBoxComponent const*>   mBlockCollisionBoxComponent;
    ::ll::TypedStorage<8, 8, ::BlockSelectionBoxComponent const*>   mBlockSelectionBoxComponent;
    ::ll::TypedStorage<8, 8, ::BlockRedstoneComponent const*>       mBlockRedstoneComponent;
    ::ll::TypedStorage<8, 8, ::BlockGeometryComponent const*>       mBlockGeometryComponent;
    ::ll::TypedStorage<1, 1, bool>                                  mIsFullBlock;
    ::ll::TypedStorage<1, 1, bool>                                  mUseNewTessellation;
    ::ll::TypedStorage<1, 1, bool>                                  mNeedsLegacyTopRotation;
    ::ll::TypedStorage<1, 1, bool>                                  mIsOpaqueFullBlock;
    ::ll::TypedStorage<1, 1, ::Brightness>                          mLightEmission;
    ::ll::TypedStorage<1, 1, ::Brightness>                          mLight;
    ::ll::TypedStorage<1, 1, ::LavaFlammable>                       mLavaFlammable;
    ::ll::TypedStorage<2, 2, ::FlameOdds>                           mFlameOdds;
    ::ll::TypedStorage<2, 2, ::BurnOdds>                            mBurnOdds;
    ::ll::TypedStorage<4, 4, float>                                 mExplosionResistance;
    ::ll::TypedStorage<4, 4, float>                                 mFriction;
    ::ll::TypedStorage<4, 4, float>                                 mDestroySpeed;
    ::ll::TypedStorage<1, 5, ::SharedTypes::v1_26_0::DetectionRule> mWaterDetectionRule;
    ::ll::TypedStorage<2, 2, ::VoxelShapes::RegistryHandle>         mOcclusionShapeHandle;
    ::ll::TypedStorage<2, 12, ::Bedrock::DenseEnumMap<::SharedTypes::Facing, ::VoxelShapes::RegistryHandle, 6>>
                                                                          mOcclusionShapeHandlesByFace;
    ::ll::TypedStorage<4, 4, ::BlockComponentDirectData::LayerBitMask>    mFinalized;
    ::ll::TypedStorage<8, 8, ::BlockDestructibleByMiningComponent const*> mDestructibleByMiningComponent;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _finalizeInit(::Block const& block);

#ifdef LL_PLAT_C
    MCFOLD bool _useNewTessellationInternal() const;
#endif

    MCFOLD ::BlockCollisionBoxComponent const* blockCollisionBoxComponent() const;

#ifdef LL_PLAT_C
    MCFOLD ::BlockGeometryComponent const* blockGeometryComponent() const;
#endif

    MCFOLD ::BlockRedstoneComponent const* blockRedstoneComponent() const;

    MCFOLD ::BlockSelectionBoxComponent const* blockSelectionBoxComponent() const;

#ifdef LL_PLAT_C
    MCFOLD ::BlockTransformationComponent const* blockTransformationComponent() const;
#endif

    MCFOLD ::BlockDestructibleByMiningComponent const* destructibleByMiningComponent() const;

    MCAPI void finalize(::Block const& block, ::BlockComponentDirectData::LayerBitMask layersToFinalize);

    MCAPI int getBurnOdds() const;

    MCFOLD float getDestroySpeed() const;

    MCAPI float getExplosionResistance() const;

    MCAPI int getFlameOdds() const;

    MCFOLD float getFriction() const;

#ifdef LL_PLAT_C
    MCAPI ::VoxelShapes::RegistryHandle getOcclusionFaceShapeHandle(uchar face) const;

    MCAPI ::VoxelShapes::RegistryHandle getOcclusionShapeHandle() const;
#endif

    MCAPI ::SharedTypes::v1_26_0::DetectionRule getWaterDetectionRule() const;

#ifdef LL_PLAT_C
    MCAPI bool isFinalized(::BlockComponentDirectData::LayerBitMask layers) const;
#endif

    MCFOLD bool isFullBlockGeometry() const;

    MCAPI ::LavaFlammable isLavaFlammable() const;

    MCFOLD bool isOpaqueFullBlock() const;

    MCAPI ::Brightness light() const;

    MCAPI ::Brightness lightEmission() const;

#ifdef LL_PLAT_C
    MCFOLD void setUseNewTessellation(bool enabled);
#endif
    // NOLINTEND
};
