#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
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

class ScriptMinecraftServerAdminModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // prevent constructor by default
    ScriptMinecraftServerAdminModuleFactory& operator=(ScriptMinecraftServerAdminModuleFactory const&);
    ScriptMinecraftServerAdminModuleFactory(ScriptMinecraftServerAdminModuleFactory const&);
    ScriptMinecraftServerAdminModuleFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptMinecraftServerAdminModuleFactory() = default;

    MCAPI explicit ScriptMinecraftServerAdminModuleFactory(
        class Bedrock::NonOwnerPointer<class ScriptPackConfigurationManager> packConfigManager
    );

    MCAPI static std::string getModuleUUIDAsString();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct Scripting::ModuleBinding _generateBindings(
        class Scripting::ModuleBindingBuilder&         moduleBuilder,
        std::optional<struct Scripting::ContextConfig> contextConfig,
        bool                                           allowUntagged,
        std::vector<std::string> const&                allowedTags
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Bedrock::NonOwnerPointer<class ScriptPackConfigurationManager> packConfigManager);

    MCAPI static char const* const& ModuleName();

    MCAPI static class mce::UUID const& ModuleUUID();

    // NOLINTEND
};
