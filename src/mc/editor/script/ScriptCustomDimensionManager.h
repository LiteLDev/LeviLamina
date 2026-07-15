#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

class ScriptCustomDimensionManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk940041;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomDimensionManager& operator=(ScriptCustomDimensionManager const&);
    ScriptCustomDimensionManager(ScriptCustomDimensionManager const&);
    ScriptCustomDimensionManager();
};

} // namespace Editor::ScriptModule
