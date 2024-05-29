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

class ScriptMinecraftServerUIModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // prevent constructor by default
    ScriptMinecraftServerUIModuleFactory& operator=(ScriptMinecraftServerUIModuleFactory const&);
    ScriptMinecraftServerUIModuleFactory(ScriptMinecraftServerUIModuleFactory const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptMinecraftServerUIModuleFactory@@UEAA@XZ
    virtual ~ScriptMinecraftServerUIModuleFactory() = default;

    // symbol: ??0ScriptMinecraftServerUIModuleFactory@@QEAA@XZ
    MCAPI ScriptMinecraftServerUIModuleFactory();

    // symbol:
    // ?getModuleUUIDAsString@ScriptMinecraftServerUIModuleFactory@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI static std::string getModuleUUIDAsString();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addVersions@ScriptMinecraftServerUIModuleFactory@@AEAAXXZ
    MCAPI void _addVersions();

    // symbol:
    // ?_generateBindings@ScriptMinecraftServerUIModuleFactory@@AEAA?AUModuleBinding@Scripting@@AEAVModuleBindingBuilder@3@_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI struct Scripting::ModuleBinding
    _generateBindings(class Scripting::ModuleBindingBuilder&, bool, std::vector<std::string> const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?LegacyModuleName@ScriptMinecraftServerUIModuleFactory@@0PEBDEB
    MCAPI static char const* LegacyModuleName;

    // symbol: ?ModuleName@ScriptMinecraftServerUIModuleFactory@@0PEBDEB
    MCAPI static char const* ModuleName;

    // symbol: ?ModuleUUID@ScriptMinecraftServerUIModuleFactory@@0VUUID@mce@@B
    MCAPI static class mce::UUID const ModuleUUID;

    // NOLINTEND
};
