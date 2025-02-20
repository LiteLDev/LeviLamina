#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/editor/script/ScriptWidgetComponentBaseOptions.h"

namespace Editor::ScriptModule {

class ScriptWidgetComponentEntityOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk5d2487;
    ::ll::UntypedStorage<8, 40> mUnk681d5f;
    ::ll::UntypedStorage<8, 40> mUnk7e3143;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentEntityOptions& operator=(ScriptWidgetComponentEntityOptions const&);
    ScriptWidgetComponentEntityOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWidgetComponentEntityOptions(::Editor::ScriptModule::ScriptWidgetComponentEntityOptions&&);

    MCAPI ScriptWidgetComponentEntityOptions(::Editor::ScriptModule::ScriptWidgetComponentEntityOptions const&);

    MCAPI ::Editor::ScriptModule::ScriptWidgetComponentEntityOptions&
    operator=(::Editor::ScriptModule::ScriptWidgetComponentEntityOptions&&);

    MCAPI ~ScriptWidgetComponentEntityOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentEntityOptions>
    bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentEntityOptions&&);

    MCAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentEntityOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
