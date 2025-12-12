#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class Experiments;
class HashedString;
class LoadedResourceData;
class ResourcePackManager;
class SemVersion;
class Vec3;
struct TextureUVCoordinateSet;
namespace Bedrock::Threading { class Mutex; }
namespace Json { class Value; }
namespace Json { class ValueIterator; }
class TextureAtlasItem;
struct AtlasItemManager;
namespace BlockGeometry { struct Model; }
namespace BlockTessellationFallbackUtils { struct TessellationConfigInfo; }
// clang-format on

class BlockGraphics {
public:
    // BlockGraphics inner types declare
    // clang-format off
    struct ConstructorToken;
    // clang-format on

    // BlockGraphics inner types define
    struct ConstructorToken {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk6b9406;
    ::ll::UntypedStorage<4, 4>  mUnkf361c7;
    ::ll::UntypedStorage<4, 4>  mUnkb40d00;
    ::ll::UntypedStorage<1, 1>  mUnk56f9b4;
    ::ll::UntypedStorage<1, 1>  mUnk3736cf;
    ::ll::UntypedStorage<1, 1>  mUnkb0552c;
    ::ll::UntypedStorage<1, 1>  mUnk341d8f;
    ::ll::UntypedStorage<8, 32> mUnk232607;
    ::ll::UntypedStorage<4, 24> mUnkbcd0bf;
    ::ll::UntypedStorage<8, 24> mUnkbe394e;
    ::ll::UntypedStorage<8, 8>  mUnk24c02c;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockGraphics& operator=(BlockGraphics const&);
    BlockGraphics(BlockGraphics const&);
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
    MCNAPI_C explicit BlockGraphics(::std::string const& nameId);

    MCNAPI_C void _logBlockTextureError(::fmt::v11::fstring<char const*> const& error) const;

    MCNAPI_C ::BlockRenderLayer getRenderLayer() const;

    MCNAPI_C ::TextureUVCoordinateSet const& getTexture(uint64 textureSlot, ::Block const& block) const;

    MCNAPI_C ::TextureUVCoordinateSet const& getTexture(uint64 textureSlot, int blockVariant) const;

    MCNAPI_C ::TextureUVCoordinateSet const&
    getTexture(::BlockPos const& p, uint64 textureSlot, int blockVariant) const;

    MCNAPI_C ::TextureUVCoordinateSet const&
    getTexture(::BlockPos const& pos, uint64 textureSlot, ::Block const& block) const;

    MCNAPI_C ::std::vector<::TextureUVCoordinateSet> const&
    getTextureCarriedVariations(uint64 textureSlot, int blockVariant) const;

    MCNAPI_C ::std::vector<::TextureUVCoordinateSet> const&
    getTextureDefaultVariations(uint64 textureSlot, int blockVariant) const;

    MCNAPI_C bool isFull() const;

    MCNAPI_C bool isFullAndOpaque() const;

    MCNAPI_C ::BlockGraphics& setCarriedTextureItem(
        ::std::string const& nameUp,
        ::std::string const& nameDown,
        ::std::string const& nameNorth,
        ::std::string const& nameSouth,
        ::std::string const& nameWest,
        ::std::string const& nameEast
    );

    MCNAPI_C void setDefaultCarriedTextures();

    MCNAPI_C ::BlockGraphics& setTextureItem(
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
    MCNAPI_C static void _extractComplexAliasBlockData(
        ::HashedString const&                                               blockName,
        ::Json::Value const&                                                member,
        ::std::unordered_map<::HashedString, ::std::vector<::Json::Value>>& output,
        ::std::vector<::WeakPtr<::BlockType>>&                              blockTypes
    );

    MCNAPI_C static void _initBlockModels(::ResourcePackManager& packManager);

    MCNAPI_C static ::TextureUVCoordinateSet const&
    chooseRandomTexture(float random, ::std::vector<::TextureUVCoordinateSet> const& uvsets);

    MCNAPI_C static ::BlockGraphics* createBlockGraphics(::HashedString const& name, ::BlockShape defaultBlockShape);

    MCNAPI_C static void detectAndRegisterTessellationFallbacks(
        ::std::unordered_map<::HashedString, ::BlockTessellationFallbackUtils::TessellationConfigInfo>&
            blockTessellationInfoMap
    );

    MCNAPI_C static ::std::vector<::WeakPtr<::BlockType>> extractBlockDataValues(
        ::Json::ValueIterator const&                                        memberIterator,
        ::std::unordered_map<::HashedString, ::std::vector<::Json::Value>>& output,
        ::SemVersion const&                                                 formatVersion
    );

    MCNAPI_C static void extractBlockDataValuesFromFileContents(
        ::Experiments const&                                                experiments,
        ::std::vector<::LoadedResourceData> const&                          contents,
        ::std::unordered_map<::HashedString, ::std::vector<::Json::Value>>& blockDataValuesMap,
        ::std::unordered_map<::HashedString, ::BlockTessellationFallbackUtils::TessellationConfigInfo>&
            blockTessellationInfoMap
    );

    MCNAPI_C static ::BlockGraphics const* getForBlock(::Block const& block);

    MCNAPI_C static ::TextureAtlasItem const& getTextureItem(
        ::std::string const&                                     name,
        ::std::weak_ptr<::AtlasItemManager>                      terrainTextureAtlas,
        ::std::unordered_map<::std::string, ::TextureAtlasItem>& complexTextureItems
    );

    MCNAPI_C static ::TextureUVCoordinateSet
    getTextureUVCoordinateSet(::std::string const& name, int blockVariant, int textureVariant);

    MCNAPI_C static bool hasOldTessellationFallback(::Block const& block);

    MCNAPI_C static void initBlocks(::ResourcePackManager& packManager, ::Experiments const& experiments);

    MCNAPI_C static bool isFullAndOpaque(::Block const& block);

    MCNAPI_C static ::SemVersion loadBlockDataFormatVersion(::Json::Value const& root);

    MCNAPI_C static ::BlockGraphics& registerBlockGraphics(
        ::std::unordered_map<::HashedString, ::std::vector<::Json::Value>>& blockDataValuesMap,
        ::HashedString const&                                               name,
        ::BlockShape                                                        defaultBlockShape
    );

    MCNAPI_C static void
    registerLooseBlockGraphics(::std::unordered_map<::HashedString, ::std::vector<::Json::Value>>& blockDataValuesMap);

    MCNAPI_C static bool setBlockShape(::BlockGraphics& block, ::Json::Value const& blockShapeData);

    MCNAPI_C static bool setCarriedTextures(::BlockGraphics& block, ::Json::Value const& textureData);

    MCNAPI_C static bool setTextures(::BlockGraphics& block, ::Json::Value const& textureData);

    MCNAPI_C static void teardownBlocks();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::std::string const& NORMAL_SOUND();

    MCNAPI_C static ::std::unordered_map<::std::string, ::BlockGraphics*>& mBlockLookupMap();

    MCNAPI_C static ::Bedrock::Threading::Mutex& mBlockModelAccess();

    MCNAPI_C static ::std::unordered_map<uint, ::BlockGraphics*>& mBlocks();

    MCNAPI_C static ::std::unique_ptr<::BlockGraphics>& mDummyBlock();

    MCNAPI_C static bool& mInitialized();

    MCNAPI_C static ::std::map<::std::string, ::std::unique_ptr<::BlockGeometry::Model>>& mModels();

    MCNAPI_C static ::std::vector<::std::unique_ptr<::BlockGraphics>>& mOwnedBlocks();

    MCNAPI_C static ::std::weak_ptr<::AtlasItemManager>& mTerrainTextureAtlas();

    MCNAPI_C static ::std::unordered_set<uint>& mVanillaBlocksWithFallbackToOldTessellation();

    MCNAPI_C static ::std::unordered_map<::std::string, ::TextureAtlasItem>& sComplexTextureItems();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::string const& nameId);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::BlockRenderLayer $getRenderLayer(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI int $getColor(int auxData) const;

    MCNAPI int $getColor(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $isSeasonTinted(::BlockSource& region, ::BlockPos const& p) const;

    MCNAPI void $onGraphicsModeChanged(bool fancy, bool fancyBubbles);

    MCNAPI int $getExtraRenderLayers();

    MCNAPI ::TextureUVCoordinateSet const& $getCarriedTexture(uint64 textureSlot, int blockVariant) const;

    MCNAPI void $setVisualShape(::AABB const& shape);

    MCNAPI void $setVisualShape(::Vec3 const& min, ::Vec3 const& max);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
