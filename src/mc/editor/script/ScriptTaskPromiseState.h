#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct ScriptTaskPromiseState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk4d45b6;
    ::ll::UntypedStorage<1, 1> mUnk229be5;
    ::ll::UntypedStorage<1, 1> mUnkd21af6;
    ::ll::UntypedStorage<4, 4> mUnk1e26a2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTaskPromiseState& operator=(ScriptTaskPromiseState const&);
    ScriptTaskPromiseState(ScriptTaskPromiseState const&);
    ScriptTaskPromiseState();
};

} // namespace Editor::ScriptModule
