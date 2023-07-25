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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTPLAYERITERATOR
public:
    ScriptPlayerIterator& operator=(ScriptPlayerIterator const&) = delete;
    ScriptPlayerIterator(ScriptPlayerIterator const&)            = delete;
    ScriptPlayerIterator()                                       = delete;
#endif

public:
    /**
     * @symbol
     * ??0ScriptPlayerIterator\@ScriptModuleMinecraft\@\@QEAA\@$$QEAV?$vector\@V?$StrongTypedObjectHandle\@VScriptPlayer\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$allocator\@V?$StrongTypedObjectHandle\@VScriptPlayer\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI ScriptPlayerIterator(std::vector<
                               class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>&&);
    /**
     * @symbol ??1ScriptPlayerIterator\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPlayerIterator();
    /**
     * @symbol
     * ?bind\@ScriptPlayerIterator\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptPlayerIterator\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptPlayerIterator> bind();
};

}; // namespace ScriptModuleMinecraft
