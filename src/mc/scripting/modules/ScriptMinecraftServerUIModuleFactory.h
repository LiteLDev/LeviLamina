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

    MCAPI struct Scripting::ModuleBinding _generateBindings(
        class Scripting::ModuleBindingBuilder& moduleBuilder,
        bool                                   allowUntagged,
        std::vector<std::string> const&        allowedTags
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI static char const* const& LegacyModuleName();

    MCAPI static char const* const& ModuleName();

    MCAPI static class mce::UUID const& ModuleUUID();

    // NOLINTEND
};
