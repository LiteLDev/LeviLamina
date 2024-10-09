#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_factory/GenericModuleBindingFactory.h"

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
    // vIndex: 0
    virtual ~ScriptMinecraftDebugUtilitiesModuleFactory() = default;

    MCAPI ScriptMinecraftDebugUtilitiesModuleFactory();

    MCAPI static std::string getModuleUUIDAsString();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct Scripting::ModuleBinding _generateBindings(
        class Scripting::ModuleBindingBuilder& moduleBuilder,
        bool                                   allowUntagged,
        std::vector<std::string> const&        allowedTags
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static char const* ModuleName;

    MCAPI static class mce::UUID const ModuleUUID;

    // NOLINTEND
};
