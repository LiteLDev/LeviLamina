#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptActorType; }
namespace ScriptModuleMinecraft { class ScriptDynamicPropertiesDefinition; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPropertyRegistry {
public:
    // prevent constructor by default
    ScriptPropertyRegistry& operator=(ScriptPropertyRegistry const&);
    ScriptPropertyRegistry(ScriptPropertyRegistry const&);
    ScriptPropertyRegistry();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptPropertyRegistry@ScriptModuleMinecraft@@QEAA@AEAVServerLevel@@@Z
    MCAPI explicit ScriptPropertyRegistry(class ServerLevel& level);

    // symbol:
    // ?registerEntityTypeDynamicProperties@ScriptPropertyRegistry@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@VWeakLifetimeScope@4@AEBVScriptDynamicPropertiesDefinition@2@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VScriptActorType@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<void>
    registerEntityTypeDynamicProperties(class Scripting::WeakLifetimeScope, class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const&, std::variant<std::string, class ScriptModuleMinecraft::ScriptActorType>);

    // symbol:
    // ?registerWorldDynamicProperties@ScriptPropertyRegistry@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBVScriptDynamicPropertiesDefinition@2@@Z
    MCAPI class Scripting::Result<void>
    registerWorldDynamicProperties(class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const&);

    // symbol:
    // ?bind@ScriptPropertyRegistry@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptPropertyRegistry@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptPropertyRegistry> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
