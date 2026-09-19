#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::InteractiveTools {

struct SessionContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8fc9dc;
    ::ll::UntypedStorage<8, 8> mUnk9d8a20;
    ::ll::UntypedStorage<4, 4> mUnke4f57e;
    // NOLINTEND

public:
    // prevent constructor by default
    SessionContext& operator=(SessionContext const&);
    SessionContext(SessionContext const&);
    SessionContext();
};

} // namespace Editor::InteractiveTools
