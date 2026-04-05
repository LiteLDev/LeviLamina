#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/image/ImageFormat.h"
#include "mc/external/render_dragon/texture_streaming/texture_cache/TextureCache.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace cg { class ImageResource; }
namespace dragon::texturestreaming { struct DragonTextureCacheContext; }
// clang-format on

namespace mce {

class ImageResourceLoader {
public:
    // ImageResourceLoader inner types define
    enum class LoadError : int {
        TextureConversionError = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5447ee;
    ::ll::UntypedStorage<8, 16> mUnk9cf0a7;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageResourceLoader& operator=(ImageResourceLoader const&);
    ImageResourceLoader(ImageResourceLoader const&);
    ImageResourceLoader();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::nonstd::expected<::std::shared_ptr<::cg::ImageResource>, ::std::error_condition>
    loadImageResourceFromMemory(
        ::ResourceLocation const& resourceLocation,
        ::std::string const&      fileContents,
        bool                      tryStreamed
    );

    MCNAPI ::nonstd::expected<::std::shared_ptr<::cg::ImageResource>, ::std::error_condition> loadImageWithoutExtension(
        ::ResourceLocation const&           resourceLocation,
        bool                                tryStreamed,
        ::std::optional<::mce::ImageFormat> desiredImageFormat,
        bool                                splitAsArray
    );

    MCNAPI void setTextureCache(
        ::std::shared_ptr<
            ::dragon::texturestreaming::TextureCache<::dragon::texturestreaming::DragonTextureCacheContext>>
            textureCache
    );
#endif
    // NOLINTEND
};

} // namespace mce
