#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_factory/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleBinding; }
namespace mce { class UUID; }
// clang-format on

class ScriptMinecraftServerUIModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkbccd08;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMinecraftServerUIModuleFactory& operator=(ScriptMinecraftServerUIModuleFactory const&);
    ScriptMinecraftServerUIModuleFactory(ScriptMinecraftServerUIModuleFactory const&);
    ScriptMinecraftServerUIModuleFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptMinecraftServerUIModuleFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addVersions();

    MCNAPI ::Scripting::ModuleBinding
    _generateBindings(::Scripting::ModuleBindingBuilder& moduleBuilder, ::std::string const& versionPath);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& LegacyModuleName();

    MCNAPI static char const*& ModuleName();

    MCNAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
