#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SceneFactory {
public:
    // prevent constructor by default
    SceneFactory& operator=(SceneFactory const&);
    SceneFactory(SceneFactory const&);
    SceneFactory();
};
