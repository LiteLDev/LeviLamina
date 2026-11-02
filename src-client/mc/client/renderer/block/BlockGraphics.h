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
class LoadedResourceData;
class ResourcePackManager;
class TextureAtlasItem;
class Vec3;
struct TextureItem;
struct TextureUVCoordinateSet;
namespace BlockGeometry { struct Model; }
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
    ::ll::TypedStorage<8, 8, ::Block const*>                  mBlock;
    ::ll::TypedStorage<4, 4, ::BlockShape>                    mBlockShape;
    ::ll::TypedStorage<4, 4, float>                           mAmbientOcclusionExponent;
    ::ll::TypedStorage<1, 1, bool>                            mFancy;
    ::ll::TypedStorage<1, 1, bool>                            mAllowSame;
    ::ll::TypedStorage<1, 1, ::BlockRenderLayer>              mRenderLayer;
    ::ll::TypedStorage<1, 1, ::IsotropicFaceData>             mIsotropicFaceData;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mSoundType;
    ::ll::TypedStorage<4, 24, ::AABB>                         mVisualShape;
    ::ll::TypedStorage<8, 24, ::std::vector<::TextureItem>>   mTextureItems;
    ::ll::TypedStorage<8, 8, uint64>                          mIconTextureIndex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockGraphics() = default;

    virtual ::BlockRenderLayer getRenderLayer(::BlockSource& region, ::BlockPos const& pos) const;

    virtual int getColor(int auxData) const;

    virtual int getColor(::BlockSource& region, ::BlockPos const& pos) const;

    virtual bool isSeasonTinted(::BlockSource& region, ::BlockPos const& p) const;

    virtual void onGraphicsModeChanged(bool fancy, bool fancyBubbles);

    virtual int getExtraRenderLayers();

    virtual ::TextureUVCoordinateSet const& getCarriedTexture(uint64 textureSlot, int blockVariant) const;

    virtual void setVisualShape(::AABB const& shape);

    virtual void setVisualShape(::Vec3 const& min, ::Vec3 const& max);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _logBlockTextureError(::fmt::v11::fstring<char const*> const& error) const;

    MCNAPI ::std::string const getDefaultTextureName(uint64 textureSlot) const;

    MCNAPI ::BlockRenderLayer getRenderLayer() const;

    MCAPI ::TextureUVCoordinateSet const& getTexture(uint64 textureSlot, int blockVariant) const;

    MCAPI ::TextureUVCoordinateSet const& getTexture(::BlockPos const& p, uint64 textureSlot, int blockVariant) const;

    MCNAPI bool isFullAndOpaque() const;

    MCAPI ::BlockGraphics& setCarriedTextureItem(
        ::std::string const& nameUp,
        ::std::string const& nameDown,
        ::std::string const& nameNorth,
        ::std::string const& nameSouth,
        ::std::string const& nameWest,
        ::std::string const& nameEast
    );

    MCNAPI void setDefaultCarriedTextures();

    MCAPI ::BlockGraphics& setTextureItem(
        ::std::string const& nameUp,
        ::std::string const& nameDown,
        ::std::string const& nameNorth,
        ::std::string const& nameSouth,
        ::std::string const& nameWest,
        ::std::string const& nameEast
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _initBlockModels(::ResourcePackManager& packManager);

    MCNAPI static ::BlockGraphics* createBlockGraphics(::HashedString const& name, ::BlockShape defaultBlockShape);

    MCNAPI static void extractBlockDataValuesFromFileContents(
        ::Experiments const&                                                experiments,
        ::std::vector<::LoadedResourceData> const&                          contents,
        ::std::unordered_map<::HashedString, ::std::vector<::Json::Value>>& blockDataValuesMap,
        ::std::unordered_map<::HashedString, ::BlockTessellationFallbackUtils::TessellationConfigInfo>&
            blockTessellationInfoMap
    );

    MCAPI static ::BlockGraphics const* getForBlock(::Block const& block);

    MCNAPI static ::TextureAtlasItem const& getTextureItem(
        ::std::string const&                                     name,
        ::std::weak_ptr<::AtlasItemManager>                      terrainTextureAtlas,
        ::std::unordered_map<::std::string, ::TextureAtlasItem>& complexTextureItems
    );

    MCAPI static ::TextureUVCoordinateSet
    getTextureUVCoordinateSet(::std::string const& name, int blockVariant, int textureVariant);

    MCAPI static void initBlocks(::ResourcePackManager& packManager, ::Experiments const& experiments);

    MCAPI static bool isFullAndOpaque(::Block const& block);

    MCAPI static ::BlockGraphics& registerBlockGraphics(
        ::std::unordered_map<::HashedString, ::std::vector<::Json::Value>>& blockDataValuesMap,
        ::HashedString const&                                               name,
        ::BlockShape                                                        defaultBlockShape
    );

    MCAPI static void reloadBlockTextures(::ResourcePackManager& packManager, ::Experiments const& experiments);

    MCNAPI static void teardownBlocks();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::unordered_map<::std::string, ::BlockGraphics*>& mBlockLookupMap();

    MCNAPI static ::std::mutex& mBlockModelAccess();

    MCNAPI static ::std::unordered_map<uint, ::BlockGraphics*>& mBlocks();

    MCNAPI static ::std::unique_ptr<::BlockGraphics>& mDummyBlock();

    MCNAPI static bool& mInitialized();

    MCNAPI static ::std::map<::std::string, ::std::unique_ptr<::BlockGeometry::Model>>& mModels();

    MCNAPI static ::std::vector<::std::unique_ptr<::BlockGraphics>>& mOwnedBlocks();

    MCNAPI static ::std::weak_ptr<::AtlasItemManager>& mTerrainTextureAtlas();

    MCNAPI static ::std::unordered_set<uint>& mVanillaBlocksWithFallbackToOldTessellation();

    MCNAPI static ::std::unordered_map<::std::string, ::TextureAtlasItem>& sComplexTextureItems();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockRenderLayer $getRenderLayer(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI int $getColor(int auxData) const;

    MCNAPI int $getColor(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $isSeasonTinted(::BlockSource& region, ::BlockPos const& p) const;

    MCNAPI void $onGraphicsModeChanged(bool fancy, bool fancyBubbles);

    MCNAPI int $getExtraRenderLayers();

    MCNAPI ::TextureUVCoordinateSet const& $getCarriedTexture(uint64 textureSlot, int blockVariant) const;

    MCNAPI void $setVisualShape(::AABB const& shape);

    MCNAPI void $setVisualShape(::Vec3 const& min, ::Vec3 const& max);
    // NOLINTEND
};
