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
// clang-format on

namespace Scripting {

class CommonModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // prevent constructor by default
    CommonModuleFactory& operator=(CommonModuleFactory const&);
    CommonModuleFactory(CommonModuleFactory const&);
    CommonModuleFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CommonModuleFactory@Scripting@@UEAA@XZ
    virtual ~CommonModuleFactory() = default;

    // symbol: ?ModuleName@CommonModuleFactory@Scripting@@2PEBDEB
    MCAPI static char const* ModuleName;

    // symbol: ?ModuleUUID@CommonModuleFactory@Scripting@@2UUUID@2@B
    MCAPI static struct Scripting::UUID const ModuleUUID;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addVersions@CommonModuleFactory@Scripting@@AEAAXXZ
    MCAPI void _addVersions();

    // symbol:
    // ?_generateBindings@CommonModuleFactory@Scripting@@AEAA?AUModuleBinding@2@AEAVModuleBindingBuilder@2@_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI struct Scripting::ModuleBinding
    _generateBindings(class Scripting::ModuleBindingBuilder&, bool, std::vector<std::string> const&);

    // NOLINTEND
};

}; // namespace Scripting
