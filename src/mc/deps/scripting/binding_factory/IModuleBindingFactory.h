#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDependency; }
namespace Scripting { struct Version; }
namespace mce { class UUID; }
// clang-format on

namespace Scripting {

class IModuleBindingFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IModuleBindingFactory() = default;

    virtual ::std::string getName() const = 0;

    virtual ::mce::UUID getUUID() const = 0;

    virtual bool hasAlias(::std::string const& alias) const = 0;

    virtual ::std::vector<::Scripting::Version> getSupportedVersions() const = 0;

    virtual ::std::vector<::Scripting::ModuleDependency> getDependencies(::Scripting::Version version) const = 0;

    virtual ::std::optional<::Scripting::ModuleBinding> createModuleBinding(
        ::Scripting::Version                               version,
        ::std::optional<::Scripting::ContextConfig> const& config,
        bool                                               requireDynamicImport
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
