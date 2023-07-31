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

public:
    // prevent constructor by default
    ScriptActorType& operator=(ScriptActorType const&) = delete;
    ScriptActorType(ScriptActorType const&)            = delete;
    ScriptActorType()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?addDynamicPropertiesDefinition\@ScriptActorType\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVScriptDynamicPropertiesDefinition\@2\@\@Z
     */
    MCAPI class Scripting::Result<void>
    addDynamicPropertiesDefinition(class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const&);
    /**
     * @symbol
     * ?bind\@ScriptActorType\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptActorType\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptActorType> bind();
    /**
     * @symbol
     * ?getId\@ScriptActorType\@ScriptModuleMinecraft\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getId() const;
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
