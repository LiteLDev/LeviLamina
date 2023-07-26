#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockState;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptStringBlockProperty {

public:
    // prevent constructor by default
    ScriptStringBlockProperty& operator=(ScriptStringBlockProperty const&) = delete;
    ScriptStringBlockProperty(ScriptStringBlockProperty const&)            = delete;
    ScriptStringBlockProperty()                                            = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTSTRINGBLOCKPROPERTY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptStringBlockProperty(); // NOLINT
#endif
    /**
     * @symbol
     * ??0ScriptStringBlockProperty\@ScriptModuleMinecraft\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockState\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@V?$StrongTypedObjectHandle\@VScriptBlockPermutation\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCAPI
    ScriptStringBlockProperty(std::string, class BlockState const&, std::vector<std::string>, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>); // NOLINT
    /**
     * @symbol ??0ScriptStringBlockProperty\@ScriptModuleMinecraft\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI ScriptStringBlockProperty(class ScriptModuleMinecraft::ScriptStringBlockProperty&&); // NOLINT
    /**
     * @symbol
     * ?getState\@ScriptStringBlockProperty\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<std::string> getState() const; // NOLINT
    /**
     * @symbol ??4ScriptStringBlockProperty\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptStringBlockProperty&
    operator=(class ScriptModuleMinecraft::ScriptStringBlockProperty&&); // NOLINT
    /**
     * @symbol
     * ?setState\@ScriptStringBlockProperty\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<void> setState(std::string); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptStringBlockProperty\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptStringBlockProperty\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptStringBlockProperty>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
