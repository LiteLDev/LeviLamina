#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptTickEvent {

public:
    // prevent constructor by default
    ScriptTickEvent& operator=(ScriptTickEvent const&) = delete;
    ScriptTickEvent(ScriptTickEvent const&)            = delete;
    ScriptTickEvent()                                  = delete;

public:
    /**
     * @symbol
     * ?bindV010\@ScriptTickEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptTickEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptTickEvent>
    bindV010(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
