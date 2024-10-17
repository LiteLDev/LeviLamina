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
    // vIndex: 0
    virtual ~CommonModuleFactory() = default;

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
    MCAPI static void** vftable();

    MCAPI static char const* const& ModuleName();

    MCAPI static struct Scripting::UUID const& ModuleUUID();

    // NOLINTEND
};

}; // namespace Scripting
