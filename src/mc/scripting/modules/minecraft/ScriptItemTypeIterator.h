#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptItemTypeIterator {

public:
    // prevent constructor by default
    ScriptItemTypeIterator& operator=(ScriptItemTypeIterator const&) = delete;
    ScriptItemTypeIterator(ScriptItemTypeIterator const&)            = delete;
    ScriptItemTypeIterator()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?bind\@ScriptItemTypeIterator\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptItemTypeIterator\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptItemTypeIterator> bind();
    /**
     * @symbol ??4ScriptItemTypeIterator\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptItemTypeIterator&
    operator=(class ScriptModuleMinecraft::ScriptItemTypeIterator&&);
    /**
     * @symbol ??1ScriptItemTypeIterator\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptItemTypeIterator();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
