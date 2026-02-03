#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentLevelOutOfBoundsError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptItemEnchantmentLevelOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemEnchantmentLevelOutOfBoundsError(
        ::std::string const& details,
        ::std::string const& typeName,
        int                  level,
        int                  maxLevel
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& details, ::std::string const& typeName, int level, int maxLevel);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
