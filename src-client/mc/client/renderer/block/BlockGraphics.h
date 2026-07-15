#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/texture/IsotropicFaceData.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockShape.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class AtlasItemManager;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class HashedString;
class ResourcePackManager;
class Vec3;
struct TextureItem;
struct TextureUVCoordinateSet;
namespace BlockTessellationFallbackUtils { struct TessellationConfigInfo; }
namespace Json { class Value; }
// clang-format on

class BlockGraphics {
public:
    // BlockGraphics inner types declare
    // clang-format off
    struct ConstructorToken;
    // clang-format on

    // BlockGraphics inner types define
    struct ConstructorToken {};

    using BlockDataValuesMap = ::std::unordered_map<::HashedString, ::std::vector<::Json::Value>>;

    using BlockTessellationInfoMap =
        ::std::unordered_map<::HashedString, ::BlockTessellationFallbackUtils::TessellationConfigInfo>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*>                mBlock;
    ::ll::TypedStorage<4, 4, ::BlockShape>                  mBlockShape;
    ::ll::TypedStorage<4, 4, float>                         mAmbientOcclusionExponent;
    ::ll::TypedStorage<1, 1, bool>                          mFancy;
    ::ll::TypedStorage<1, 1, bool>                          mAllowSame;
    ::ll::TypedStorage<1, 1, ::BlockRenderLayer>            mRenderLayer;
    ::ll::TypedStorage<1, 1, ::IsotropicFaceData>           mIsotropicFaceData;
    ::ll::TypedStorage<8, 32, ::std::string>                mSoundType;
    ::ll::TypedStorage<4, 24, ::AABB>                       mVisualShape;
    ::ll::TypedStorage<8, 24, ::std::vector<::TextureItem>> mTextureItems;
    ::ll::TypedStorage<8, 8, uint64>                        mIconTextureIndex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockGraphics() = default;

    virtual ::BlockRenderLayer getRenderLayer(::BlockSource&, ::BlockPos const&) const;

    virtual int getColor(int) const;

    virtual int getColor(::BlockSource&, ::BlockPos const&) const;

    virtual bool isSeasonTinted(::BlockSource&, ::BlockPos const&) const;

    virtual void onGraphicsModeChanged(bool, bool);

    virtual int getExtraRenderLayers();

    virtual ::TextureUVCoordinateSet const& getCarriedTexture(uint64, int) const;

    virtual void setVisualShape(::AABB const&);

    virtual void setVisualShape(::Vec3 const&, ::Vec3 const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _logBlockTextureError(::fmt::v11::fstring<char const*> const& error) const;

    MCAPI ::std::string const getDefaultTextureName(uint64 textureSlot) const;

    MCAPI ::TextureUVCoordinateSet const& getTexture(uint64 textureSlot, int blockVariant) const;

    MCAPI bool isFull() const;

    MCAPI bool isFullAndOpaque() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BlockGraphics const* getForBlock(::Block const& block);

    MCAPI static ::TextureUVCoordinateSet
    getTextureUVCoordinateSet(::std::string const& name, int blockVariant, int textureVariant);

    MCAPI static void initBlocks(::ResourcePackManager& packManager, ::Experiments const& experiments);

    MCAPI static bool isFullAndOpaque(::Block const& block);

    MCAPI static void teardownBlocks();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& NORMAL_SOUND();

    MCAPI static ::std::unordered_map<uint, ::BlockGraphics*>& mBlocks();

    MCAPI static ::std::unique_ptr<::BlockGraphics>& mDummyBlock();

    MCAPI static bool& mInitialized();

    MCAPI static ::std::weak_ptr<::AtlasItemManager>& mTerrainTextureAtlas();

    MCAPI static ::std::unordered_set<uint>& mVanillaBlocksWithFallbackToOldTessellation();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
