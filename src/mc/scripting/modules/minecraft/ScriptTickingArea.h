#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptTickingArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdbf8d8;
    ::ll::UntypedStorage<4, 24> mUnka3d909;
    ::ll::UntypedStorage<8, 32> mUnk39679d;
    ::ll::UntypedStorage<4, 4>  mUnk2ccd31;
    ::ll::UntypedStorage<1, 1>  mUnk4cce40;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptTickingArea();

    MCNAPI ScriptTickingArea(::ScriptModuleMinecraft::ScriptTickingArea const&);

    MCNAPI ::ScriptModuleMinecraft::ScriptTickingArea& operator=(::ScriptModuleMinecraft::ScriptTickingArea&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptTickingArea& operator=(::ScriptModuleMinecraft::ScriptTickingArea const&);

    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptTickingArea const&) const;

    MCNAPI ~ScriptTickingArea();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptTickingArea const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
