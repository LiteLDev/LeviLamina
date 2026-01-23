#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/MipMapSupport.h"
#include "mc/deps/core_graphics/TextureDescription.h"

// auto generated forward declare list
// clang-format off
class TintMapColor;
namespace cg { class ImageBuffer; }
namespace cg { struct AtlasCreationTile; }
namespace cg { struct TextureAtlasTileUVs; }
namespace mce { class Color; }
// clang-format on

namespace cg {

class TextureAtlas {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::cg::ImageBuffer>>         mAtlasMipStorage;
    ::ll::TypedStorage<8, 24, ::std::vector<::cg::TextureAtlasTileUVs>> mTileUVs;
    ::ll::TypedStorage<4, 24, ::cg::TextureDescription>                 mAtlasTextureDescription;
    ::ll::TypedStorage<4, 4, uint>                                      mPadSize;
    ::ll::TypedStorage<4, 4, uint>                                      mReductionMips;
    ::ll::TypedStorage<8, 8, uint64>                                    mStorageAllocated;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C void _allocateTexture();

    MCAPI_C bool _tryCreateAtlasUnderMax(::std::vector<::cg::AtlasCreationTile> const& inTiles, uint maxArea);

    MCAPI_C void createAtlasForTiles(
        ::std::vector<::cg::AtlasCreationTile> const& inTiles,
        uint                                          maxArea,
        uint                                          padSize,
        ::cg::MipMapSupport                           mipMapSupport,
        uint                                          maxMips
    );

    MCAPI_C void updateTextureAtUVs(
        ::cg::TextureAtlasTileUVs const& inUVs,
        ::cg::ImageBuffer const* const   srcImage,
        uint                             mipLevel,
        ::mce::Color const&              defaultColor,
        bool                             isQuad,
        bool                             isAdditive,
        bool                             applyTint,
        ::cg::ImageBuffer const* const   srcImageTint,
        bool                             multiChannelTint,
        ::TintMapColor const&            multiChannelTintBaseColor,
        ::TintMapColor const&            multiChannelTintColor,
        ::mce::Color const&              singleChannelTintColor,
        bool                             applyOverlay,
        ::mce::Color const&              overlayColor,
        bool                             fadeMip,
        float                            fadeMipAmount,
        ::mce::Color const&              fadeMipColor
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static void _readTexture(
        ::glm::vec<4, uchar>&    color,
        ::glm::vec2 const&       uv,
        ::cg::ImageBuffer const& textureData,
        uint                     textureDataStride,
        ::glm::ivec2 const&      maxDimensions
    );

    MCAPI_C static bool _tryCreateUVs(
        ::std::vector<::cg::AtlasCreationTile> const& inTiles,
        uint                                          width,
        uint                                          height,
        uint                                          padSize,
        ::std::vector<::cg::TextureAtlasTileUVs>&     outTileUvs,
        uint&                                         outMaxWidth,
        uint&                                         outMaxHeight
    );
    // NOLINTEND
};

} // namespace cg
