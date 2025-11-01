#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_factory/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptServerGraphicsModuleFactory() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID& ModuleUUID();
    // NOLINTEND

};
