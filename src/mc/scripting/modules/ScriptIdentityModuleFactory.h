#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_factory/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ScriptIdentityModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // prevent constructor by default
    ScriptIdentityModuleFactory& operator=(ScriptIdentityModuleFactory const&);
    ScriptIdentityModuleFactory(ScriptIdentityModuleFactory const&);
    ScriptIdentityModuleFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptIdentityModuleFactory() /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ModuleName();

    MCAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
