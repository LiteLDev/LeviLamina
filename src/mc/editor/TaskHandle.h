#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Coroutine {

struct TaskHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk67e1d2;
    // NOLINTEND

public:
    // prevent constructor by default
    TaskHandle& operator=(TaskHandle const&);
    TaskHandle(TaskHandle const&);
    TaskHandle();
};

} // namespace Editor::Coroutine
