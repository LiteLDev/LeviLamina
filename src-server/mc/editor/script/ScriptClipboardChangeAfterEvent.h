#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptClipboardChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf2b100;
    ::ll::UntypedStorage<1, 1> mUnk1d9702;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClipboardChangeAfterEvent& operator=(ScriptClipboardChangeAfterEvent const&);
    ScriptClipboardChangeAfterEvent(ScriptClipboardChangeAfterEvent const&);
    ScriptClipboardChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptClipboardChangeAfterEvent& operator=(::Editor::ScriptModule::ScriptClipboardChangeAfterEvent&&);

    MCNAPI ~ScriptClipboardChangeAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
