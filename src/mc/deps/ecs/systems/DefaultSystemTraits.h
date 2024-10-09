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
    MCAPI static std::vector<struct ComponentInfo> generateDetailedComponentInfo();

    MCAPI static std::string generateName(std::string);

    // NOLINTEND
};
