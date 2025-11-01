#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptDataStoreModalToolActivationChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk562d63;
    ::ll::UntypedStorage<1, 1> mUnkb7b492;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataStoreModalToolActivationChangedEvent& operator=(ScriptDataStoreModalToolActivationChangedEvent const&);
    ScriptDataStoreModalToolActivationChangedEvent(ScriptDataStoreModalToolActivationChangedEvent const&);
    ScriptDataStoreModalToolActivationChangedEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptDataStoreModalToolActivationChangedEvent& operator=(::Editor::ScriptModule::ScriptDataStoreModalToolActivationChangedEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

};

}
