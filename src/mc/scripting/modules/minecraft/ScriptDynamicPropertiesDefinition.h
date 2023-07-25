#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

namespace ScriptModuleMinecraft {

class ScriptDynamicPropertiesDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTDYNAMICPROPERTIESDEFINITION
public:
    ScriptDynamicPropertiesDefinition& operator=(ScriptDynamicPropertiesDefinition const&) = delete;
    ScriptDynamicPropertiesDefinition()                                                    = delete;
#endif

public:
    /**
     * @symbol ??0ScriptDynamicPropertiesDefinition\@ScriptModuleMinecraft\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI ScriptDynamicPropertiesDefinition(class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition&&);
    /**
     * @symbol ??0ScriptDynamicPropertiesDefinition\@ScriptModuleMinecraft\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI ScriptDynamicPropertiesDefinition(class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const&);
    /**
     * @symbol
     * ?defineBoolean\@ScriptDynamicPropertiesDefinition\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptDynamicPropertiesDefinition\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$optional\@_N\@6\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineBoolean(std::string const&, class std::optional<bool>);
    /**
     * @symbol
     * ?defineNumber\@ScriptDynamicPropertiesDefinition\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptDynamicPropertiesDefinition\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$optional\@M\@6\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineNumber(std::string const&, class std::optional<float>);
    /**
     * @symbol
     * ?defineString\@ScriptDynamicPropertiesDefinition\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptDynamicPropertiesDefinition\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@IV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@6\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineString(std::string const&, unsigned int, class std::optional<std::string>);
    /**
     * @symbol
     * ?getDefinition\@ScriptDynamicPropertiesDefinition\@ScriptModuleMinecraft\@\@QEBAAEBVDynamicPropertiesDefinition\@\@XZ
     */
    MCAPI class DynamicPropertiesDefinition const& getDefinition() const;
    /**
     * @symbol ??4ScriptDynamicPropertiesDefinition\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition&
    operator=(class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition&&);
    /**
     * @symbol ??1ScriptDynamicPropertiesDefinition\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptDynamicPropertiesDefinition();
    /**
     * @symbol
     * ?bind\@ScriptDynamicPropertiesDefinition\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptDynamicPropertiesDefinition\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>
    bind();
};

}; // namespace ScriptModuleMinecraft
