#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptRawTextInterface {
public:
    // prevent constructor by default
    ScriptRawTextInterface& operator=(ScriptRawTextInterface const&);
    ScriptRawTextInterface(ScriptRawTextInterface const&);
    ScriptRawTextInterface();

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptRawTextInterface@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptRawTextInterface&
    operator=(struct ScriptModuleMinecraft::ScriptRawTextInterface&&);

    // symbol: ??8ScriptRawTextInterface@ScriptModuleMinecraft@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptRawTextInterface const& other) const;

    // symbol: ??1ScriptRawTextInterface@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptRawTextInterface();

    // symbol:
    // ?bind@ScriptRawTextInterface@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptRawTextInterface@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptRawTextInterface> bind();

    // symbol: ?fromJSON@ScriptRawTextInterface@ScriptModuleMinecraft@@SA?AU12@AEBVValue@Json@@@Z
    MCAPI static struct ScriptModuleMinecraft::ScriptRawTextInterface fromJSON(class Json::Value const& json);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
