#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/IModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IModuleBindingFactory; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct UUID; }
namespace Scripting { struct Version; }
// clang-format on

namespace Scripting {

class GenericModuleBindingFactory : public ::Scripting::IModuleBindingFactory {
public:
    // GenericModuleBindingFactory inner types declare
    // clang-format off
    struct ModuleData;
    // clang-format on

    // GenericModuleBindingFactory inner types define
    struct ModuleData {
    public:
        // prevent constructor by default
        ModuleData& operator=(ModuleData const&);
        ModuleData(ModuleData const&);
        ModuleData();

    public:
        // NOLINTBEGIN
        MCAPI
        ModuleData(std::string const&, struct Scripting::Version&&, std::function<std::optional<struct Scripting::ModuleBinding>(class Scripting::ModuleBindingBuilder&, std::optional<struct Scripting::ContextConfig> const&)>&&, std::vector<struct Scripting::ModuleDescriptor>&&);

        MCAPI ~ModuleData();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    GenericModuleBindingFactory& operator=(GenericModuleBindingFactory const&);
    GenericModuleBindingFactory(GenericModuleBindingFactory const&);
    GenericModuleBindingFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GenericModuleBindingFactory();

    // vIndex: 1
    virtual std::string getName() const;

    // vIndex: 2
    virtual struct Scripting::UUID getUUID() const;

    // vIndex: 3
    virtual bool hasAlias(std::string const& alias) const;

    // vIndex: 4
    virtual std::vector<struct Scripting::Version> getSupportedVersions() const;

    // vIndex: 5
    virtual std::vector<struct Scripting::ModuleDescriptor> getDependencies(struct Scripting::Version version) const;

    // vIndex: 6
    virtual std::optional<struct Scripting::ModuleBinding> createModuleBinding(
        struct Scripting::Version                             version,
        std::optional<struct Scripting::ContextConfig> const& config
    );

    MCAPI GenericModuleBindingFactory(std::string name, struct Scripting::UUID uuid);

    MCAPI void addVersionedModuleBinding(
        struct Scripting::Version alias,
        std::function<std::optional<
            struct Scripting::
                ModuleBinding>(class Scripting::ModuleBindingBuilder&, std::optional<struct Scripting::ContextConfig> const&)>
            version,
        struct Scripting::Version,
        std::vector<struct Scripting::ModuleDescriptor> dependencies
    );

    MCAPI void
        addVersionedModuleBinding(std::string, struct Scripting::Version, std::function<std::optional<struct Scripting::ModuleBinding>(class Scripting::ModuleBindingBuilder&, std::optional<struct Scripting::ContextConfig> const&)>, struct Scripting::Version, std::vector<struct Scripting::ModuleDescriptor>);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _addRuntimeDependency(std::vector<struct Scripting::ModuleDescriptor>&, struct Scripting::Version);

    // NOLINTEND
};

}; // namespace Scripting
