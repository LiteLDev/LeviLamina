#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class CommandClosureStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 232> mUnk7fc87d;
    ::ll::UntypedStorage<8, 136> mUnkfb13fe;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandClosureStorage& operator=(CommandClosureStorage const&);
    CommandClosureStorage(CommandClosureStorage const&);
    CommandClosureStorage();
};

} // namespace ScriptModuleMinecraft
