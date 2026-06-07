#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptServerStateMonitor.h"

// auto generated forward declare list
// clang-format off
struct ServerScriptManagerEvents;
namespace SharedTypes { class DynamicValueComplexityConstraint; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomComponentRegistry : public ::ScriptModuleMinecraft::ScriptServerStateMonitor {
public:
    // prevent constructor by default
    ScriptCustomComponentRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptCustomComponentRegistry(::ServerScriptManagerEvents& events);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SharedTypes::DynamicValueComplexityConstraint makeJsonParametersConstraint();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ServerScriptManagerEvents& events);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
