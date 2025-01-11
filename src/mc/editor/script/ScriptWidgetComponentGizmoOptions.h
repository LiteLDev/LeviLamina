#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetComponentBaseOptions.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptWidgetComponentGizmoOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkdc72a2;
    ::ll::UntypedStorage<1, 2> mUnkee317e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentGizmoOptions& operator=(ScriptWidgetComponentGizmoOptions const&);
    ScriptWidgetComponentGizmoOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWidgetComponentGizmoOptions(::Editor::ScriptModule::ScriptWidgetComponentGizmoOptions const&);

    MCAPI ~ScriptWidgetComponentGizmoOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentGizmoOptions>
    bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentGizmoOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
