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

class ScriptMinecraftNetModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // prevent constructor by default
    ScriptMinecraftNetModuleFactory& operator=(ScriptMinecraftNetModuleFactory const&);
    ScriptMinecraftNetModuleFactory(ScriptMinecraftNetModuleFactory const&);
    ScriptMinecraftNetModuleFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptMinecraftNetModuleFactory@@UEAA@XZ
    virtual ~ScriptMinecraftNetModuleFactory() = default;

    // symbol: ??0ScriptMinecraftNetModuleFactory@@QEAA@V?$NonOwnerPointer@VScheduler@@@Bedrock@@@Z
    MCAPI explicit ScriptMinecraftNetModuleFactory(class Bedrock::NonOwnerPointer<class Scheduler>);

    // symbol:
    // ?getModuleUUIDAsString@ScriptMinecraftNetModuleFactory@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI static std::string getModuleUUIDAsString();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addVersions@ScriptMinecraftNetModuleFactory@@AEAAXXZ
    MCAPI void _addVersions();

    // symbol:
    // ?_generateBindings@ScriptMinecraftNetModuleFactory@@AEAA?AUModuleBinding@Scripting@@AEAVModuleBindingBuilder@3@V?$optional@UContextConfig@Scripting@@@std@@_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@6@@Z
    MCAPI struct Scripting::ModuleBinding
    _generateBindings(class Scripting::ModuleBindingBuilder&, std::optional<struct Scripting::ContextConfig>, bool, std::vector<std::string> const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ModuleName@ScriptMinecraftNetModuleFactory@@0PEBDEB
    MCAPI static char const* ModuleName;

    // symbol: ?ModuleUUID@ScriptMinecraftNetModuleFactory@@0VUUID@mce@@B
    MCAPI static class mce::UUID const ModuleUUID;

    // NOLINTEND
};
