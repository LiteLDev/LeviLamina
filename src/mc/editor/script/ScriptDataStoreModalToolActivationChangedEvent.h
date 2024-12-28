#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

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
    MCAPI ScriptDataStoreModalToolActivationChangedEvent(::std::optional<::std::string> toolId, bool isActive);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<
        ::Editor::ScriptModule::ScriptDataStoreModalToolActivationChangedEvent>
    bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::optional<::std::string> toolId, bool isActive);
    // NOLINTEND
};

} // namespace Editor::ScriptModule
