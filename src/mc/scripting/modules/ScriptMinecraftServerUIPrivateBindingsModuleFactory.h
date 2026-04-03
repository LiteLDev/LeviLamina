#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_factory/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDependency; }
namespace mce { class UUID; }
// clang-format on

class ScriptMinecraftServerUIPrivateBindingsModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptMinecraftServerUIPrivateBindingsModuleFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addVersions();

    MCNAPI ::Scripting::ModuleBinding _generateBindings(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ModuleDependency makeModuleDependencyFor();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
