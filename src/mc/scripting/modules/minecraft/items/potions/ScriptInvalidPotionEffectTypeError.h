#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptInvalidPotionEffectTypeError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptInvalidPotionEffectTypeError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptInvalidPotionEffectTypeError(::std::string const& invalidEffectName);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& invalidEffectName);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
