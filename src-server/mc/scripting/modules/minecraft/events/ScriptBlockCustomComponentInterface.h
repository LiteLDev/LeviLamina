#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/metadata/ScriptCustomComponentScriptInterface.h"

namespace ScriptModuleMinecraft {

class ScriptBlockCustomComponentInterface : public ::ScriptModuleMinecraft::ScriptCustomComponentScriptInterface<10> {
public:
    // prevent constructor by default
    ScriptBlockCustomComponentInterface& operator=(ScriptBlockCustomComponentInterface const&);
    ScriptBlockCustomComponentInterface(ScriptBlockCustomComponentInterface const&);
    ScriptBlockCustomComponentInterface();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockCustomComponentInterface(::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&&);

    MCNAPI ~ScriptBlockCustomComponentInterface();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
