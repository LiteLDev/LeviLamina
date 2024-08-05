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
    // vIndex: 0
    virtual ~FloatNavigation() = default;

    // vIndex: 10
    virtual bool travel(class NavigationComponent& parent, class Mob& mob, float& xa, float& ya, float& za);

    // NOLINTEND
};
