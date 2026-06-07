#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_factory/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ScriptMinecraftRealmsModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkdb9466;
    ::ll::UntypedStorage<8, 8> mUnkbd4a25;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMinecraftRealmsModuleFactory& operator=(ScriptMinecraftRealmsModuleFactory const&);
    ScriptMinecraftRealmsModuleFactory(ScriptMinecraftRealmsModuleFactory const&);
    ScriptMinecraftRealmsModuleFactory();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND
};
