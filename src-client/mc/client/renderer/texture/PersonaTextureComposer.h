#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/AnimatedTextureType.h"

// auto generated forward declare list
// clang-format off
class AnimatedTextureContainer;
class PackAccessStrategy;
struct IImageCache;
struct TextureUVCoordinateSet;
namespace cg { class ImageBuffer; }
namespace mce { class TextureGroup; }
namespace persona { struct TextureTint; }
namespace persona { struct TextureTintCollection; }
// clang-format on

class PersonaTextureComposer {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::persona::AnimatedTextureType
    _findMatchingAnimatedTextureType(bool isFace, uint width, uint height, int frames);

    MCNAPI static bool _findMatchingTextureSet(
        ::std::vector<::AnimatedTextureContainer>& animatedTextures,
        ::persona::TextureTintCollection&          textureCollection
    );

    MCNAPI static int _findOrCreateAnimatedTextureComposer(
        ::std::vector<::AnimatedTextureContainer>& animatedTextures,
        ::std::string const&                       skinName,
        bool                                       isFace,
        uint                                       width,
        uint                                       height,
        int                                        frames
    );

    MCNAPI static ::cg::ImageBuffer const* _loadImage(
        ::PackAccessStrategy const& strategy,
        ::std::string const&        path,
        ::std::string const&        uniquePath,
        ::IImageCache&              textureGroup
    );

    MCNAPI static ::cg::ImageBuffer const* _loadImage(
        ::PackAccessStrategy const& strategy,
        ::std::string const&        path,
        ::std::string const&        uniquePath,
        ::mce::TextureGroup&        textureGroup
    );

    MCNAPI static void _readTextureIntoAtlas(
        ::cg::ImageBuffer&            atlasImage,
        ::persona::TextureTint const& textureTint,
        ::cg::ImageBuffer const&      sourceImage,
        ::cg::ImageBuffer const*      srcTintMapImage,
        ::cg::ImageBuffer const*      srcClothingLayerMapImage,
        ::TextureUVCoordinateSet&     uvs,
        ::glm::ivec2 const*           maxDimensionsSlice
    );

    MCNAPI static ::std::shared_ptr<::persona::TextureTint> buildAdditiveTexture(
        ::std::string const&                    characterName,
        ::mce::TextureGroup&                    textureGroup,
        ::persona::TextureTintCollection const& textureTintCollection
    );

    MCNAPI static ::std::vector<::AnimatedTextureContainer> buildAnimatedTexture(
        ::std::string const&                                    skinName,
        ::std::vector<::persona::TextureTintCollection*> const& textureCollections,
        ::IImageCache&                                          imageCache
    );
    // NOLINTEND
};
