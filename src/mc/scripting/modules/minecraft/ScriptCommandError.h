#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"

// auto generated forward declare list
// clang-format off
struct MCRESULT;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCommandError {
public:
    // prevent constructor by default
    ScriptCommandError& operator=(ScriptCommandError const&);
    ScriptCommandError(ScriptCommandError const&);
    ScriptCommandError();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptCommandError@ScriptModuleMinecraft@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUMCRESULT@@@Z
    MCAPI ScriptCommandError(std::string messages, struct MCRESULT const& result);

    // symbol: ??1ScriptCommandError@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptCommandError();

    // symbol:
    // ?bind@ScriptCommandError@ScriptModuleMinecraft@@SA?AV?$ErrorBindingBuilder@UScriptCommandError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ErrorBindingBuilder<struct ScriptModuleMinecraft::ScriptCommandError> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
