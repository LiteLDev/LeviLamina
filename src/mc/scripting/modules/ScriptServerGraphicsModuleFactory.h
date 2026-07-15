#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_factory/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace mce { class UUID; }
// clang-format on

class ScriptServerGraphicsModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkfdad11;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptServerGraphicsModuleFactory& operator=(ScriptServerGraphicsModuleFactory const&);
    ScriptServerGraphicsModuleFactory(ScriptServerGraphicsModuleFactory const&);
    ScriptServerGraphicsModuleFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptServerGraphicsModuleFactory(::ServerLevel* serverLevel);

    MCNAPI void _addVersions();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ModuleName();

    MCNAPI static ::mce::UUID& ModuleUUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerLevel* serverLevel);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
