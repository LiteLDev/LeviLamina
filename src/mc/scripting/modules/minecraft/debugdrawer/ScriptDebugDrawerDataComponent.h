#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleDebugUtilities {

struct ScriptDebugDrawerDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5946e7;
    ::ll::UntypedStorage<8, 8>  mUnkf0ed8a;
    ::ll::UntypedStorage<8, 8>  mUnke2c512;
    ::ll::UntypedStorage<8, 16> mUnke6c568;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebugDrawerDataComponent& operator=(ScriptDebugDrawerDataComponent const&);
    ScriptDebugDrawerDataComponent(ScriptDebugDrawerDataComponent const&);
    ScriptDebugDrawerDataComponent();
};

} // namespace ScriptModuleDebugUtilities
