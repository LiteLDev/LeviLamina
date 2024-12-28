#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AbstractScene {
public:
    // prevent constructor by default
    AbstractScene& operator=(AbstractScene const&);
    AbstractScene(AbstractScene const&);
    AbstractScene();
};
