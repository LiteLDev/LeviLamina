#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorIterator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTACTORITERATOR
public:
    ScriptActorIterator& operator=(ScriptActorIterator const&) = delete;
    ScriptActorIterator(ScriptActorIterator const&)            = delete;
    ScriptActorIterator()                                      = delete;
#endif

public:
    /**
     * @symbol
     * ??0ScriptActorIterator\@ScriptModuleMinecraft\@\@QEAA\@$$QEAV?$vector\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$allocator\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI ScriptActorIterator(std::vector<
                              class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>&&);
    /**
     * @symbol ??1ScriptActorIterator\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorIterator();
    /**
     * @symbol
     * ?bind\@ScriptActorIterator\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptActorIterator\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptActorIterator> bind();
};

}; // namespace ScriptModuleMinecraft
