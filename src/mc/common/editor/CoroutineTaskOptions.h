#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Coroutine {

struct CoroutineTaskOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk95db77;
    ::ll::UntypedStorage<8, 8> mUnk8b1dd1;
    ::ll::UntypedStorage<1, 1> mUnkbe3a57;
    // NOLINTEND

public:
    // prevent constructor by default
    CoroutineTaskOptions& operator=(CoroutineTaskOptions const&);
    CoroutineTaskOptions(CoroutineTaskOptions const&);
    CoroutineTaskOptions();
};

} // namespace Editor::Coroutine
