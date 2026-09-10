#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftRealmsAdmin {

struct ScriptBuildInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk386cdd;
    ::ll::UntypedStorage<8, 32> mUnkd347f4;
    ::ll::UntypedStorage<8, 32> mUnk803279;
    ::ll::UntypedStorage<8, 32> mUnk9cc6d3;
    ::ll::UntypedStorage<8, 32> mUnk4decb1;
    ::ll::UntypedStorage<8, 32> mUnk89d4eb;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBuildInfo& operator=(ScriptBuildInfo const&);
    ScriptBuildInfo(ScriptBuildInfo const&);
    ScriptBuildInfo();
};

} // namespace ScriptModuleMinecraftRealmsAdmin
