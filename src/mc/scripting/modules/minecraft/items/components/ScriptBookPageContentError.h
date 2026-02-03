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
    ::ll::TypedStorage<4, 4, int> mPageIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBookPageContentError& operator=(ScriptBookPageContentError const&);
    ScriptBookPageContentError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBookPageContentError(::ScriptModuleMinecraft::ScriptBookPageContentError const&);

    MCAPI ~ScriptBookPageContentError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBookPageContentError const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
