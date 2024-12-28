#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class SceneProvider {
public:
    // prevent constructor by default
    SceneProvider& operator=(SceneProvider const&);
    SceneProvider(SceneProvider const&);
    SceneProvider();
};

} // namespace OreUI
