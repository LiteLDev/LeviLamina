#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptStructurePlaceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk9bbd0c;
    ::ll::UntypedStorage<1, 2>  mUnka6df9e;
    ::ll::UntypedStorage<1, 2>  mUnk9f2ad6;
    ::ll::UntypedStorage<1, 2>  mUnkae8d62;
    ::ll::UntypedStorage<1, 2>  mUnkebcf19;
    ::ll::UntypedStorage<4, 8>  mUnk1c8b62;
    ::ll::UntypedStorage<8, 40> mUnk44e4d8;
    ::ll::UntypedStorage<1, 2>  mUnkfa951c;
    ::ll::UntypedStorage<4, 8>  mUnkb6b8e9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptStructurePlaceOptions& operator=(ScriptStructurePlaceOptions const&);
    ScriptStructurePlaceOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptStructurePlaceOptions(::ScriptModuleMinecraft::ScriptStructurePlaceOptions const&);

    MCNAPI ::ScriptModuleMinecraft::ScriptStructurePlaceOptions&
    operator=(::ScriptModuleMinecraft::ScriptStructurePlaceOptions&&);

    MCNAPI ~ScriptStructurePlaceOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptStructurePlaceOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
