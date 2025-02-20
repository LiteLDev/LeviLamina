#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/editor/script/ScriptWidgetComponentBaseOptions.h"

namespace Editor::ScriptModule {

class ScriptWidgetComponentGuideSensorOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptWidgetComponentGuideSensorOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentGuideSensorOptions>
    bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
