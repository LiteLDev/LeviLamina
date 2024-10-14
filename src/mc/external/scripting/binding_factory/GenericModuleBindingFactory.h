#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_factory/IModuleBindingFactory.h"

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
        MCAPI ModuleData(
            std::string const&          _alias,
            struct Scripting::Version&& _version,
            std::function<std::optional<
                struct Scripting::
                    ModuleBinding>(class Scripting::ModuleBindingBuilder&, std::optional<struct Scripting::ContextConfig> const&)>&&
                                                              _moduleCreatorFn,
            std::vector<struct Scripting::ModuleDescriptor>&& _dependencies
        );

        MCAPI ~ModuleData();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        MCAPI void dtor$();

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
        struct Scripting::Version version,
        std::function<std::optional<
            struct Scripting::
                ModuleBinding>(class Scripting::ModuleBindingBuilder&, std::optional<struct Scripting::ContextConfig> const&)>
                                                        moduleCreatorFn,
        struct Scripting::Version                       runtimeVersion,
        std::vector<struct Scripting::ModuleDescriptor> dependencies
    );

    MCAPI void addVersionedModuleBinding(
        std::string               alias,
        struct Scripting::Version version,
        std::function<std::optional<
            struct Scripting::
                ModuleBinding>(class Scripting::ModuleBindingBuilder&, std::optional<struct Scripting::ContextConfig> const&)>
                                                        moduleCreatorFn,
        struct Scripting::Version                       runtimeVersion,
        std::vector<struct Scripting::ModuleDescriptor> dependencies
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _addRuntimeDependency(
        std::vector<struct Scripting::ModuleDescriptor>& dependencies,
        struct Scripting::Version                        runtimeVersion
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

    MCAPI void dtor$();

    MCAPI std::optional<struct Scripting::ModuleBinding> createModuleBinding$(
        struct Scripting::Version                             version,
        std::optional<struct Scripting::ContextConfig> const& config
    );

    MCAPI std::vector<struct Scripting::ModuleDescriptor> getDependencies$(struct Scripting::Version version) const;

    MCAPI std::string getName$() const;

    MCAPI std::vector<struct Scripting::Version> getSupportedVersions$() const;

    MCAPI struct Scripting::UUID getUUID$() const;

    MCAPI bool hasAlias$(std::string const& alias) const;

    // NOLINTEND
};

}; // namespace Scripting
