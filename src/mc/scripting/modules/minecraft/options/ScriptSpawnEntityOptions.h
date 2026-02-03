#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptSpawnEntityOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>           mInitialPersistence;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>          mInitialRotation;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mSpawnEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSpawnEntityOptions& operator=(ScriptSpawnEntityOptions const&);
    ScriptSpawnEntityOptions(ScriptSpawnEntityOptions const&);
    ScriptSpawnEntityOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptSpawnEntityOptions&
    operator=(::ScriptModuleMinecraft::ScriptSpawnEntityOptions&&);

    MCAPI ~ScriptSpawnEntityOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
