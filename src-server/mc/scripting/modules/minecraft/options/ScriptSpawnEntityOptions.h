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
    ::ll::UntypedStorage<1, 2>  mUnk23fd25;
    ::ll::UntypedStorage<4, 8>  mUnka4d2c9;
    ::ll::UntypedStorage<8, 40> mUnkfdf449;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSpawnEntityOptions(ScriptSpawnEntityOptions const&);
    ScriptSpawnEntityOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::ScriptSpawnEntityOptions&
    operator=(::ScriptModuleMinecraft::ScriptSpawnEntityOptions&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptSpawnEntityOptions&
    operator=(::ScriptModuleMinecraft::ScriptSpawnEntityOptions const&);

    MCNAPI ~ScriptSpawnEntityOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
