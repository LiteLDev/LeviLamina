#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockLocationIterator {

public:
    // prevent constructor by default
    ScriptBlockLocationIterator& operator=(ScriptBlockLocationIterator const&) = delete;
    ScriptBlockLocationIterator(ScriptBlockLocationIterator const&)            = delete;
    ScriptBlockLocationIterator()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ScriptBlockLocationIterator\@ScriptModuleMinecraft\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI ScriptBlockLocationIterator(class ScriptModuleMinecraft::ScriptBlockLocationIterator&&);
    /**
     * @symbol
     * ??0ScriptBlockLocationIterator\@ScriptModuleMinecraft\@\@QEAA\@V?$unique_ptr\@VBaseBlockLocationIterator\@\@U?$default_delete\@VBaseBlockLocationIterator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI ScriptBlockLocationIterator(std::unique_ptr<class BaseBlockLocationIterator>);
    /**
     * @symbol ??4ScriptBlockLocationIterator\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptBlockLocationIterator&
    operator=(class ScriptModuleMinecraft::ScriptBlockLocationIterator&&);
    /**
     * @symbol ??1ScriptBlockLocationIterator\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptBlockLocationIterator();
    /**
     * @symbol
     * ?bind\@ScriptBlockLocationIterator\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptBlockLocationIterator\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockLocationIterator> bind();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
