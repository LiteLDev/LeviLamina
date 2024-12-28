#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceFileSystem.h"

// auto generated forward declare list
// clang-format off
class BackwardsCompatTextureGroup;
class ResourceLoader;
// clang-format on

namespace ResourceLoaders {
// static variables
// NOLINTBEGIN
MCAPI ::std::string const& EMPTY_STRING();

MCAPI ::std::string const& IMGEXT_JPEG();

MCAPI ::std::string const& IMGEXT_JPG();

MCAPI ::std::string const& IMGEXT_PNG();

MCAPI ::std::string const& IMGEXT_TARGA();

MCAPI ::std::string const& IMGEXT_TEXTURESET();

MCAPI ::BackwardsCompatTextureGroup& backCompatGroup();

MCAPI ::std::map<::ResourceFileSystem, ::std::unique_ptr<::ResourceLoader>>& loaders();

MCAPI ::std::vector<::std::string> const& supportedImageExtensions();
// NOLINTEND

} // namespace ResourceLoaders
