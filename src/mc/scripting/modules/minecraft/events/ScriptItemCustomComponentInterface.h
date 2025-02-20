#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/metadata/ScriptCustomComponentScriptInterface.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentClosureFlags; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemCustomComponentInterface : public ::ScriptModuleMinecraft::ScriptCustomComponentScriptInterface<7> {
public:
    // prevent constructor by default
    ScriptItemCustomComponentInterface& operator=(ScriptItemCustomComponentInterface const&);
    ScriptItemCustomComponentInterface(ScriptItemCustomComponentInterface const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemCustomComponentInterface(::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&&);

    MCAPI ~ScriptItemCustomComponentInterface();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
