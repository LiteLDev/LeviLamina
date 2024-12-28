#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"
#include "mc/external/scripting/runtime/Error.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptLocationOutOfWorldBoundsError : public ::Scripting::Error {
public:
    // prevent constructor by default
    ScriptLocationOutOfWorldBoundsError& operator=(ScriptLocationOutOfWorldBoundsError const&);
    ScriptLocationOutOfWorldBoundsError(ScriptLocationOutOfWorldBoundsError const&);
    ScriptLocationOutOfWorldBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptLocationOutOfWorldBoundsError(::Vec3 const& pos);

    MCAPI ScriptLocationOutOfWorldBoundsError(::std::string const& details, ::Vec3 const& pos);

    MCAPI ~ScriptLocationOutOfWorldBoundsError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBindingBuilder<::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Vec3 const& pos);

    MCAPI void* $ctor(::std::string const& details, ::Vec3 const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
