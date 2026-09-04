#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/image/ImageFormat.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/resource/ResourceFileType.h"

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
#ifdef LL_PLAT_C
MCNAPI ::gsl::span<::std::string const> getFileTypeExtensions(::ResourceLoaders::ResourceFileType fileType);

MCNAPI ::ResourceLocation getRawResourceLocation(::ResourceLocation const& resourceLocation);

MCNAPI ::nonstd::expected<::mce::Image, ::std::error_condition> loadImageWithoutExtension(
    ::ResourceLocation const&           imageResourceLocation,
    ::std::optional<::mce::ImageFormat> desiredImageFormat,
    bool                                splitAsArray
);
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::string const& IMGEXT_PNG();
#endif

MCNAPI ::BackwardsCompatTextureGroup& backCompatGroup();

#ifdef LL_PLAT_C
MCNAPI ::std::map<::ResourceFileSystem, ::std::unique_ptr<::ResourceLoader>>& loaders();
#endif
// NOLINTEND

} // namespace ResourceLoaders
