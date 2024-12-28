#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"
#include "mc/external/scripting/runtime/Error.h"

namespace Editor::ScriptModule {

class ScriptWidgetGroupErrorInvalidObject : public ::Scripting::Error {
public:
    // prevent constructor by default
    ScriptWidgetGroupErrorInvalidObject& operator=(ScriptWidgetGroupErrorInvalidObject const&);
    ScriptWidgetGroupErrorInvalidObject(ScriptWidgetGroupErrorInvalidObject const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWidgetGroupErrorInvalidObject();

    MCAPI ~ScriptWidgetGroupErrorInvalidObject();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBindingBuilder<::Editor::ScriptModule::ScriptWidgetGroupErrorInvalidObject>
    bindError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
