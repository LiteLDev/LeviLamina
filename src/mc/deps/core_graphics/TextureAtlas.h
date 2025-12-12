#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/MipMapSupport.h"

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
    ::ll::UntypedStorage<8, 24> mUnkf286cc;
    ::ll::UntypedStorage<8, 24> mUnk53586f;
    ::ll::UntypedStorage<4, 24> mUnk11415f;
    ::ll::UntypedStorage<4, 4>  mUnk3c2d00;
    ::ll::UntypedStorage<4, 4>  mUnkb52aed;
    ::ll::UntypedStorage<8, 8>  mUnk35500e;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureAtlas& operator=(TextureAtlas const&);
    TextureAtlas(TextureAtlas const&);
    TextureAtlas();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void _allocateTexture();

    MCNAPI_C bool _tryCreateAtlasUnderMax(::std::vector<::cg::AtlasCreationTile> const& inTiles, uint maxArea);

    MCNAPI_C void createAtlasForTiles(
        ::std::vector<::cg::AtlasCreationTile> const& inTiles,
        uint                                          maxArea,
        uint                                          padSize,
        ::cg::MipMapSupport                           mipMapSupport,
        uint                                          maxMips
    );

    MCNAPI_C void updateTextureAtUVs(
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

    MCNAPI_C ~TextureAtlas();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void _readTexture(
        ::glm::vec<4, uchar>&    color,
        ::glm::vec2 const&       uv,
        ::cg::ImageBuffer const& textureData,
        uint                     textureDataStride,
        ::glm::ivec2 const&      maxDimensions
    );

    MCNAPI_C static bool _tryCreateUVs(
        ::std::vector<::cg::AtlasCreationTile> const& inTiles,
        uint                                          width,
        uint                                          height,
        uint                                          padSize,
        ::std::vector<::cg::TextureAtlasTileUVs>&     outTileUvs,
        uint&                                         outMaxWidth,
        uint&                                         outMaxHeight
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace cg
