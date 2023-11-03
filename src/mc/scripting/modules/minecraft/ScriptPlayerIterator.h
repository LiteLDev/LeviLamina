#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerIterator {
public:
    // prevent constructor by default
    ScriptPlayerIterator& operator=(ScriptPlayerIterator const&);
    ScriptPlayerIterator(ScriptPlayerIterator const&);
    ScriptPlayerIterator();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptPlayerIterator@ScriptModuleMinecraft@@QEAA@$$QEAV?$vector@V?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@@Z
    MCAPI explicit ScriptPlayerIterator(std::vector<class Scripting::StrongTypedObjectHandle<
                                            class ScriptModuleMinecraft::ScriptPlayer>>&&);

    // symbol:
    // ?bind@ScriptPlayerIterator@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptPlayerIterator@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptPlayerIterator> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
