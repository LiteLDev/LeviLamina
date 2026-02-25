#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisite.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct RouteData; }
namespace OreUI { struct SupportedRoute; }
// clang-format on

namespace OreUI::RouteDataParserUtils {
// functions
// NOLINTBEGIN
MCAPI ::OreUI::RouteMode _parseMode(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& entry
);

MCAPI ::OreUI::RoutePrerequisite _parsePrerequisite(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& entry
);

MCAPI ::OreUI::SupportedRoute _parseSupportedRoute(
    ::rapidjson::GenericValue<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& routeEntry
);

MCAPI void parseJson(
    ::std::vector<::OreUI::RouteData>& routes,
    ::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator> const& doc
);
// NOLINTEND

} // namespace OreUI::RouteDataParserUtils
