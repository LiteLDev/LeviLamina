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
    // ScriptItemCustomComponentInterface inner types define
    using Flags = ::ScriptModuleMinecraft::ScriptItemCustomComponentClosureFlags;

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptItemCustomComponentClosureFlags toFlags() const;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
