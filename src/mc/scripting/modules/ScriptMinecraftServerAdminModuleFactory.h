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

    MCAPI explicit ScriptMinecraftServerAdminModuleFactory(class Bedrock::NonOwnerPointer<
                                                           class ScriptPackConfigurationManager>);

    MCAPI static std::string getModuleUUIDAsString();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct Scripting::ModuleBinding
    _generateBindings(class Scripting::ModuleBindingBuilder&, std::optional<struct Scripting::ContextConfig>, bool, std::vector<std::string> const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static char const* ModuleName;

    MCAPI static class mce::UUID const ModuleUUID;

    // NOLINTEND
};
