#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftRealmsAdmin {

struct ScriptRealmsListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd7b5a2;
    ::ll::UntypedStorage<8, 16> mUnke3d0a0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRealmsListener& operator=(ScriptRealmsListener const&);
    ScriptRealmsListener(ScriptRealmsListener const&);
    ScriptRealmsListener();
};

} // namespace ScriptModuleMinecraftRealmsAdmin
