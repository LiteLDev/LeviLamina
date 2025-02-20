#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

namespace Editor::ScriptModule {

struct ScriptDataStoreModalToolActivationChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk562d63;
    ::ll::UntypedStorage<1, 1>  mUnkb7b492;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataStoreModalToolActivationChangedEvent& operator=(ScriptDataStoreModalToolActivationChangedEvent const&);
    ScriptDataStoreModalToolActivationChangedEvent(ScriptDataStoreModalToolActivationChangedEvent const&);
    ScriptDataStoreModalToolActivationChangedEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Editor::ScriptModule::ScriptDataStoreModalToolActivationChangedEvent&
    operator=(::Editor::ScriptModule::ScriptDataStoreModalToolActivationChangedEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<
        ::Editor::ScriptModule::ScriptDataStoreModalToolActivationChangedEvent>
    bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
