#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

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
    MCNAPI ::Editor::ScriptModule::ScriptCurrentThemeChangeAfterEvent&
    operator=(::Editor::ScriptModule::ScriptCurrentThemeChangeAfterEvent&&);

    MCNAPI ~ScriptCurrentThemeChangeAfterEvent();
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

} // namespace Editor::ScriptModule
