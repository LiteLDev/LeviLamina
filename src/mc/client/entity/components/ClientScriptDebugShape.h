#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleDebugUtilities {

struct ClientScriptDebugShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke02347;
    ::ll::UntypedStorage<8, 16> mUnk105b1c;
    ::ll::UntypedStorage<1, 1>  mUnk6dc6a8;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientScriptDebugShape& operator=(ClientScriptDebugShape const&);
    ClientScriptDebugShape(ClientScriptDebugShape const&);
    ClientScriptDebugShape();
};

} // namespace ScriptModuleDebugUtilities
