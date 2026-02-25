#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/UIBlockThumbnailAtlasManager.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace OreUI { struct AtlasIndex; }
namespace mce { class Color; }
// clang-format on

namespace OreUI::Utils {
// functions
// NOLINTBEGIN
MCAPI ::std::map<::std::string, ::mce::Color> buildAverageColorMapFromAtlases(
    ::std::unordered_map<::HashedString, ::std::unique_ptr<::OreUI::UIBlockThumbnailAtlasManager::AtlasData>> const&
                                                                                        atlasMap,
    ::std::unordered_map<::HashedString, ::std::shared_ptr<::OreUI::AtlasIndex>> const& atlasIndices
);
// NOLINTEND

} // namespace OreUI::Utils
