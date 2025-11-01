#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptCurrentThemeColorChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke95fb6;
    ::ll::UntypedStorage<4, 24> mUnkf7d0e7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCurrentThemeColorChangeAfterEvent& operator=(ScriptCurrentThemeColorChangeAfterEvent const&);
    ScriptCurrentThemeColorChangeAfterEvent(ScriptCurrentThemeColorChangeAfterEvent const&);
    ScriptCurrentThemeColorChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptCurrentThemeColorChangeAfterEvent& operator=(::Editor::ScriptModule::ScriptCurrentThemeColorChangeAfterEvent&&);

    MCNAPI ~ScriptCurrentThemeColorChangeAfterEvent();
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
