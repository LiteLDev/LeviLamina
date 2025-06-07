#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Error.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptLocationInUnloadedChunkError : public ::Scripting::Error {
public:
    // prevent constructor by default
    ScriptLocationInUnloadedChunkError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptLocationInUnloadedChunkError(::Vec3 const& pos);

    MCNAPI ~ScriptLocationInUnloadedChunkError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Vec3 const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
