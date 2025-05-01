#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/script/ScriptWidgetComponentBaseOptions.h"

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
    ScriptWidgetComponentGizmoOptions(ScriptWidgetComponentGizmoOptions const&);
    ScriptWidgetComponentGizmoOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void> validate() const;

    MCNAPI ~ScriptWidgetComponentGizmoOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentGizmoOptions>
    bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
