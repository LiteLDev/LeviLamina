#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct UUID; }
namespace Scripting { struct Version; }
// clang-format on

namespace Scripting {

class IModuleBindingFactory {
public:
    // prevent constructor by default
    IModuleBindingFactory& operator=(IModuleBindingFactory const&);
    IModuleBindingFactory(IModuleBindingFactory const&);
    IModuleBindingFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IModuleBindingFactory() = default;

    // vIndex: 1
    virtual std::string getName() const = 0;

    // vIndex: 2
    virtual struct Scripting::UUID getUUID() const = 0;

    // vIndex: 3
    virtual bool hasAlias(std::string const& alias) const = 0;

    // vIndex: 4
    virtual std::vector<struct Scripting::Version> getSupportedVersions() const = 0;

    // vIndex: 5
    virtual std::vector<struct Scripting::ModuleDescriptor> getDependencies(struct Scripting::Version version
    ) const = 0;

    // vIndex: 6
    virtual std::optional<struct Scripting::ModuleBinding> createModuleBinding(
        struct Scripting::Version                             version,
        std::optional<struct Scripting::ContextConfig> const& config
    ) = 0;

    // NOLINTEND
};

}; // namespace Scripting
