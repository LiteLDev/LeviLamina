#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/common/ResourceFileSystem.h"

namespace ResourceLoaders {
// NOLINTBEGIN
MCAPI extern std::string const EMPTY_STRING;

MCAPI extern std::string const IMGEXT_JPEG;

MCAPI extern std::string const IMGEXT_JPG;

MCAPI extern std::string const IMGEXT_PNG;

MCAPI extern std::string const IMGEXT_TARGA;

MCAPI extern std::string const IMGEXT_TEXTURESET;

MCAPI extern class BackwardsCompatTextureGroup backCompatGroup;

MCAPI extern std::map<::ResourceFileSystem, std::unique_ptr<class ResourceLoader>> loaders;

MCAPI extern std::vector<std::string> const supportedImageExtensions;
// NOLINTEND

}; // namespace ResourceLoaders
