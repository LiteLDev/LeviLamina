#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/BakedBlockLightType.h"
#include "mc/client/renderer/block/BlockTessellatorCache.h"
#include "mc/client/renderer/block/block_geometry/Axis.h"
#include "mc/client/renderer/block/block_tessellator_custom_extra_data/Map.h"
#include "mc/client/renderer/texture/TextureUVCoordinateSet.h"
#include "mc/client/world/level/biome/BiomeTintCache.h"
#include "mc/common/BrightnessPair.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/minecraft_renderer/framebuilder/FrameLightingModelCapabilities.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/legacy/facing/Rotation.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/AnvilPart.h"
#include "mc/world/level/block/BigDripleafTilt.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockShape.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockGraphics;
class BlockOccluder;
class BlockSource;
class LightTexture;
class Material;
class Matrix;
class ScreenContext;
class Tessellator;
class Vec2;
class Vec3;
struct AirAndSimpleBlockBits;
struct BlockTessellatorBlockInWorld;
namespace mce { class Mesh; }
namespace mce { class TexturePtr; }
namespace mce { struct Radian; }
// clang-format on

class BlockTessellator {
public:
    // BlockTessellator inner types declare
    // clang-format off
    struct LocalRegistry;
    struct UVOverride;
    // clang-format on

    // BlockTessellator inner types define
    enum class CrossTextureWidth : uchar {};

    enum class CrossTextureReverseSideMapping : uchar {};

    enum class BambooFenceSlatPieceType : int {};

    enum class FenceGatePieceType : int {};

    struct LocalRegistry {};

    struct UVOverride {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                mRenderingExtra;
    ::ll::TypedStorage<1, 1, bool>                                                mUseNormals;
    ::ll::TypedStorage<8, 8, ::BlockSource*>                                      mRegion;
    ::ll::TypedStorage<4, 8, ::mce::framebuilder::FrameLightingModelCapabilities> mLightingModelCapabilities;
    ::ll::TypedStorage<8, 88, ::TextureUVCoordinateSet>                           mFixedTexture;
    ::ll::TypedStorage<1, 1, bool>                                                mSupportsNewVertexFormat;
    ::ll::TypedStorage<1, 1, bool>                                                mUseFixedTexture;
    ::ll::TypedStorage<1, 1, bool>                                                mUseOccluder;
    ::ll::TypedStorage<1, 1, bool>                                                _tmpUseRegion;
    ::ll::TypedStorage<1, 1, bool>                                                mXFlipTexture;
    ::ll::TypedStorage<4, 4, int>                                                 mRenderingLayer;
    ::ll::TypedStorage<1, 1, bool>                                                mRenderingGUI;
    ::ll::TypedStorage<1, 1, bool>                                                mVersionPreTrailsAndTales;
    ::ll::TypedStorage<1, 1, bool>                                                mUseFixedColor;
    ::ll::TypedStorage<4, 96, ::std::array<::mce::Color, 6>>                      mFixedColors;
    ::ll::TypedStorage<1, 1, bool>                                                mApplyAmbientOcclusion;
    ::ll::TypedStorage<4, 4, ::BakedBlockLightType>                               mBakedLighting;
    ::ll::TypedStorage<1, 1, bool>                                                mForExport;
    ::ll::TypedStorage<1, 1, bool>                                                mUseCachedCalculation;
    ::ll::TypedStorage<4, 128, ::mce::Color[8]>                                   mAoColors;
    ::ll::TypedStorage<1, 8, ::BrightnessPair[4]>                                 mTc;
    ::ll::TypedStorage<1, 6, ::std::array<::Flip, 6>>                             mFlipFace;
    ::ll::TypedStorage<4, 120, ::std::array<::BlockTessellator::UVOverride, 6>>   mTextureOverride;
    ::ll::TypedStorage<8, 1000, ::Block const* [125]>                             mAmbientOcclusionCacheBlocks;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                 mItemMat;
    ::ll::TypedStorage<4, 24, ::AABB>                                             mCurrentShapeBB;
    ::ll::TypedStorage<1, 1, bool>                                                mCurrentShapeSet;
    ::ll::TypedStorage<8, 8, ::Block const*>                                      mCurrentShapeBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                         mCurrentShapeBlockPos;
    ::ll::TypedStorage<4, 4, float>                                               mCurrentScale;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::mce::Mesh>>            mBlockMeshes;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockTessellatorBlockInWorld, ::mce::Mesh>> mInWorldBlockMeshes;
    ::ll::TypedStorage<8, 272032, ::BlockTessellatorCache>                                       mBlockCache;
    ::ll::TypedStorage<8, 64, ::std::function<::Block const&(::BlockPos const&)>>                mCachedGetBlock;
    ::ll::TypedStorage<8, 19288, ::BiomeTintCache>                                               mBiomeWeights;
    ::ll::TypedStorage<4, 20, ::std::optional<::mce::Color>>                                     mColorOverride;
    ::ll::TypedStorage<1, 1, bool>                                                               mForceOpaque;
    ::ll::TypedStorage<8, 128, ::BlockTessellatorCustomExtraData::Map>                           mBlockExtraDataMap;
    ::ll::TypedStorage<8, 32, ::BlockTessellator::LocalRegistry>                                 mLocalRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTessellator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockTessellator(::BlockSource* level);

    MCAPI uchar _faceForRotation(uchar originalFace, ::Facing::Rotation rotation) const;

    MCAPI ::BrightnessPair _getLightColorForWater(::BlockPos const& pos, ::BrightnessPair insideBlock);

    MCAPI ::TextureUVCoordinateSet const& _getMappedTexture(::Block const& block, uchar face) const;

    MCAPI ::TextureUVCoordinateSet const& _getTexture(
        ::BlockPos const&      pos,
        ::Block const&         block,
        uchar                  face,
        int                    forcedVariant,
        ::BlockGraphics const* graphicsHint
    ) const;

    MCAPI void _pbrTextureId(::Tessellator& tessellator, ushort const& pbrTextureDataHandle) const;

    MCAPI void _prepareFixedColorsWithFlatAO(::Block const& block, ::BlockPos const& pos);

    MCAPI void _preparePolyCross(::Tessellator& tessellator, ::BlockPos const& p, ::Block const& block);

    MCAPI ::Vec3 _preparePolyCrossAndModifyPos(::Tessellator& tessellator, ::BlockPos const& p, ::Block const& block);

    MCAPI ::Vec3 _rotateBlockPos(::Vec3 const& point, ::Facing::Rotation rotation) const;

    MCAPI void _rotateVertsAroundPoint(
        ::std::array<::Vec3, 4>& vertices,
        ::Vec3 const&            rotationPoint,
        ::BlockGeometry::Axis    axis,
        ::mce::Radian            angle
    );

    MCAPI void _setBambooFencePostTexture(::TextureUVCoordinateSet const& bambooFenceTex);

    MCAPI void _setBambooFenceSlatTextureGui(
        ::TextureUVCoordinateSet const&              bambooFenceTex,
        ::BlockTessellator::BambooFenceSlatPieceType type
    );

    MCAPI void _setShapeAndTessellate(
        ::Tessellator&    tessellator,
        ::Vec3 const&     min,
        ::Vec3 const&     max,
        ::Block const&    block,
        ::BlockPos const& pos
    );

    MCAPI void _swapShapeAxes(bool x, bool y, bool z);

    MCAPI void _tessellateAllFaces(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI void _tessellateBambooFenceGui(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        bool              isInventoryIcon,
        float             lightMultiplier,
        float             alphaMultiplier,
        float             c10,
        float             c2
    );

    MCAPI void _tessellateBambooFenceSlatsInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        uchar             facing
    );

    MCAPI bool _tessellateBlockInWorldFlat(
        ::Tessellator&      tessellator,
        ::Block const&      block,
        ::BlockPos const&   pos,
        ::mce::Color const& base,
        ::BlockOccluder*    occluder,
        ::std::bitset<6>    faces,
        int                 forcedVariant
    );

    MCAPI bool _tessellateBlockInWorldWithAmbienceOcclusion(
        ::Tessellator&      tessellator,
        ::Block const&      block,
        ::BlockPos          p,
        ::mce::Color const& base,
        ::BlockOccluder*    occluder,
        ::std::bitset<6>    faces,
        int                 forcedVariant
    );

    MCAPI void _tessellateCalibratedSculkSensorAmethystCrystalInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p
    );

    MCAPI void _tessellateFenceGateGui(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        bool              isInventoryIcon,
        float             lightMultiplier,
        float             alphaMultiplier,
        float             c10,
        float             c2
    );

    MCAPI bool _tessellateFixedCrossTexture(
        ::TextureUVCoordinateSet const& tex,
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::AABB const&                   boundingBox,
        ::BlockPos const&               pos
    );

    MCAPI void _tessellateForInventory(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& pos,
        float             lightMultiplier,
        float             alphaMultiplier,
        float             c10,
        float             c2
    );

    MCAPI void _tessellateSculkSensorTendrilsInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        uchar             tessellationType
    );

    MCAPI void _tex1(::Tessellator& tessellator, ::Vec2 const& uv);

    MCAPI void
    _trySetFenceGateTexture(::Block const& block, ::BlockPos const& p, ::BlockTessellator::FenceGatePieceType type);

    MCAPI void appendTessellatedBlock(::Tessellator& tessellator, ::Block const& block);

    MCAPI void buildBiomeWeights(::BlockPos const& pointPos);

    MCAPI ::AABB const& getCurrentShape();

    MCAPI ::mce::Mesh& getMeshForBlock(::Tessellator& tessellator, ::Block const& block);

    MCAPI ::mce::Mesh& getMeshForBlockInWorld(
        ::Tessellator&        tessellator,
        ::Block const&        block,
        ::BlockPos&           blockPos,
        ::BlockRenderLayer    layer,
        void const*           owner,
        bool                  useOccluder,
        bool                  useRegion,
        ::LightTexture const& lightTexture
    );

    MCAPI float getWaterHeight(::BlockPos const& pos, ::Material const& material, ::BlockPos const& originalBlockPos);

    MCAPI void moveCurrentShape(::Vec3 const& offset);

    MCAPI void renderGuiBlock(
        ::ScreenContext&         screenContext,
        ::Block const&           block,
        ::BlockGraphics const&   blockGraphics,
        ::mce::TexturePtr const& texture,
        float                    lightMultiplier,
        float                    alphaMultiplier
    );

    MCAPI bool rotateCommandBlockFaces(::Block const& block);

    MCAPI void setRegion(::BlockSource& region);

    MCAPI void tessellateAll(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& tex
    );

    MCAPI bool tessellateAmethystCluster(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool
    tessellateAnvilInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos, bool render);

    MCAPI float tessellateAnvilPiece(
        ::Tessellator&        tessellator,
        ::Block const&        block,
        ::BlockPos const&     p,
        ::AnvilPart           part,
        float                 bottom,
        float                 width,
        float                 height,
        float                 length,
        bool                  rotate,
        bool                  render,
        ::buffer_span<::Flip> faces
    );

    MCAPI bool tessellateAzaleaBlockInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& pos,
        bool              forFlowerPot
    );

    MCAPI bool
    tessellateBambooSaplingBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateBambooStalkBlockInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& pos,
        bool              forFlowerPot
    );

    MCAPI void tessellateBambooStemInWorld(
        ::Tessellator&         tessellator,
        ::Block const&         block,
        ::BlockPos const&      pos,
        ::BlockGraphics const& blockGraphics,
        float                  diameter,
        float                  sideVariantOffset,
        float                  verticalPortion
    );

    MCAPI void tessellateBambooTopSideLeafInWorld(
        ::Tessellator& tessellator,
        ::Vec3         leafPos,
        float          width,
        float          u0,
        float          u1,
        float          v0,
        float          v1,
        bool           flipped
    );

    MCAPI void tessellateBeacon(
        ::Tessellator& tessellator,
        ::Block const& block,
        float          lightMultiplier,
        float          alphaMultiplier,
        ::Vec3 const&  vOffset
    );

    MCAPI bool tessellateBeaconInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateBellBlockHangingBetweenInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& pos,
        bool              rotate,
        ::Direction::Type dir
    );

    MCAPI bool tessellateBellBlockHangingOneSideInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& pos,
        bool              rotate,
        ::Direction::Type dir
    );

    MCAPI bool
    tessellateBellBlockHangingTopInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateBellBlockStandingInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& pos,
        bool              rotate,
        ::Direction::Type dir
    );

    MCAPI void tessellateBellBlockStandingLegInWorld(
        ::Tessellator&         tessellator,
        ::Block const&         block,
        ::BlockPos const&      pos,
        ::BlockGraphics const& blockGraphics,
        bool                   rotate
    );

    MCAPI bool tessellateBigDripleafBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI void tessellateBigDripleafFront(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        ::BigDripleafTilt tilt,
        int               facing
    );

    MCAPI void tessellateBigDripleafSide(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        ::BigDripleafTilt tilt,
        int               facing
    );

    MCAPI void
    tessellateBigDripleafStem(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p, int facing);

    MCAPI void tessellateBigDripleafTop(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        ::BigDripleafTilt tilt,
        int               facing
    );

    MCAPI bool tessellateBlockInWorld(
        ::Tessellator&                 tessellator,
        ::Block const&                 block,
        ::BlockPos const&              pos,
        ::std::bitset<6>               faces,
        ::AirAndSimpleBlockBits const* airAndSimpleBlocks
    );

    MCAPI bool tessellateBrewingStandInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateBubbleColumnInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateCactusInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool
    tessellateCalibratedSculkSensorBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool
    tessellateCameraFacingSpriteInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateCampfireBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateCandleInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateCauldronInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateCaveVinesInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateChainInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateChemistryTableInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool
    tessellateChiseledBookshelfBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool
    tessellateChorusFlowerInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos, bool render);

    MCAPI bool tessellateChorusPlantInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateCocoaInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateComparatorInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateComposterBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI void tessellateCompoundCreatorFace(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& tex,
        ::Vec2                          uv0,
        ::Vec2                          uv1,
        int                             face,
        bool                            inward,
        ::Matrix*                       mat
    );

    MCAPI bool tessellateCompoundCreatorInWorld(::Tessellator& t, ::Block const& b, ::BlockPos const& p);

    MCAPI bool tessellateCoralFanHangInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateCoralFanInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateCrossInWorld(
        ::Tessellator&                                     tessellator,
        ::Block const&                                     block,
        ::BlockPos const&                                  p,
        bool                                               forceDoubleSide,
        ::BlockTessellator::CrossTextureReverseSideMapping reverseSideMapping,
        float                                              scale,
        ::BlockTessellator::CrossTextureWidth              width
    );

    MCAPI void tessellateCrossTexture(
        ::Tessellator&                                     tessellator,
        ::TextureUVCoordinateSet const&                    tex,
        ::Vec3 const&                                      pos,
        ::Block const&                                     block,
        bool                                               forceDoubleSided,
        ::BlockTessellator::CrossTextureReverseSideMapping reverseSideMapping,
        float                                              scale,
        ::BlockTessellator::CrossTextureWidth              width
    );

    MCAPI void tessellateCrossTexture(
        ::Tessellator&                                     tessellator,
        ::TextureUVCoordinateSet const&                    tex1,
        ::TextureUVCoordinateSet const&                    tex2,
        ::Vec3 const&                                      pos,
        ::Block const&                                     block,
        float                                              scale,
        ::BlockTessellator::CrossTextureWidth              width,
        ::BlockTessellator::CrossTextureReverseSideMapping reverseSideMapping,
        bool                                               forceDoubleSided
    );

    MCAPI void tessellateCrossTextureDown(
        ::Tessellator&                        tessellator,
        ::TextureUVCoordinateSet const&       tex1,
        ::TextureUVCoordinateSet const&       tex2,
        ::Vec3 const&                         pos,
        bool                                  renderBothSides,
        ::Block const&                        block,
        float                                 scale,
        ::BlockTessellator::CrossTextureWidth width
    );

    MCAPI void tessellateCrossTextureEast(
        ::Tessellator&                        tessellator,
        ::TextureUVCoordinateSet const&       tex1,
        ::TextureUVCoordinateSet const&       tex2,
        ::Vec3 const&                         pos,
        bool                                  renderBothSides,
        ::Block const&                        block,
        float                                 scale,
        ::BlockTessellator::CrossTextureWidth width
    );

    MCAPI void tessellateCrossTextureNorth(
        ::Tessellator&                        tessellator,
        ::TextureUVCoordinateSet const&       tex1,
        ::TextureUVCoordinateSet const&       tex2,
        ::Vec3 const&                         pos,
        bool                                  renderBothSides,
        ::Block const&                        block,
        float                                 scale,
        ::BlockTessellator::CrossTextureWidth width
    );

    MCAPI void tessellateCrossTextureSouth(
        ::Tessellator&                        tessellator,
        ::TextureUVCoordinateSet const&       tex1,
        ::TextureUVCoordinateSet const&       tex2,
        ::Vec3 const&                         pos,
        bool                                  renderBothSides,
        ::Block const&                        block,
        float                                 scale,
        ::BlockTessellator::CrossTextureWidth width
    );

    MCAPI void tessellateCrossTextureUp(
        ::Tessellator&                                     tessellator,
        ::TextureUVCoordinateSet const&                    tex1,
        ::TextureUVCoordinateSet const&                    tex2,
        ::Vec3 const&                                      pos,
        bool                                               renderBothSides,
        ::Block const&                                     block,
        float                                              scale,
        ::BlockTessellator::CrossTextureWidth              width,
        ::BlockTessellator::CrossTextureReverseSideMapping reverseSideMapping
    );

    MCAPI void tessellateCrossTextureWest(
        ::Tessellator&                        tessellator,
        ::TextureUVCoordinateSet const&       tex1,
        ::TextureUVCoordinateSet const&       tex2,
        ::Vec3 const&                         pos,
        bool                                  renderBothSides,
        ::Block const&                        block,
        float                                 scale,
        ::BlockTessellator::CrossTextureWidth width
    );

    MCAPI bool tessellateDiodeInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateDoorInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateDoublePlantInWorld(
        ::Tessellator&                                     tessellator,
        ::Block const&                                     block,
        ::BlockShape                                       blockShape,
        ::BlockPos const&                                  p,
        bool                                               forceDoubleSided,
        ::Vec3                                             offset,
        bool                                               applyAmbientOcclusion,
        ::BlockTessellator::CrossTextureReverseSideMapping reverseSideMapping,
        ::BlockTessellator::CrossTextureWidth              width
    );

    MCAPI bool tessellateDoubleThinFenceInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        bool              singleSide
    );

    MCAPI bool tessellateDragonEgg(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& pos,
        bool              render,
        int               allowedFaces
    );

    MCAPI bool
    tessellateDriedGhastInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& position);

    MCAPI bool tessellateDriedKelpBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateDustInWorld(::Tessellator& tessellator, ::Block const& b, ::BlockPos const& p);

    MCAPI void tessellateEast(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& intex
    );

    MCAPI bool tessellateEndGatewayInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateEndPortalFrameInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateEndPortalInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI void
    tessellateEndRodAppended(::Tessellator& tessellator, ::Block const& block, ::BlockGraphics const& blockGraphics);

    MCAPI void
    tessellateEndRodDown(::Tessellator& tessellator, ::BlockPos const& p, ::TextureUVCoordinateSet const& tex);

    MCAPI void
    tessellateEndRodEast(::Tessellator& tessellator, ::BlockPos const& p, ::TextureUVCoordinateSet const& tex);

    MCAPI void
    tessellateEndRodGui(::Tessellator& tessellator, ::Block const& block, ::BlockGraphics const& blockGraphics);

    MCAPI bool tessellateEndRodInWorld(::Tessellator& tessellator, ::Block const& b, ::BlockPos const& p);

    MCAPI void
    tessellateEndRodNorth(::Tessellator& tessellator, ::BlockPos const& p, ::TextureUVCoordinateSet const& tex);

    MCAPI void
    tessellateEndRodSouth(::Tessellator& tessellator, ::BlockPos const& p, ::TextureUVCoordinateSet const& tex);

    MCAPI void tessellateEndRodUp(::Tessellator& tessellator, ::BlockPos const& p, ::TextureUVCoordinateSet const& tex);

    MCAPI void
    tessellateEndRodWest(::Tessellator& tessellator, ::BlockPos const& p, ::TextureUVCoordinateSet const& tex);

    MCAPI bool tessellateExtraDataInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateEyeblossomInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI void tessellateFaceDown(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& intex
    );

    MCAPI void tessellateFaceUp(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& intex
    );

    MCAPI void tessellateFaceWithUVs(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& tex,
        float                           u0,
        float                           v0,
        float                           u1,
        float                           v1,
        int                             face
    );

    MCAPI bool tessellateFacingBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateFenceGateInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateFenceInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateFireInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos p);

    MCAPI bool tessellateFireflyBushInWorld(
        ::Tessellator&         tessellator,
        ::Block const&         block,
        ::BlockPos const&      pos,
        ::BlockGraphics const& blockGraphics
    );

    MCAPI bool tessellateFlowerBedBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateFlowerPotInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateFrogSpawnInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool
    tessellateGrindstoneBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI void tessellateGrindstoneLegInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& pos,
        bool              attached,
        bool              rotate,
        ::Direction::Type attachmentDir
    );

    MCAPI bool tessellateHeavyCoreInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateHoneyBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateHopperInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool
    tessellateHopperInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos, bool render);

    MCAPI bool
    tessellateInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos, bool useCalcWithCache);

    MCAPI bool tessellateIndividualCandleInWorld(
        ::Tessellator& tessellator,
        ::Block const& block,
        ::Vec3 const&  p,
        float          height,
        ::Vec3         offset
    );

    MCAPI bool tessellateIndividualSeaPickleInWorld(
        ::Tessellator& tessellator,
        ::Block const& block,
        ::Vec3 const&  p,
        double         height,
        ::Vec3         offset
    );

    MCAPI bool tessellateIndividualTurtleEggInWorld(
        ::Tessellator& tessellator,
        ::Block const& block,
        ::Vec3 const&  p,
        ::Vec3         from,
        ::Vec3         to,
        int            eggNum
    );

    MCAPI bool tessellateItemFrameInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& pos,
        bool              ignoreLighting
    );

    MCAPI bool tessellateKelpInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateLadderInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateLanternBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateLecternBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateLeverInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI void
    tessellateLightningRodDown(::Tessellator& tessellator, ::BlockPos const& p, ::TextureUVCoordinateSet const& tex);

    MCAPI void
    tessellateLightningRodEast(::Tessellator& tessellator, ::BlockPos const& p, ::TextureUVCoordinateSet const& tex);

    MCAPI void
    tessellateLightningRodGui(::Tessellator& tessellator, ::Block const& block, ::BlockGraphics const& blockGraphics);

    MCAPI void
    tessellateLightningRodNorth(::Tessellator& tessellator, ::BlockPos const& p, ::TextureUVCoordinateSet const& tex);

    MCAPI void
    tessellateLightningRodSouth(::Tessellator& tessellator, ::BlockPos const& p, ::TextureUVCoordinateSet const& tex);

    MCAPI void
    tessellateLightningRodUp(::Tessellator& tessellator, ::BlockPos const& p, ::TextureUVCoordinateSet const& tex);

    MCAPI void
    tessellateLightningRodWest(::Tessellator& tessellator, ::BlockPos const& p, ::TextureUVCoordinateSet const& tex);

    MCAPI bool tessellateLilypadInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateLiquidInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool
    tessellateMangrovePropaguleHangingInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateMangrovePropaguleInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        bool              forFlowerPot
    );

    MCAPI bool tessellateMangroveRootInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateMultiFaceBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI void tessellateNorth(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& intex
    );

    MCAPI bool tessellatePaleMossCarpetInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellatePitcherCropInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI void tessellatePitcherCropLeavesInWorld(
        ::Tessellator&         tessellator,
        ::Block const&         block,
        ::BlockPos const&      p,
        int                    growthStage,
        ::BlockGraphics const& blockGraphics
    );

    MCAPI void tessellatePitcherCropPodInWorld(
        ::Tessellator&         tessellator,
        ::Block const&         block,
        ::BlockPos const&      p,
        int                    growthStage,
        ::BlockGraphics const& blockGraphics
    );

    MCAPI bool tessellatePointedDripstoneInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateRailInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateRepeaterInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool
    tessellateRowInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p, bool forceDoubleSide);

    MCAPI void tessellateRowTexture(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::BlockPos const&               p,
        ::TextureUVCoordinateSet const& tex,
        float                           x,
        float                           y,
        float                           z,
        bool                            forceDoubleSide
    );

    MCAPI void tessellateRowTexture(
        ::Tessellator&                  tessellator,
        ::TextureUVCoordinateSet const& tex1,
        ::TextureUVCoordinateSet const& tex2,
        ::TextureUVCoordinateSet const& tex3,
        ::TextureUVCoordinateSet const& tex4,
        float                           x,
        float                           y,
        float                           z
    );

    MCAPI bool
    tessellateScaffoldingBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI void tessellateScaffoldingHorizontalPoleInWorld(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::TextureUVCoordinateSet const& side,
        ::TextureUVCoordinateSet const& bottom,
        ::BlockPos const&               blockPos,
        ::Flip                          faceFlip,
        ::Vec3 const&                   offset,
        bool                            isSupportPole
    );

    MCAPI void tessellateScaffoldingVerticalPoleInWorld(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::TextureUVCoordinateSet const& tex,
        ::BlockPos const&               pos,
        ::Flip                          flip
    );

    MCAPI bool tessellateSculkSensorBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateSculkShriekerInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateSeaPickleInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateSeagrassInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateShelfBlockInGui(::Tessellator& tessellator, ::Block const& block);

    MCAPI bool tessellateShelfBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI void tessellateShulkerBoxFacade(::Tessellator& tessellator, ::Vec3 const& pos);

    MCAPI void tessellateSimpleBlockInWorld(
        ::Tessellator&                 tessellator,
        ::Block const&                 block,
        ::BlockPos const&              pos,
        ::AirAndSimpleBlockBits const& airAndSimpleBlocks
    );

    MCAPI bool
    tessellateSmallDripleafBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI void
    tessellateSmallDripleafLeaves(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p, int facing);

    MCAPI void
    tessellateSmallDripleafSides(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p, int facing);

    MCAPI void
    tessellateSmallDripleafStem(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p, int facing);

    MCAPI void tessellateSouth(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& intex
    );

    MCAPI bool tessellateSporeBlossomInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateStairsInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI void tessellateStemDirTexture(
        ::Tessellator&                  tessellator,
        ::TextureUVCoordinateSet const& tex,
        int                             dir,
        float                           h,
        ::Vec3 const&                   pos
    );

    MCAPI bool tessellateStemInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI void tessellateStemTexture(
        ::Tessellator&                  tessellator,
        ::TextureUVCoordinateSet const& tex,
        float                           h,
        float                           x,
        float                           y,
        float                           z
    );

    MCAPI bool
    tessellateStoneCutterBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateStructureVoidInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateTerracottaInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI void tessellateTorch(
        ::Tessellator& tessellator,
        ::Block const& block,
        ::Vec3 const&  pos,
        float          xxa,
        float          zza,
        float          floorHeight
    );

    MCAPI bool tessellateTorchInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateTrapdoorInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateTripwireHookInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateTripwireInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateTurtleEggInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateTwistingVinesInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateVaultInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI void tessellateVerticesAndUVs(
        ::Tessellator&                  tessellator,
        ::TextureUVCoordinateSet const& tex,
        ::Vec3 const&                   a,
        ::Vec3 const&                   b,
        ::Vec2&                         first,
        ::Vec2&                         second,
        ::Vec2&                         third,
        ::Vec2&                         fourth,
        int                             face
    );

    MCAPI bool tessellateVineInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateWallInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateWeepingVinesInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI void tessellateWest(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& intex
    );

    MCAPI ~BlockTessellator();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool canRender(::BlockShape blockShape);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockSource* level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
