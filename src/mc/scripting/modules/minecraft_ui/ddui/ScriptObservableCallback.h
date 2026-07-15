#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftServerUI {

class ScriptObservableCallback {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8e4645;
    ::ll::UntypedStorage<8, 16> mUnk176906;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptObservableCallback& operator=(ScriptObservableCallback const&);
    ScriptObservableCallback(ScriptObservableCallback const&);
    ScriptObservableCallback();
};

} // namespace ScriptModuleMinecraftServerUI
