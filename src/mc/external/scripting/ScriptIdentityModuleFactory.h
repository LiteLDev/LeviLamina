#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class GenericModuleBindingFactory; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct UUID; }
namespace Scripting { struct Version; }
namespace mce { class UUID; }
// clang-format on

class ScriptIdentityModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // prevent constructor by default
    ScriptIdentityModuleFactory& operator=(ScriptIdentityModuleFactory const&);
    ScriptIdentityModuleFactory(ScriptIdentityModuleFactory const&);
    ScriptIdentityModuleFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptIdentityModuleFactory@@UEAA@XZ
    virtual ~ScriptIdentityModuleFactory() = default;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ModuleName@ScriptIdentityModuleFactory@@0PEBDEB
    MCAPI static char const* ModuleName;

    // symbol: ?ModuleUUID@ScriptIdentityModuleFactory@@0VUUID@mce@@B
    MCAPI static class mce::UUID const ModuleUUID;

    // NOLINTEND
};
