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

class ScriptMinecraftModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // prevent constructor by default
    ScriptMinecraftModuleFactory& operator=(ScriptMinecraftModuleFactory const&);
    ScriptMinecraftModuleFactory(ScriptMinecraftModuleFactory const&);
    ScriptMinecraftModuleFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptMinecraftModuleFactory() = default;

    MCAPI explicit ScriptMinecraftModuleFactory(class ServerLevel* level);

    MCAPI static std::string getModuleUUIDAsString();

    MCAPI static struct Scripting::ModuleDescriptor makeModuleDescriptorFor(struct Scripting::Version version);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addVersions();

    MCAPI struct Scripting::ModuleBinding _generateBindings(
        class Scripting::ModuleBindingBuilder& moduleBuilder,
        bool                                   allowUntagged,
        std::vector<std::string> const&        additionalTags
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class ServerLevel* level);

    MCAPI static char const* const& LegacyModuleName();

    MCAPI static char const* const& ModuleName();

    MCAPI static class mce::UUID const& ModuleUUID();

    // NOLINTEND
};
