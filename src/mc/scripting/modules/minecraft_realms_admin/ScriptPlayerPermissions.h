#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftRealmsAdmin {

struct ScriptPlayerPermissions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk685766;
    ::ll::UntypedStorage<1, 1>  mUnk50150b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerPermissions& operator=(ScriptPlayerPermissions const&);
    ScriptPlayerPermissions(ScriptPlayerPermissions const&);
    ScriptPlayerPermissions();
};

} // namespace ScriptModuleMinecraftRealmsAdmin
