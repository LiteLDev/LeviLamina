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
    // vIndex: 0
    virtual ~ScriptMinecraftServerUIModuleFactory() = default;

    MCAPI ScriptMinecraftServerUIModuleFactory();

    MCAPI static std::string getModuleUUIDAsString();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addVersions();

    MCAPI struct Scripting::ModuleBinding
    _generateBindings(class Scripting::ModuleBindingBuilder&, bool, std::vector<std::string> const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static char const* LegacyModuleName;

    MCAPI static char const* ModuleName;

    MCAPI static class mce::UUID const ModuleUUID;

    // NOLINTEND
};
