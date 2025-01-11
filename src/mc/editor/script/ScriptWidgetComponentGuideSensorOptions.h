#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetComponentBaseOptions.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptWidgetComponentGuideSensorOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ScriptWidgetComponentGuideSensorOptions(::Editor::ScriptModule::ScriptWidgetComponentGuideSensorOptions const&);

    MCAPI ~ScriptWidgetComponentGuideSensorOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentGuideSensorOptions>
    bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentGuideSensorOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
