#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class ScriptPackConfigurationManager;
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct JSON; }
// clang-format on

namespace ScriptModuleMinecraftServerAdmin {

class ScriptServerVariables {
public:
    // prevent constructor by default
    ScriptServerVariables& operator=(ScriptServerVariables const&);
    ScriptServerVariables(ScriptServerVariables const&);
    ScriptServerVariables();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptServerVariables@ScriptModuleMinecraftServerAdmin@@QEAA@V?$NonOwnerPointer@VScriptPackConfigurationManager@@@Bedrock@@AEBUContextConfig@Scripting@@@Z
    MCAPI
    ScriptServerVariables(class Bedrock::NonOwnerPointer<class ScriptPackConfigurationManager>, struct Scripting::ContextConfig const&);

    // symbol:
    // ?get@ScriptServerVariables@ScriptModuleMinecraftServerAdmin@@QEBA?AV?$optional@UJSON@Scripting@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::optional<struct Scripting::JSON> get(std::string const& name) const;

    // symbol:
    // ?getAllVariableNames@ScriptServerVariables@ScriptModuleMinecraftServerAdmin@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getAllVariableNames() const;

    // symbol:
    // ?bind@ScriptServerVariables@ScriptModuleMinecraftServerAdmin@@SA?AV?$ClassBindingBuilder@VScriptServerVariables@ScriptModuleMinecraftServerAdmin@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerAdmin::ScriptServerVariables>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerAdmin
