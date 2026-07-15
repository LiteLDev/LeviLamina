#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleServerAdmin {

struct ScriptAsyncPlayerJoinBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk210079;
    ::ll::UntypedStorage<8, 32> mUnk1fb4c2;
    ::ll::UntypedStorage<8, 32> mUnkfb3ce5;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAsyncPlayerJoinBeforeEvent& operator=(ScriptAsyncPlayerJoinBeforeEvent const&);
    ScriptAsyncPlayerJoinBeforeEvent(ScriptAsyncPlayerJoinBeforeEvent const&);
    ScriptAsyncPlayerJoinBeforeEvent();
};

} // namespace ScriptModuleServerAdmin
