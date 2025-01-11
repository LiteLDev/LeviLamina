#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetComponentBaseOptions.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptWidgetComponentRenderPrimOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWidgetComponentRenderPrimOptions(::Editor::ScriptModule::ScriptWidgetComponentRenderPrimOptions const&);

    MCAPI ~ScriptWidgetComponentRenderPrimOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentRenderPrimOptions>
    bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentRenderPrimOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
