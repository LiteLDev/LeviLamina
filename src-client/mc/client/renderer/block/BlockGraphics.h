#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/texture/IsotropicFaceData.h"
#include "mc/common/WeakPtr.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockShape.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class Experiments;
class HashedString;
class LoadedResourceData;
class ResourcePackManager;
class SemVersion;
class TextureAtlasItem;
class Vec3;
struct AtlasItemManager;
struct TextureItem;
struct TextureUVCoordinateSet;
namespace Bedrock::Threading { class Mutex; }
namespace BlockGeometry { struct Model; }
namespace BlockTessellationFallbackUtils { struct TessellationConfigInfo; }
namespace Json { class Value; }
namespace Json { class ValueIterator; }
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
    // prevent constructor by default
    BlockGraphics();

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
    MCAPI explicit BlockGraphics(::std::string const& nameId);

    MCAPI void _logBlockTextureError(::fmt::v11::fstring<char const*> const& error) const;

    MCFOLD ::BlockRenderLayer getRenderLayer() const;

    MCAPI ::TextureUVCoordinateSet const& getTexture(uint64 textureSlot, ::Block const& block) const;

    MCAPI ::TextureUVCoordinateSet const& getTexture(uint64 textureSlot, int blockVariant) const;

    MCAPI ::TextureUVCoordinateSet const& getTexture(::BlockPos const& p, uint64 textureSlot, int blockVariant) const;

    MCAPI ::TextureUVCoordinateSet const&
    getTexture(::BlockPos const& pos, uint64 textureSlot, ::Block const& block) const;

    MCAPI ::std::vector<::TextureUVCoordinateSet> const&
    getTextureCarriedVariations(uint64 textureSlot, int blockVariant) const;

    MCAPI ::std::vector<::TextureUVCoordinateSet> const&
    getTextureDefaultVariations(uint64 textureSlot, int blockVariant) const;

    MCAPI bool isFull() const;

    MCAPI bool isFullAndOpaque() const;

    MCAPI ::BlockGraphics& setCarriedTextureItem(
        ::std::string const& nameUp,
        ::std::string const& nameDown,
        ::std::string const& nameNorth,
        ::std::string const& nameSouth,
        ::std::string const& nameWest,
        ::std::string const& nameEast
    );

    MCAPI void setDefaultCarriedTextures();

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
    MCAPI static void _extractComplexAliasBlockData(
        ::HashedString const&                                               blockName,
        ::Json::Value const&                                                member,
        ::std::unordered_map<::HashedString, ::std::vector<::Json::Value>>& output,
        ::std::vector<::WeakPtr<::BlockType>>&                              blockTypes
    );

    MCAPI static void _initBlockModels(::ResourcePackManager& packManager);

    MCAPI static ::BlockGraphics* createBlockGraphics(::HashedString const& name, ::BlockShape defaultBlockShape);

    MCAPI static void detectAndRegisterTessellationFallbacks(
        ::std::unordered_map<::HashedString, ::BlockTessellationFallbackUtils::TessellationConfigInfo>&
            blockTessellationInfoMap
    );

    MCAPI static ::std::vector<::WeakPtr<::BlockType>> extractBlockDataValues(
        ::Json::ValueIterator const&                                        memberIterator,
        ::std::unordered_map<::HashedString, ::std::vector<::Json::Value>>& output,
        ::SemVersion const&                                                 formatVersion
    );

    MCAPI static void extractBlockDataValuesFromFileContents(
        ::Experiments const&                                                experiments,
        ::std::vector<::LoadedResourceData> const&                          contents,
        ::std::unordered_map<::HashedString, ::std::vector<::Json::Value>>& blockDataValuesMap,
        ::std::unordered_map<::HashedString, ::BlockTessellationFallbackUtils::TessellationConfigInfo>&
            blockTessellationInfoMap
    );

    MCAPI static ::BlockGraphics const* getForBlock(::Block const& block);

    MCAPI static ::TextureAtlasItem const& getTextureItem(
        ::std::string const&                                     name,
        ::std::weak_ptr<::AtlasItemManager>                      terrainTextureAtlas,
        ::std::unordered_map<::std::string, ::TextureAtlasItem>& complexTextureItems
    );

    MCAPI static ::TextureUVCoordinateSet
    getTextureUVCoordinateSet(::std::string const& name, int blockVariant, int textureVariant);

    MCAPI static bool hasOldTessellationFallback(::Block const& block);

    MCAPI static void initBlocks(::ResourcePackManager& packManager, ::Experiments const& experiments);

    MCAPI static bool isFullAndOpaque(::Block const& block);

    MCAPI static ::SemVersion loadBlockDataFormatVersion(::Json::Value const& root);

    MCAPI static ::BlockGraphics& registerBlockGraphics(
        ::std::unordered_map<::HashedString, ::std::vector<::Json::Value>>& blockDataValuesMap,
        ::HashedString const&                                               name,
        ::BlockShape                                                        defaultBlockShape
    );

    MCAPI static void
    registerLooseBlockGraphics(::std::unordered_map<::HashedString, ::std::vector<::Json::Value>>& blockDataValuesMap);

    MCAPI static bool setBlockShape(::BlockGraphics& block, ::Json::Value const& blockShapeData);

    MCAPI static bool setCarriedTextures(::BlockGraphics& block, ::Json::Value const& textureData);

    MCAPI static bool setTextures(::BlockGraphics& block, ::Json::Value const& textureData);

    MCAPI static void teardownBlocks();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& NORMAL_SOUND();

    MCAPI static ::std::unordered_map<::std::string, ::BlockGraphics*>& mBlockLookupMap();

    MCAPI static ::Bedrock::Threading::Mutex& mBlockModelAccess();

    MCAPI static ::std::unordered_map<uint, ::BlockGraphics*>& mBlocks();

    MCAPI static ::std::unique_ptr<::BlockGraphics>& mDummyBlock();

    MCAPI static bool& mInitialized();

    MCAPI static ::std::map<::std::string, ::std::unique_ptr<::BlockGeometry::Model>>& mModels();

    MCAPI static ::std::vector<::std::unique_ptr<::BlockGraphics>>& mOwnedBlocks();

    MCAPI static ::std::weak_ptr<::AtlasItemManager>& mTerrainTextureAtlas();

    MCAPI static ::std::unordered_set<uint>& mVanillaBlocksWithFallbackToOldTessellation();

    MCAPI static ::std::unordered_map<::std::string, ::TextureAtlasItem>& sComplexTextureItems();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::BlockRenderLayer $getRenderLayer(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD int $getColor(int auxData) const;

    MCFOLD int $getColor(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $isSeasonTinted(::BlockSource& region, ::BlockPos const& p) const;

    MCAPI void $onGraphicsModeChanged(bool fancy, bool fancyBubbles);

    MCFOLD int $getExtraRenderLayers();

    MCAPI ::TextureUVCoordinateSet const& $getCarriedTexture(uint64 textureSlot, int blockVariant) const;

    MCAPI void $setVisualShape(::AABB const& shape);

    MCAPI void $setVisualShape(::Vec3 const& min, ::Vec3 const& max);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
