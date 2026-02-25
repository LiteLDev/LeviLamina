#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/RouterAction.h"

// auto generated forward declare list
// clang-format off
class ThirdPartyInfo;
namespace OreUI { class RouterLocation; }
namespace OreUI::RouterLocationEventingUtils { struct ScreenChangedProperties; }
// clang-format on

namespace OreUI::RouterLocationEventingUtils {
// functions
// NOLINTBEGIN
MCAPI ::OreUI::RouterLocationEventingUtils::ScreenChangedProperties _createScreenChangedProperties(
    ::OreUI::RouterLocation const& currentLocation,
    ::OreUI::RouterAction          causedByAction,
    ::ThirdPartyInfo const&        thirdPartyInfo
);
// NOLINTEND

} // namespace OreUI::RouterLocationEventingUtils
