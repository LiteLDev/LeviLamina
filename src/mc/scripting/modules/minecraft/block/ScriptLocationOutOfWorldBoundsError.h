#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptLocationOutOfWorldBoundsError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptLocationOutOfWorldBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptLocationOutOfWorldBoundsError(::Vec3 const& pos);

    MCAPI ScriptLocationOutOfWorldBoundsError(::std::string const& details, ::Vec3 const& pos);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Vec3 const& pos);

    MCAPI void* $ctor(::std::string const& details, ::Vec3 const& pos);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
