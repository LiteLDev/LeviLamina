#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/editor/script/ScriptWidgetComponentBaseOptions.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptRGBA; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentTextOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 32> mUnk40e2a4;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentTextOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetComponentTextOptions(::Editor::ScriptModule::ScriptWidgetComponentTextOptions const&);

    MCNAPI ::Editor::ScriptModule::ScriptWidgetComponentTextOptions&
    operator=(::Editor::ScriptModule::ScriptWidgetComponentTextOptions&&);

    MCNAPI ::Editor::ScriptModule::ScriptWidgetComponentTextOptions&
    operator=(::Editor::ScriptModule::ScriptWidgetComponentTextOptions const&);

    MCNAPI ~ScriptWidgetComponentTextOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentTextOptions>
    bindScript();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ScriptModuleMinecraft::ScriptRGBA const& DEFAULT_COLOR();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentTextOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
