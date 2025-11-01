#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockInvalidComponentError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptBlockInvalidComponentError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptBlockInvalidComponentError(::std::string_view blockComponentName);

    MCNAPI ~ScriptBlockInvalidComponentError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view blockComponentName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
