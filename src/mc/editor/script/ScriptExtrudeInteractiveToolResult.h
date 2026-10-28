#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

class ScriptExtrudeInteractiveToolResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk15c723;
    ::ll::UntypedStorage<8, 32> mUnk6c79d5;
    ::ll::UntypedStorage<1, 1>  mUnkc3048b;
    ::ll::UntypedStorage<4, 4>  mUnk3c5b72;
    ::ll::UntypedStorage<1, 1>  mUnk25b94a;
    ::ll::UntypedStorage<8, 16> mUnk4faeb9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptExtrudeInteractiveToolResult& operator=(ScriptExtrudeInteractiveToolResult const&);
    ScriptExtrudeInteractiveToolResult(ScriptExtrudeInteractiveToolResult const&);
    ScriptExtrudeInteractiveToolResult();
};

} // namespace Editor::ScriptModule
