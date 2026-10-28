#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Coroutine {

struct TaskDebugInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf72347;
    // NOLINTEND

public:
    // prevent constructor by default
    TaskDebugInfo& operator=(TaskDebugInfo const&);
    TaskDebugInfo(TaskDebugInfo const&);
    TaskDebugInfo();
};

} // namespace Editor::Coroutine
