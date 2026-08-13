#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_factory/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ScriptMinecraftRealmsAdminModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkbe3fe5;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMinecraftRealmsAdminModuleFactory& operator=(ScriptMinecraftRealmsAdminModuleFactory const&);
    ScriptMinecraftRealmsAdminModuleFactory(ScriptMinecraftRealmsAdminModuleFactory const&);
    ScriptMinecraftRealmsAdminModuleFactory();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND
};
