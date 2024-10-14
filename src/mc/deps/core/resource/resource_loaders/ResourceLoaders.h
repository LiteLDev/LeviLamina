#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceFileSystem.h"

namespace ResourceLoaders {
// thunks
// NOLINTBEGIN
MCAPI std::string const& EMPTY_STRING();

MCAPI std::string const& IMGEXT_JPEG();

MCAPI std::string const& IMGEXT_JPG();

MCAPI std::string const& IMGEXT_PNG();

MCAPI std::string const& IMGEXT_TARGA();

MCAPI std::string const& IMGEXT_TEXTURESET();

MCAPI class BackwardsCompatTextureGroup& backCompatGroup();

MCAPI std::map<::ResourceFileSystem, std::unique_ptr<class ResourceLoader>>& loaders();

MCAPI std::vector<std::string> const& supportedImageExtensions();
// NOLINTEND

}; // namespace ResourceLoaders
