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
    MCNAPI explicit ScriptLocationOutOfWorldBoundsError(::Vec3 const& pos);

    MCNAPI ScriptLocationOutOfWorldBoundsError(::std::string const& details, ::Vec3 const& pos);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Vec3 const& pos);

    MCNAPI void* $ctor(::std::string const& details, ::Vec3 const& pos);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
