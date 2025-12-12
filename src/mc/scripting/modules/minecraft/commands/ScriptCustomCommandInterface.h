#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCustomCommandInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb8cea7;
    ::ll::UntypedStorage<8, 32> mUnk2b3342;
    ::ll::UntypedStorage<1, 1>  mUnk4e7a82;
    ::ll::UntypedStorage<1, 2>  mUnk7bb478;
    ::ll::UntypedStorage<8, 32> mUnkec9c52;
    ::ll::UntypedStorage<8, 32> mUnk28894d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomCommandInterface& operator=(ScriptCustomCommandInterface const&);
    ScriptCustomCommandInterface();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptCustomCommandInterface(::ScriptModuleMinecraft::ScriptCustomCommandInterface&&);

    MCNAPI ScriptCustomCommandInterface(::ScriptModuleMinecraft::ScriptCustomCommandInterface const&);

    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptCustomCommandInterface const& other) const;

    MCNAPI ~ScriptCustomCommandInterface();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptCustomCommandInterface&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptCustomCommandInterface const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
