#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptActorTypeIterator {

public:
    // prevent constructor by default
    ScriptActorTypeIterator& operator=(ScriptActorTypeIterator const&) = delete;
    ScriptActorTypeIterator(ScriptActorTypeIterator const&)            = delete;
    ScriptActorTypeIterator()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?bind\@ScriptActorTypeIterator\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptActorTypeIterator\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptActorTypeIterator> bind();
    /**
     * @symbol ??4ScriptActorTypeIterator\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptActorTypeIterator&
    operator=(class ScriptModuleMinecraft::ScriptActorTypeIterator&&);
    /**
     * @symbol ??1ScriptActorTypeIterator\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorTypeIterator();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
