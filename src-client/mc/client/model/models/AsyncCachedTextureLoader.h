#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
namespace mce { class TextureGroup; }
// clang-format on

class AsyncCachedTextureLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 336> mUnk142505;
    ::ll::UntypedStorage<8, 16>  mUnk8fde86;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncCachedTextureLoader& operator=(AsyncCachedTextureLoader const&);
    AsyncCachedTextureLoader(AsyncCachedTextureLoader const&);
    AsyncCachedTextureLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cg::ImageBuffer*
    getCachedImageOrLoadAsync(::ResourceLocation const& imageToLoad, ::mce::TextureGroup& textureGroup);

    MCNAPI ~AsyncCachedTextureLoader();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
