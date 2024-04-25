#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

class ScriptMinecraftDebugUtilitiesModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // prevent constructor by default
    ScriptMinecraftDebugUtilitiesModuleFactory& operator=(ScriptMinecraftDebugUtilitiesModuleFactory const&);
    ScriptMinecraftDebugUtilitiesModuleFactory(ScriptMinecraftDebugUtilitiesModuleFactory const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptMinecraftDebugUtilitiesModuleFactory@@UEAA@XZ
    virtual ~ScriptMinecraftDebugUtilitiesModuleFactory() = default;

    // symbol: ??0ScriptMinecraftDebugUtilitiesModuleFactory@@QEAA@XZ
    MCAPI ScriptMinecraftDebugUtilitiesModuleFactory();

    // symbol:
    // ?getModuleUUIDAsString@ScriptMinecraftDebugUtilitiesModuleFactory@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI static std::string getModuleUUIDAsString();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_generateBindings@ScriptMinecraftDebugUtilitiesModuleFactory@@AEAA?AUModuleBinding@Scripting@@AEAVModuleBindingBuilder@3@_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI struct Scripting::ModuleBinding
    _generateBindings(class Scripting::ModuleBindingBuilder&, bool, std::vector<std::string> const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ModuleName@ScriptMinecraftDebugUtilitiesModuleFactory@@0PEBDEB
    MCAPI static char const* ModuleName;

    // symbol: ?ModuleUUID@ScriptMinecraftDebugUtilitiesModuleFactory@@0VUUID@mce@@B
    MCAPI static class mce::UUID const ModuleUUID;

    // NOLINTEND
};
