#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentAlreadyRegisteredError {
public:
    // prevent constructor by default
    ScriptItemCustomComponentAlreadyRegisteredError& operator=(ScriptItemCustomComponentAlreadyRegisteredError const&);
    ScriptItemCustomComponentAlreadyRegisteredError(ScriptItemCustomComponentAlreadyRegisteredError const&);
    ScriptItemCustomComponentAlreadyRegisteredError();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptItemCustomComponentAlreadyRegisteredError@ScriptModuleMinecraft@@QEAA@AEBVHashedString@@@Z
    MCAPI explicit ScriptItemCustomComponentAlreadyRegisteredError(class HashedString const&);

    // symbol: ??1ScriptItemCustomComponentAlreadyRegisteredError@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptItemCustomComponentAlreadyRegisteredError();

    // symbol:
    // ?bind@ScriptItemCustomComponentAlreadyRegisteredError@ScriptModuleMinecraft@@SA?AUErrorBinding@Scripting@@XZ
    MCAPI static struct Scripting::ErrorBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
