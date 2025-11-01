#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

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
    MCNAPI ::Editor::ScriptModule::ScriptDataStorePayloadAfterEvent& operator=(::Editor::ScriptModule::ScriptDataStorePayloadAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

};

}
