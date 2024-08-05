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
    // vIndex: 0
    virtual ~CommonModuleFactory() = default;

    MCAPI static char const* ModuleName;

    MCAPI static struct Scripting::UUID const ModuleUUID;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addVersions();

    MCAPI struct Scripting::ModuleBinding
    _generateBindings(class Scripting::ModuleBindingBuilder&, bool, std::vector<std::string> const&);

    // NOLINTEND
};

}; // namespace Scripting
