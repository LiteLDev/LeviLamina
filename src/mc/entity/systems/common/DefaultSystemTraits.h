#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DefaultSystemTraits {
public:
    // prevent constructor by default
    DefaultSystemTraits& operator=(DefaultSystemTraits const&);
    DefaultSystemTraits(DefaultSystemTraits const&);
    DefaultSystemTraits();

public:
    // NOLINTBEGIN
    // symbol:
    // ?generateDetailedComponentInfo@DefaultSystemTraits@@SA?AV?$vector@UComponentInfo@@V?$allocator@UComponentInfo@@@std@@@std@@XZ
    MCAPI static std::vector<struct ComponentInfo> generateDetailedComponentInfo();

    // symbol:
    // ?generateName@DefaultSystemTraits@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@@Z
    MCAPI static std::string generateName(std::string);

    // NOLINTEND
};
