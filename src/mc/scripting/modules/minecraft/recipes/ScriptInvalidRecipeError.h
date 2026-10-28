#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptInvalidRecipeError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mRecipeId;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInvalidRecipeError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptInvalidRecipeError(::std::string_view recipeId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view recipeId);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
