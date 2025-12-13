#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/image/ImageFormat.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/resource/resource_loaders/ResourceFileType.h"

// auto generated forward declare list
// clang-format off
class BackwardsCompatTextureGroup;
class ResourceLoader;
class ResourceLocation;
namespace mce { struct Image; }
// clang-format on

namespace ResourceLoaders {
// functions
// NOLINTBEGIN
MCNAPI_C ::gsl::span<::std::string const> getFileTypeExtensions(::ResourceLoaders::ResourceFileType fileType);

MCNAPI_C ::ResourceLocation getRawResourceLocation(::ResourceLocation const& resourceLocation);

MCNAPI_C ::nonstd::expected<::mce::Image, ::std::error_condition> loadImageWithoutExtension(
    ::ResourceLocation const&           imageResourceLocation,
    ::std::optional<::mce::ImageFormat> desiredImageFormat,
    bool                                splitAsArray
);

MCNAPI_C void registerLoader(::ResourceFileSystem fileSystem, ::std::unique_ptr<::ResourceLoader> loader);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::string const& EMPTY_STRING();

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
