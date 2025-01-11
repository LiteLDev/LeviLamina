#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"
#include "mc/external/scripting/runtime/Error.h"

namespace Editor::ScriptModule {

class ScriptWidgetComponentErrorInvalidComponent : public ::Scripting::Error {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWidgetComponentErrorInvalidComponent();

    MCAPI ~ScriptWidgetComponentErrorInvalidComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
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
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
