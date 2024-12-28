#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetComponentBaseOptions.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptWidgetComponentRenderPrimOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // prevent constructor by default
    ScriptWidgetComponentRenderPrimOptions& operator=(ScriptWidgetComponentRenderPrimOptions const&);
    ScriptWidgetComponentRenderPrimOptions();

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
    MCAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentRenderPrimOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
