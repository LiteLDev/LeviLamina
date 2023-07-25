#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptTickEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTTICKEVENT
public:
    ScriptTickEvent& operator=(ScriptTickEvent const&) = delete;
    ScriptTickEvent(ScriptTickEvent const&)            = delete;
    ScriptTickEvent()                                  = delete;
#endif

public:
    /**
     * @symbol
     * ?bindV010\@ScriptTickEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptTickEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptTickEvent> bindV010();
};

}; // namespace ScriptModuleMinecraft
