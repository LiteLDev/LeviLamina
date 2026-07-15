#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_factory/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
class IGameplayUserManagerConnector;
namespace mce { class UUID; }
// clang-format on

class ScriptMinecraftServerUIBindingsModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk14071d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMinecraftServerUIBindingsModuleFactory& operator=(ScriptMinecraftServerUIBindingsModuleFactory const&);
    ScriptMinecraftServerUIBindingsModuleFactory(ScriptMinecraftServerUIBindingsModuleFactory const&);
    ScriptMinecraftServerUIBindingsModuleFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptMinecraftServerUIBindingsModuleFactory(::IGameplayUserManagerConnector* userManagerConnector);

    MCNAPI void _addVersions();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ModuleName();

    MCNAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IGameplayUserManagerConnector* userManagerConnector);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
