#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ISceneStackNavigator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISceneStackNavigator() = default;

    virtual void toPreStartScreen(bool initialNavigation) = 0;
    // NOLINTEND
};
