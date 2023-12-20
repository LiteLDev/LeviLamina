#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/common/ResourceFileSystem.h"

namespace ResourceLoaders {
// NOLINTBEGIN
// symbol: ?EMPTY_STRING@ResourceLoaders@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
MCAPI extern std::string const EMPTY_STRING;

// symbol: ?IMGEXT_JPEG@ResourceLoaders@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
MCAPI extern std::string const IMGEXT_JPEG;

// symbol: ?IMGEXT_JPG@ResourceLoaders@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
MCAPI extern std::string const IMGEXT_JPG;

// symbol: ?IMGEXT_PNG@ResourceLoaders@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
MCAPI extern std::string const IMGEXT_PNG;

// symbol: ?IMGEXT_TARGA@ResourceLoaders@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
MCAPI extern std::string const IMGEXT_TARGA;

// symbol: ?IMGEXT_TEXTURESET@ResourceLoaders@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
MCAPI extern std::string const IMGEXT_TEXTURESET;

// symbol: ?backCompatGroup@ResourceLoaders@@3VBackwardsCompatTextureGroup@@A
MCAPI extern class BackwardsCompatTextureGroup backCompatGroup;

// symbol:
// ?loaders@ResourceLoaders@@3V?$map@W4ResourceFileSystem@@V?$unique_ptr@VResourceLoader@@U?$default_delete@VResourceLoader@@@std@@@std@@U?$less@W4ResourceFileSystem@@@3@V?$allocator@U?$pair@$$CBW4ResourceFileSystem@@V?$unique_ptr@VResourceLoader@@U?$default_delete@VResourceLoader@@@std@@@std@@@std@@@3@@std@@A
MCAPI extern std::map<::ResourceFileSystem, std::unique_ptr<class ResourceLoader>> loaders;

// symbol:
// ?supportedImageExtensions@ResourceLoaders@@3V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@B
MCAPI extern std::vector<std::string> const supportedImageExtensions;
// NOLINTEND

}; // namespace ResourceLoaders
