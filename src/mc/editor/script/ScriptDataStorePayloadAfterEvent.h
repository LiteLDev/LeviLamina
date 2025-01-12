#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace Editor::ScriptModule {

struct ScriptDataStorePayloadAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk255610;
    ::ll::UntypedStorage<8, 32> mUnk6f78c0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataStorePayloadAfterEvent& operator=(ScriptDataStorePayloadAfterEvent const&);
    ScriptDataStorePayloadAfterEvent(ScriptDataStorePayloadAfterEvent const&);
    ScriptDataStorePayloadAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::Editor::ScriptModule::ScriptDataStorePayloadAfterEvent&
    operator=(::Editor::ScriptModule::ScriptDataStorePayloadAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptDataStorePayloadAfterEvent> bind();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
