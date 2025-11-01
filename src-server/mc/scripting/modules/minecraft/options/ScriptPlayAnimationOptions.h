#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayAnimationOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk661f75;
    ::ll::UntypedStorage<8, 32> mUnkc5982c;
    ::ll::UntypedStorage<8, 40> mUnk7de0bf;
    ::ll::UntypedStorage<4, 8> mUnkb5e4ac;
    ::ll::UntypedStorage<8, 40> mUnk3a0d0d;
    ::ll::UntypedStorage<8, 40> mUnkb81727;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayAnimationOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPlayAnimationOptions(::ScriptModuleMinecraft::ScriptPlayAnimationOptions&&);

    MCNAPI ScriptPlayAnimationOptions(::ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);

    MCNAPI ::ScriptModuleMinecraft::ScriptPlayAnimationOptions& operator=(::ScriptModuleMinecraft::ScriptPlayAnimationOptions&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptPlayAnimationOptions& operator=(::ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);

    MCNAPI ~ScriptPlayAnimationOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindV1();

    MCNAPI static ::Scripting::InterfaceBinding bindV2();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayAnimationOptions&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
