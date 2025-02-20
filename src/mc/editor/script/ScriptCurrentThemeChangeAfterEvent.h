#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

namespace Editor::ScriptModule {

struct ScriptCurrentThemeChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcec87f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCurrentThemeChangeAfterEvent& operator=(ScriptCurrentThemeChangeAfterEvent const&);
    ScriptCurrentThemeChangeAfterEvent(ScriptCurrentThemeChangeAfterEvent const&);
    ScriptCurrentThemeChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::Editor::ScriptModule::ScriptCurrentThemeChangeAfterEvent&
    operator=(::Editor::ScriptModule::ScriptCurrentThemeChangeAfterEvent&&);

    MCAPI ~ScriptCurrentThemeChangeAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptCurrentThemeChangeAfterEvent> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
