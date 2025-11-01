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

}
