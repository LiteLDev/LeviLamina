#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCustomCommandParamInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk779845;
    ::ll::UntypedStorage<4, 4>  mUnk1962fc;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomCommandParamInterface(ScriptCustomCommandParamInterface const&);
    ScriptCustomCommandParamInterface();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::ScriptCustomCommandParamInterface&
    operator=(::ScriptModuleMinecraft::ScriptCustomCommandParamInterface const&);

    MCNAPI ::ScriptModuleMinecraft::ScriptCustomCommandParamInterface&
    operator=(::ScriptModuleMinecraft::ScriptCustomCommandParamInterface&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
