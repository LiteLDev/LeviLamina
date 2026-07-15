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
#include "mc/deps/minecraft_renderer/framebuilder/FrameLightingModelCapabilities.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/world/Flip.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockShape.h"
#include "mc/world/level/block/BrightnessPair.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockGraphics;
class BlockSource;
class BlockType;
class LightTexture;
class ScreenContext;
class Tessellator;
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

    MCAPI void appendTessellatedBlock(::Tessellator& tessellator, ::Block const& block);

    MCAPI void clearBlockCache();

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

    MCAPI void renderGuiBlock(
        ::ScreenContext&                     screenContext,
        ::Block const&                       block,
        ::BlockGraphics const&               blockGraphics,
        ::mce::TexturePtr const&             texture,
        float                                lightMultiplier,
        float                                alphaMultiplier,
        ::OffscreenCaptureDescription const& capture
    );

    MCAPI void setRegion(::BlockSource& region);

    MCAPI bool
    tessellateInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos, bool useCalcWithCache);

    MCAPI void tessellateSimpleBlockInWorld(
        ::Tessellator&                 tessellator,
        ::Block const&                 block,
        ::BlockPos const&              pos,
        ::AirAndSimpleBlockBits const& airAndSimpleBlocks
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
