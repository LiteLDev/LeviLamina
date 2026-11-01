#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/BakedBlockLightType.h"
#include "mc/client/renderer/block/BlockTessellatorBlockInWorld.h"
#include "mc/client/renderer/block/BlockTessellatorCache.h"
#include "mc/client/renderer/block/block_geo_type/GeoTypeResolver.h"
#include "mc/client/renderer/block/block_tessellator_custom_extra_data/Map.h"
#include "mc/client/renderer/texture/TextureUVCoordinateSet.h"
#include "mc/client/world/level/biome/BiomeTintCache.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/minecraft_renderer/framebuilder/FrameLightingModelCapabilities.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/legacy/facing/Rotation.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/AnvilPart.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockShape.h"
#include "mc/world/level/block/BrightnessPair.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockGraphics;
class BlockOccluder;
class BlockSource;
class BlockType;
class LightTexture;
class Material;
class Matrix;
class ScreenContext;
class Tessellator;
class Vec2;
class Vec3;
struct AirAndSimpleBlockBits;
struct OffscreenCaptureDescription;
namespace mce { class Mesh; }
namespace mce { class TexturePtr; }
// clang-format on

class BlockTessellator {
public:
    // BlockTessellator inner types declare
    // clang-format off
    struct LocalRegistry;
    struct UVOverride;
    // clang-format on

    // BlockTessellator inner types define
    enum class CrossTextureWidth : uchar {
        Normal = 0,
        Wide   = 1,
    };

    enum class CrossTextureReverseSideMapping : uchar {
        Mirrored = 0,
        Normal   = 1,
    };

    enum class BambooFenceSlatPieceType : int {
        LeftSidePiece  = 0,
        CenterPiece    = 1,
        RightSidePiece = 2,
    };

    enum class FenceGatePieceType : int {
        Post                 = 0,
        ClosedInnerLeftPost  = 1,
        ClosedInnerRightPost = 2,
        Slat                 = 3,
        OpenedInnerLeftPost  = 4,
        OpenedInnerRightPost = 5,
    };

    struct LocalRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockType const*> mFire;
        ::ll::TypedStorage<8, 8, ::Block const*>     mRedstoneTorch;
        ::ll::TypedStorage<8, 8, ::Block const*>     mUnlitRedstoneTorch;
        ::ll::TypedStorage<8, 8, ::Block const*>     mObsidian;
        // NOLINTEND
    };

    struct UVOverride {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort> pbrTextureDataHandle;
        ::ll::TypedStorage<4, 4, float>  u0;
        ::ll::TypedStorage<4, 4, float>  u1;
        ::ll::TypedStorage<4, 4, float>  v0;
        ::ll::TypedStorage<4, 4, float>  v1;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                mRenderingExtra;
    ::ll::TypedStorage<1, 1, bool>                                                mUseNormals;
    ::ll::TypedStorage<1, 1, bool>                                                mTextureShiftEnabled;
    ::ll::TypedStorage<8, 8, ::BlockSource*>                                      mRegion;
    ::ll::TypedStorage<4, 8, ::mce::framebuilder::FrameLightingModelCapabilities> mLightingModelCapabilities;
    ::ll::TypedStorage<8, 96, ::TextureUVCoordinateSet>                           mFixedTexture;
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
    ::ll::TypedStorage<8, 64, ::BlockGeoType::GeoTypeResolver>                                   mGeoTypeResolver;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTessellator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockTessellator(::BlockSource* level);

    MCAPI void _flipAllFaces(::Facing::Rotation rotation);

    MCNAPI float _getLiquidOwnHeight(::BlockPos const& pos, ::Material const& material);

    MCNAPI ::TextureUVCoordinateSet const& _getTexture(
        ::BlockPos const&      pos,
        ::Block const&         block,
        uchar                  face,
        int                    forcedVariant,
        ::BlockGraphics const* graphicsHint
    ) const;

    MCNAPI void _modifyCurrentShapeAccordingToAttachmentDirection(::Direction::Type attachmentDir);

    MCNAPI void _preparePolyCross(::Tessellator& tessellator, ::BlockPos const& p, ::Block const& block);

    MCNAPI void _setBambooFencePostTexture(::TextureUVCoordinateSet const& bambooFenceTex);

    MCNAPI void _setBambooFenceSlatTextureGui(
        ::TextureUVCoordinateSet const&              bambooFenceTex,
        ::BlockTessellator::BambooFenceSlatPieceType type
    );

    MCNAPI void _tessellateAllFaces(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI void _tessellateBambooFenceGui(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        bool              isInventoryIcon,
        float             lightMultiplier,
        float             alphaMultiplier,
        float             c10,
        float             c2
    );

    MCNAPI void _tessellateBambooFenceSlatsInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        uchar             facing
    );

    MCNAPI bool _tessellateBlockInWorldFlat(
        ::Tessellator&         tessellator,
        ::Block const&         block,
        ::BlockPos const&      pos,
        ::mce::Color const&    base,
        ::BlockOccluder*       occluder,
        ::std::bitset<6> const faces,
        int                    forcedVariant
    );

    MCNAPI bool _tessellateBlockInWorldWithAmbienceOcclusion(
        ::Tessellator&         tessellator,
        ::Block const&         block,
        ::BlockPos             p,
        ::mce::Color const&    base,
        ::BlockOccluder*       occluder,
        ::std::bitset<6> const faces,
        int                    forcedVariant
    );

    MCNAPI void _tessellateCalibratedSculkSensorAmethystCrystalInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p
    );

    MCNAPI void _tessellateFenceGateGui(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        bool              isInventoryIcon,
        float             lightMultiplier,
        float             alphaMultiplier,
        float             c10,
        float             c2
    );

    MCNAPI void _tessellateForInventory(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& pos,
        float             lightMultiplier,
        float             alphaMultiplier,
        float             c10,
        float             c2
    );

    MCNAPI void _tessellateSculkSensorTendrilsInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        uchar             tessellationType
    );

    MCNAPI void _tex1(::Tessellator& tessellator, ::Vec2 const& uv);

    MCNAPI void
    _trySetFenceGateTexture(::Block const& block, ::BlockPos const& p, ::BlockTessellator::FenceGatePieceType type);

    MCAPI void appendTessellatedBlock(::Tessellator& tessellator, ::Block const& block);

    MCNAPI void clearBlockCache();

    MCAPI ::AABB const& getCurrentShape();

    MCNAPI ::mce::Mesh& getMeshForBlock(::Tessellator& tessellator, ::Block const& block);

    MCNAPI ::mce::Mesh& getMeshForBlockInWorld(
        ::Tessellator&        tessellator,
        ::Block const&        block,
        ::BlockPos&           blockPos,
        ::BlockRenderLayer    layer,
        void const*           owner,
        bool                  useOccluder,
        bool                  useRegion,
        ::LightTexture const& lightTexture
    );

    MCNAPI float getWaterHeight(::BlockPos const& pos, ::Material const& material, ::BlockPos const& originalBlockPos);

    MCNAPI void moveCurrentShape(::Vec3 const& offset);

    MCAPI void renderGuiBlock(
        ::ScreenContext&                     screenContext,
        ::Block const&                       block,
        ::BlockGraphics const&               blockGraphics,
        ::mce::TexturePtr const&             texture,
        float                                lightMultiplier,
        float                                alphaMultiplier,
        ::OffscreenCaptureDescription const& capture
    );

    MCNAPI void resetCache(::BlockPos const& pos);

    MCNAPI void resetCacheToAir(::BlockPos const& pos);

    MCNAPI void resetRegion();

    MCNAPI bool rotateCommandBlockFaces(::Block const& block);

    MCAPI void setRegion(::BlockSource& region);

    MCNAPI void tessellateAll(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& tex
    );

    MCNAPI bool
    tessellateAnvilInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos, bool render);

    MCNAPI float tessellateAnvilPiece(
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

    MCNAPI bool tessellateAzaleaBlockInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& pos,
        bool              forFlowerPot
    );

    MCNAPI bool tessellateBambooBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool
    tessellateBambooSaplingBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateBambooStalkBlockInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& pos,
        bool              forFlowerPot
    );

    MCNAPI void tessellateBambooStemInWorld(
        ::Tessellator&         tessellator,
        ::Block const&         block,
        ::BlockPos const&      pos,
        ::BlockGraphics const& blockGraphics,
        float const            diameter,
        float const            sideVariantOffset,
        float const            verticalPortion
    );

    MCNAPI bool tessellateBeaconInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateBellBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI void tessellateBellBlockStandingLegInWorld(
        ::Tessellator&         tessellator,
        ::Block const&         block,
        ::BlockPos const&      pos,
        ::BlockGraphics const& blockGraphics,
        bool const             rotate
    );

    MCNAPI bool
    tessellateBigDripleafBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateBlockInWorld(
        ::Tessellator&                 tessellator,
        ::Block const&                 block,
        ::BlockPos const&              pos,
        ::std::bitset<6> const         faces,
        ::AirAndSimpleBlockBits const* airAndSimpleBlocks
    );

    MCNAPI bool tessellateBrewingStandInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateBubbleColumnInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateCactusInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool
    tessellateCalibratedSculkSensorBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool
    tessellateCameraFacingSpriteInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateCampfireBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateCandleCakeInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateCandleInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateCauldronInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateCaveVinesInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateChainInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool
    tessellateChemistryTableInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool
    tessellateChiseledBookshelfBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool
    tessellateChorusFlowerInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos, bool render);

    MCNAPI bool tessellateChorusPlantInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateCocoaInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateCommandBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateComparatorInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool
    tessellateComposterBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI void tessellateCompoundCreatorFace(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& tex,
        ::Vec2                          uv0,
        ::Vec2                          uv1,
        int const                       face,
        bool                            inward,
        ::Matrix*                       mat
    );

    MCNAPI bool tessellateCoralFanHangInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateCoralFanInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateCrossInWorld(
        ::Tessellator&                                     tessellator,
        ::Block const&                                     block,
        ::BlockPos const&                                  p,
        bool const                                         forceDoubleSide,
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
        bool const                                         forceDoubleSided
    );

    MCNAPI void tessellateCrossTextureUp(
        ::Tessellator&                                     tessellator,
        ::TextureUVCoordinateSet const&                    tex1,
        ::TextureUVCoordinateSet const&                    tex2,
        ::Vec3 const&                                      pos,
        bool const                                         renderBothSides,
        ::Block const&                                     block,
        float                                              scale,
        ::BlockTessellator::CrossTextureWidth              width,
        ::BlockTessellator::CrossTextureReverseSideMapping reverseSideMapping
    );

    MCNAPI bool tessellateCrystalCluster(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateDiodeInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateDoorInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateDoublePlantInWorld(
        ::Tessellator&                                     tessellator,
        ::Block const&                                     block,
        ::BlockShape const                                 blockShape,
        ::BlockPos const&                                  p,
        bool const                                         forceDoubleSided,
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

    MCNAPI bool
    tessellateDriedGhastInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& position);

    MCNAPI bool
    tessellateDriedKelpBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateDustInWorld(::Tessellator& tessellator, ::Block const& b, ::BlockPos const& p);

    MCAPI void tessellateEast(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& intex
    );

    MCNAPI bool tessellateEndGatewayInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool
    tessellateEndPortalFrameInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateEndPortalInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI void
    tessellateEndRodAppended(::Tessellator& tessellator, ::Block const& block, ::BlockGraphics const& blockGraphics);

    MCNAPI void
    tessellateEndRodGui(::Tessellator& tessellator, ::Block const& block, ::BlockGraphics const& blockGraphics);

    MCNAPI bool tessellateEndRodInWorld(::Tessellator& tessellator, ::Block const& b, ::BlockPos const& p);

    MCNAPI bool tessellateEyeblossomInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

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

    MCNAPI void tessellateFaceWithUVs(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& tex,
        float const                     u0,
        float const                     v0,
        float const                     u1,
        float const                     v1,
        int const                       face
    );

    MCNAPI bool tessellateFacingBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateFenceGateInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateFenceInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateFireInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos p);

    MCNAPI bool tessellateFireflyBushInWorld(
        ::Tessellator&         tessellator,
        ::Block const&         block,
        ::BlockPos const&      pos,
        ::BlockGraphics const& blockGraphics
    );

    MCNAPI bool tessellateFlowerBedBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateFlowerPotInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateFrogSpawnInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool
    tessellateGrindstoneBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI void tessellateGrindstoneLegInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& pos,
        bool              attached,
        bool              rotate,
        ::Direction::Type attachmentDir
    );

    MCNAPI bool tessellateHoneyBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateHopperInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool
    tessellateHopperInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos, bool render);

    MCAPI bool
    tessellateInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos, bool useCalcWithCache);

    MCNAPI bool tessellateIndividualCandleInWorld(
        ::Tessellator& tessellator,
        ::Block const& block,
        ::Vec3 const&  p,
        float const    height,
        ::Vec3 const   offset
    );

    MCNAPI bool tessellateIndividualSeaPickleInWorld(
        ::Tessellator& tessellator,
        ::Block const& block,
        ::Vec3 const&  p,
        double const   height,
        ::Vec3 const   offset
    );

    MCNAPI bool tessellateIndividualTurtleEggInWorld(
        ::Tessellator& tessellator,
        ::Block const& block,
        ::Vec3 const&  p,
        ::Vec3 const   from,
        ::Vec3 const   to,
        int const      eggNum
    );

    MCNAPI bool tessellateItemFrameInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& pos,
        bool const        ignoreLighting
    );

    MCNAPI bool tessellateKelpInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateLadderInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateLanternBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateLecternBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateLeverInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI void
    tessellateLightningRodGui(::Tessellator& tessellator, ::Block const& block, ::BlockGraphics const& blockGraphics);

    MCNAPI bool tessellateLightningRodInWorld(::Tessellator& tessellator, ::Block const& b, ::BlockPos const& p);

    MCNAPI bool tessellateLilypadInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateLiquidInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool
    tessellateMangrovePropaguleHangingInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateMangrovePropaguleInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        bool              forFlowerPot
    );

    MCNAPI bool tessellateMangroveRootInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateMultiFaceBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI void tessellateNorth(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& intex
    );

    MCNAPI bool tessellatePaleMossCarpetInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellatePistonInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellatePitcherCropInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellatePitcherPlantInWorld(
        ::Tessellator&      tessellator,
        ::Block const&      block,
        ::BlockShape const& blockShape,
        ::BlockPos const&   p
    );

    MCNAPI bool
    tessellatePointedDripstoneInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateRailInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateRepeaterInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateRowInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        bool const        forceDoubleSide
    );

    MCNAPI void tessellateRowTexture(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::BlockPos const&               p,
        ::TextureUVCoordinateSet const& tex,
        float                           x,
        float                           y,
        float                           z,
        bool const                      forceDoubleSide
    );

    MCNAPI void tessellateRowTexture(
        ::Tessellator&                  tessellator,
        ::TextureUVCoordinateSet const& tex1,
        ::TextureUVCoordinateSet const& tex2,
        ::TextureUVCoordinateSet const& tex3,
        ::TextureUVCoordinateSet const& tex4,
        float                           x,
        float                           y,
        float                           z
    );

    MCNAPI bool
    tessellateScaffoldingBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI void tessellateScaffoldingHorizontalPoleInWorld(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::TextureUVCoordinateSet const& side,
        ::TextureUVCoordinateSet const& bottom,
        ::BlockPos const&               blockPos,
        ::Flip                          faceFlip,
        ::Vec3 const&                   offset,
        bool const                      isSupportPole
    );

    MCNAPI void tessellateScaffoldingVerticalPoleInWorld(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::TextureUVCoordinateSet const& tex,
        ::BlockPos const&               pos,
        ::Flip const                    flip
    );

    MCNAPI bool
    tessellateSculkSensorBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateSculkShriekerInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateSeaPickleInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateSeagrassInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateShelfBlockInGui(::Tessellator& tessellator, ::Block const& block);

    MCNAPI bool tessellateShelfBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI void tessellateSimpleBlockInWorld(
        ::Tessellator&                 tessellator,
        ::Block const&                 block,
        ::BlockPos const&              pos,
        ::AirAndSimpleBlockBits const& airAndSimpleBlocks
    );

    MCNAPI bool tessellateSlimeBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool
    tessellateSmallDripleafBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI void tessellateSouth(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& intex
    );

    MCNAPI bool tessellateSporeBlossomInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateStairsInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateStemInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI void tessellateStemTexture(
        ::Tessellator&                  tessellator,
        ::TextureUVCoordinateSet const& tex,
        float                           h,
        float                           x,
        float                           y,
        float                           z
    );

    MCNAPI bool
    tessellateStoneCutterBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateStructureVoidInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool
    tessellateSweetBerryBushBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateTerracottaInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateTopSnowInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI void tessellateTorch(
        ::Tessellator& tessellator,
        ::Block const& block,
        ::Vec3 const&  pos,
        float          xxa,
        float          zza,
        float          floorHeight
    );

    MCNAPI bool tessellateTorchInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateTrapdoorInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateTreeInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateTripwireHookInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateTripwireInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateTurtleEggInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateTwistingVinesInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateVaultInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCNAPI bool tessellateVineInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateWallInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCNAPI bool tessellateWeepingVinesInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

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
    MCNAPI static ::TextureUVCoordinateSet const& _getMappedTexture(::Block const& block, uchar face);

    MCNAPI static bool canRender(::BlockShape blockShape);
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
