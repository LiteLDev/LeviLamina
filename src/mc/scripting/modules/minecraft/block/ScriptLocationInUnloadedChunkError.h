#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptLocationInUnloadedChunkError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptLocationInUnloadedChunkError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptLocationInUnloadedChunkError(::Vec3 const& pos);

    MCAPI ~ScriptLocationInUnloadedChunkError();
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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
