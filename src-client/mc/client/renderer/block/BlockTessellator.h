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

    MCAPI ::TextureUVCoordinateSet const& _getMappedTexture(::Block const& block, uchar face) const;

    MCAPI ::TextureUVCoordinateSet const& _getTexture(
        ::BlockPos const&      pos,
        ::Block const&         block,
        uchar                  face,
        int                    forcedVariant,
        ::BlockGraphics const* graphicsHint
    ) const;

    MCAPI void _modifyCurrentShapeAccordingToAttachmentDirection(::Direction::Type attachmentDir);

    MCAPI void _preparePolyCross(::Tessellator& tessellator, ::BlockPos const& p, ::Block const& block);

    MCAPI void _setBambooFencePostTexture(::TextureUVCoordinateSet const& bambooFenceTex);

    MCAPI void _setBambooFenceSlatTextureGui(
        ::TextureUVCoordinateSet const&              bambooFenceTex,
        ::BlockTessellator::BambooFenceSlatPieceType type
    );

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
        ::Tessellator&         tessellator,
        ::Block const&         block,
        ::BlockPos const&      pos,
        ::mce::Color const&    base,
        ::BlockOccluder*       occluder,
        ::std::bitset<6> const faces,
        int                    forcedVariant
    );

    MCAPI bool _tessellateBlockInWorldWithAmbienceOcclusion(
        ::Tessellator&         tessellator,
        ::Block const&         block,
        ::BlockPos             p,
        ::mce::Color const&    base,
        ::BlockOccluder*       occluder,
        ::std::bitset<6> const faces,
        int                    forcedVariant
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

    MCAPI void clearBlockCache();

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
        ::ScreenContext&                     screenContext,
        ::Block const&                       block,
        ::BlockGraphics const&               blockGraphics,
        ::mce::TexturePtr const&             texture,
        float                                lightMultiplier,
        float                                alphaMultiplier,
        ::OffscreenCaptureDescription const& capture
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

    MCAPI bool tessellateBambooBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

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
        float const            diameter,
        float const            sideVariantOffset,
        float const            verticalPortion
    );

    MCAPI bool tessellateBeaconInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateBellBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI void tessellateBellBlockStandingLegInWorld(
        ::Tessellator&         tessellator,
        ::Block const&         block,
        ::BlockPos const&      pos,
        ::BlockGraphics const& blockGraphics,
        bool const             rotate
    );

    MCAPI bool tessellateBigDripleafBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateBlockInWorld(
        ::Tessellator&                 tessellator,
        ::Block const&                 block,
        ::BlockPos const&              pos,
        ::std::bitset<6> const         faces,
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

    MCAPI bool tessellateCandleCakeInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

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

    MCAPI bool tessellateCommandBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateComparatorInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateComposterBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI void tessellateCompoundCreatorFace(
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

    MCAPI bool tessellateCoralFanHangInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateCoralFanInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateCrossInWorld(
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

    MCAPI void tessellateCrossTextureUp(
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

    MCAPI bool tessellateDiodeInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateDoorInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateDoublePlantInWorld(
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
    tessellateEndRodGui(::Tessellator& tessellator, ::Block const& block, ::BlockGraphics const& blockGraphics);

    MCAPI bool tessellateEndRodInWorld(::Tessellator& tessellator, ::Block const& b, ::BlockPos const& p);

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
        float const                     u0,
        float const                     v0,
        float const                     u1,
        float const                     v1,
        int const                       face
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
        float const    height,
        ::Vec3 const   offset
    );

    MCAPI bool tessellateIndividualSeaPickleInWorld(
        ::Tessellator& tessellator,
        ::Block const& block,
        ::Vec3 const&  p,
        double const   height,
        ::Vec3 const   offset
    );

    MCAPI bool tessellateIndividualTurtleEggInWorld(
        ::Tessellator& tessellator,
        ::Block const& block,
        ::Vec3 const&  p,
        ::Vec3 const   from,
        ::Vec3 const   to,
        int const      eggNum
    );

    MCAPI bool tessellateItemFrameInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& pos,
        bool const        ignoreLighting
    );

    MCAPI bool tessellateKelpInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateLadderInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateLanternBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateLecternBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateLeverInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI void
    tessellateLightningRodGui(::Tessellator& tessellator, ::Block const& block, ::BlockGraphics const& blockGraphics);

    MCAPI bool tessellateLightningRodInWorld(::Tessellator& tessellator, ::Block const& b, ::BlockPos const& p);

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

    MCAPI bool tessellatePistonInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellatePitcherCropInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellatePitcherPlantInWorld(
        ::Tessellator&      tessellator,
        ::Block const&      block,
        ::BlockShape const& blockShape,
        ::BlockPos const&   p
    );

    MCAPI bool tessellatePointedDripstoneInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateRailInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateRepeaterInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateRowInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        bool const        forceDoubleSide
    );

    MCAPI void tessellateRowTexture(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::BlockPos const&               p,
        ::TextureUVCoordinateSet const& tex,
        float                           x,
        float                           y,
        float                           z,
        bool const                      forceDoubleSide
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
        bool const                      isSupportPole
    );

    MCAPI void tessellateScaffoldingVerticalPoleInWorld(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::TextureUVCoordinateSet const& tex,
        ::BlockPos const&               pos,
        ::Flip const                    flip
    );

    MCAPI bool tessellateSculkSensorBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateSculkShriekerInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateSeaPickleInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateSeagrassInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateShelfBlockInGui(::Tessellator& tessellator, ::Block const& block);

    MCAPI bool tessellateShelfBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI void tessellateSimpleBlockInWorld(
        ::Tessellator&                 tessellator,
        ::Block const&                 block,
        ::BlockPos const&              pos,
        ::AirAndSimpleBlockBits const& airAndSimpleBlocks
    );

    MCAPI bool tessellateSlimeBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool
    tessellateSmallDripleafBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI void tessellateSouth(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& intex
    );

    MCAPI bool tessellateSporeBlossomInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateStairsInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

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

    MCAPI bool
    tessellateSweetBerryBushBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateTerracottaInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateTopSnowInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

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

    MCAPI bool tessellateTreeInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateTripwireHookInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateTripwireInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateTurtleEggInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateTwistingVinesInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateVaultInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

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
