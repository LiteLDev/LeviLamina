#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ErrorBindingBuilder.h"
#include "mc/deps/scripting/runtime/Error.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptLocationInUnloadedChunkError : public ::Scripting::Error {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptLocationInUnloadedChunkError(::Vec3 const& pos);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBindingBuilder<::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Vec3 const& pos);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
