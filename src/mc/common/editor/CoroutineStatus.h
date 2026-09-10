#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct CoroutineStatus {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkd03f8d;
    ::ll::UntypedStorage<8, 32> mUnkc8a4c3;
    // NOLINTEND

public:
    // prevent constructor by default
    CoroutineStatus& operator=(CoroutineStatus const&);
    CoroutineStatus(CoroutineStatus const&);
    CoroutineStatus();
};

} // namespace Editor
