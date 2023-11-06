#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

class FloatNavigation : public ::PathNavigation {
public:
    // prevent constructor by default
    FloatNavigation& operator=(FloatNavigation const&);
    FloatNavigation(FloatNavigation const&);
    FloatNavigation();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~FloatNavigation();

    // vIndex: 10, symbol: ?travel@FloatNavigation@@MEAA_NAEAVNavigationComponent@@AEAVMob@@AEAM22@Z
    virtual bool travel(class NavigationComponent&, class Mob&, float&, float&, float&);

    // NOLINTEND
};
