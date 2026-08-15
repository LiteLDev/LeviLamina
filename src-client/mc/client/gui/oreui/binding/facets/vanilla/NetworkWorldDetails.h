#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/NetworkWorldType.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/world/WorldPingStatus.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct NetworkWorldActivity; }
// clang-format on

namespace OreUI {

struct NetworkWorldDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                id;
    ::ll::TypedStorage<8, 32, ::std::string>                                name;
    ::ll::TypedStorage<8, 32, ::std::string>                                description;
    ::ll::TypedStorage<8, 32, ::std::string>                                address;
    ::ll::TypedStorage<4, 4, int>                                           port;
    ::ll::TypedStorage<8, 32, ::std::string>                                ping;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                       imagePath;
    ::ll::TypedStorage<4, 4, ::WorldPingStatus>                             pingStatus;
    ::ll::TypedStorage<4, 4, int>                                           playerCount;
    ::ll::TypedStorage<4, 4, int>                                           capacity;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::NetworkWorldActivity>> activities;
    ::ll::TypedStorage<8, 32, ::std::string>                                newsTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                                newsDescription;
    ::ll::TypedStorage<1, 1, ::OreUI::NetworkWorldType>                     type;
    ::ll::TypedStorage<1, 1, bool>                                          mIsSupportedForPartyTravel;
    // NOLINTEND
};

} // namespace OreUI
