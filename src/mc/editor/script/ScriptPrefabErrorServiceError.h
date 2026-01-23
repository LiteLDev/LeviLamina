#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

namespace Editor::ScriptModule {

struct ScriptPrefabErrorServiceError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptPrefabErrorServiceError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptPrefabErrorServiceError(::std::string const& message);

    MCNAPI ~ScriptPrefabErrorServiceError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& message);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
