#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/items/components/ScriptBookError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBookPageContentError : public ::ScriptModuleMinecraft::ScriptBookError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb2d4c3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBookPageContentError& operator=(ScriptBookPageContentError const&);
    ScriptBookPageContentError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBookPageContentError(::ScriptModuleMinecraft::ScriptBookPageContentError const&);

    MCNAPI ~ScriptBookPageContentError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBookPageContentError const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
