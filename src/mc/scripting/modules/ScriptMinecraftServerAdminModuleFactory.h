#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/external/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class GenericModuleBindingFactory; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct UUID; }
namespace Scripting { struct Version; }
namespace mce { class UUID; }
// clang-format on

class ScriptMinecraftServerAdminModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // prevent constructor by default
    ScriptMinecraftServerAdminModuleFactory& operator=(ScriptMinecraftServerAdminModuleFactory const&);
    ScriptMinecraftServerAdminModuleFactory(ScriptMinecraftServerAdminModuleFactory const&);
    ScriptMinecraftServerAdminModuleFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptMinecraftServerAdminModuleFactory@@UEAA@XZ
    virtual ~ScriptMinecraftServerAdminModuleFactory() = default;

    // symbol:
    // ??0ScriptMinecraftServerAdminModuleFactory@@QEAA@V?$NonOwnerPointer@VScriptPackConfigurationManager@@@Bedrock@@@Z
    MCAPI explicit ScriptMinecraftServerAdminModuleFactory(class Bedrock::NonOwnerPointer<
                                                           class ScriptPackConfigurationManager>);

    // symbol:
    // ?getModuleUUIDAsString@ScriptMinecraftServerAdminModuleFactory@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI static std::string getModuleUUIDAsString();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_generateBindings@ScriptMinecraftServerAdminModuleFactory@@AEAA?AUModuleBinding@Scripting@@AEAVModuleBindingBuilder@3@V?$optional@UContextConfig@Scripting@@@std@@_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@6@@Z
    MCAPI struct Scripting::ModuleBinding
    _generateBindings(class Scripting::ModuleBindingBuilder&, std::optional<struct Scripting::ContextConfig>, bool, std::vector<std::string> const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ModuleName@ScriptMinecraftServerAdminModuleFactory@@0PEBDEB
    MCAPI static char const* ModuleName;

    // symbol: ?ModuleUUID@ScriptMinecraftServerAdminModuleFactory@@0VUUID@mce@@B
    MCAPI static class mce::UUID const ModuleUUID;

    // NOLINTEND
};
