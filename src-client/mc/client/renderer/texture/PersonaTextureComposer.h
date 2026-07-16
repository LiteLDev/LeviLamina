#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AnimatedTextureContainer;
class IImageCache;
namespace mce { class TextureGroup; }
namespace persona { struct TextureTint; }
namespace persona { struct TextureTintCollection; }
// clang-format on

class PersonaTextureComposer {
public:
    // static functions
    // NOLINTBEGIN
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
