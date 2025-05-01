#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Error.h"

namespace Editor::ScriptModule {

class ScriptWidgetErrorInvalidObject : public ::Scripting::Error {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetErrorInvalidObject();

    MCNAPI ~ScriptWidgetErrorInvalidObject();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
