#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerSpawnAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTPLAYERSPAWNAFTEREVENT
public:
    ScriptPlayerSpawnAfterEvent& operator=(ScriptPlayerSpawnAfterEvent const&) = delete;
    ScriptPlayerSpawnAfterEvent(ScriptPlayerSpawnAfterEvent const&)            = delete;
    ScriptPlayerSpawnAfterEvent()                                              = delete;
#endif

public:
    /**
     * @symbol ??1ScriptPlayerSpawnAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPlayerSpawnAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptPlayerSpawnAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptPlayerSpawnAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent> bind();
};

}; // namespace ScriptModuleMinecraft
