#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/image/ImageFormat.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/resource/ResourceFileType.h"

// auto generated forward declare list
// clang-format off
class BackwardsCompatTextureGroup;
class ResourceLoader;
class ResourceLocation;
class ResourceLocationPair;
namespace mce { struct Image; }
// clang-format on

namespace ResourceLoaders {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI void clearLoaders();

MCNAPI ::gsl::span<::std::string const> getFileTypeExtensions(::ResourceLoaders::ResourceFileType fileType);

MCNAPI ::std::pair<int, ::std::string_view>
getPackStackIndexOfResource(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensions);

MCNAPI ::Core::PathBuffer<::std::string> getPath(::ResourceLocation const& resourceLocation);

MCNAPI ::ResourceLocation getRawResourceLocation(::ResourceLocation const& resourceLocation);

MCNAPI bool load(::ResourceLocation const& resourceLocation, ::std::string& resourceStream);

MCNAPI bool load(
    ::ResourceLocation const&        resourceLocation,
    ::std::string&                   resourceStream,
    ::gsl::span<::std::string const> extensions
);

MCNAPI bool load(
    ::ResourceLocationPair const&    resourceLocation,
    ::std::string&                   resourceStream,
    ::gsl::span<::std::string const> extensions
);

MCNAPI ::mce::Image loadImage(::ResourceLocation const& resourceLocation);

MCNAPI ::nonstd::expected<::mce::Image, ::std::error_condition> loadImageWithoutExtension(
    ::ResourceLocation const&           imageResourceLocation,
    ::std::optional<::mce::ImageFormat> desiredImageFormat,
    bool                                splitAsArray
);

MCNAPI void registerLoader(::ResourceFileSystem fileSystem, ::std::unique_ptr<::ResourceLoader> loader);
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::string const& EMPTY_STRING();
#endif

MCNAPI ::std::string const& IMGEXT_JPEG();

MCNAPI ::std::string const& IMGEXT_JPG();

MCNAPI ::std::string const& IMGEXT_PNG();

MCNAPI ::std::string const& IMGEXT_TARGA();

MCNAPI ::std::string const& IMGEXT_TEXTURESET();

MCNAPI ::BackwardsCompatTextureGroup& backCompatGroup();

MCNAPI ::std::map<::ResourceFileSystem, ::std::unique_ptr<::ResourceLoader>>& loaders();

MCNAPI ::std::vector<::std::string> const& supportedImageExtensions();
// NOLINTEND

} // namespace ResourceLoaders
