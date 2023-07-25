#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptDynamicPropertiesDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorType {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTACTORTYPE
public:
    ScriptActorType& operator=(ScriptActorType const&) = delete;
    ScriptActorType(ScriptActorType const&)            = delete;
    ScriptActorType()                                  = delete;
#endif

public:
    /**
     * @symbol
     * ?addDynamicPropertiesDefinition\@ScriptActorType\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVScriptDynamicPropertiesDefinition\@2\@\@Z
     */
    MCAPI class Scripting::Result<void>
    addDynamicPropertiesDefinition(class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const&);
    /**
     * @symbol
     * ?getId\@ScriptActorType\@ScriptModuleMinecraft\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getId() const;
    /**
     * @symbol
     * ?bind\@ScriptActorType\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptActorType\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptActorType> bind();
};

}; // namespace ScriptModuleMinecraft
