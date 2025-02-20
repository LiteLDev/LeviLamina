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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptMinecraftServerUIModuleFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addVersions();

    MCAPI ::Scripting::ModuleBinding _generateBindings(
        ::Scripting::ModuleBindingBuilder&  moduleBuilder,
        bool                                allowUntagged,
        ::std::vector<::std::string> const& allowedTags
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& LegacyModuleName();

    MCAPI static char const*& ModuleName();

    MCAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
