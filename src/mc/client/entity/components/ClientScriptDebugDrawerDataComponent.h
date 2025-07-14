#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleDebugUtilities {

struct ClientScriptDebugDrawerDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk20512a;
    ::ll::UntypedStorage<1, 1>  mUnkd42a97;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientScriptDebugDrawerDataComponent& operator=(ClientScriptDebugDrawerDataComponent const&);
    ClientScriptDebugDrawerDataComponent(ClientScriptDebugDrawerDataComponent const&);
    ClientScriptDebugDrawerDataComponent();
};

} // namespace ScriptModuleDebugUtilities
