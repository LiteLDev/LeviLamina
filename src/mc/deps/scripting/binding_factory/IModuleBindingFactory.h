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

    virtual bool hasAlias(::std::string const&) const = 0;

    virtual ::std::vector<::Scripting::Version> getSupportedVersions() const = 0;

    virtual ::std::vector<::Scripting::ModuleDependency> getDependencies(::Scripting::Version) const = 0;

    virtual ::std::optional<::Scripting::ModuleBinding>
    createModuleBinding(::Scripting::Version, ::std::optional<::Scripting::ContextConfig> const&, bool) = 0;
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
