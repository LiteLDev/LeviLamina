#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace Editor::ScriptModule {

struct ScriptClipboardChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf2b100;
    ::ll::UntypedStorage<1, 1>  mUnk1d9702;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClipboardChangeAfterEvent& operator=(ScriptClipboardChangeAfterEvent const&);
    ScriptClipboardChangeAfterEvent(ScriptClipboardChangeAfterEvent const&);
    ScriptClipboardChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::Editor::ScriptModule::ScriptClipboardChangeAfterEvent&
    operator=(::Editor::ScriptModule::ScriptClipboardChangeAfterEvent&&);

    MCAPI ~ScriptClipboardChangeAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptClipboardChangeAfterEvent> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
