#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/image/ImageFormat.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class ResourceLocationPair;
namespace cg { class ImageResource; }
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
    // NOLINTEND

public:
    // prevent constructor by default
    ImageResourceLoader& operator=(ImageResourceLoader const&);
    ImageResourceLoader(ImageResourceLoader const&);
    ImageResourceLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::nonstd::expected<::std::shared_ptr<::cg::ImageResource>, ::std::error_condition>
    loadImageResourceOfExtensions(
        ::ResourceLocationPair const&    resourceLocationPair,
        ::gsl::span<::std::string const> extensions
    );

    MCNAPI_C ::nonstd::expected<::std::shared_ptr<::cg::ImageResource>, ::std::error_condition>
    loadImageWithoutExtension(
        ::ResourceLocation const&           resourceLocation,
        ::std::optional<::mce::ImageFormat> desiredImageFormat,
        bool                                splitAsArray
    );
    // NOLINTEND
};

} // namespace mce
