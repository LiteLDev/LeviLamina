#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct ScriptTaskProgressQuery {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk4f09f0;
    ::ll::UntypedStorage<4, 8> mUnkcd900a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTaskProgressQuery& operator=(ScriptTaskProgressQuery const&);
    ScriptTaskProgressQuery(ScriptTaskProgressQuery const&);
    ScriptTaskProgressQuery();
};

} // namespace Editor::ScriptModule
