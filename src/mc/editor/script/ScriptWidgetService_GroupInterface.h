#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptWidgetGroup; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetService_GroupInterface {
public:
    // prevent constructor by default
    ScriptWidgetService_GroupInterface& operator=(ScriptWidgetService_GroupInterface const&);
    ScriptWidgetService_GroupInterface(ScriptWidgetService_GroupInterface const&);
    ScriptWidgetService_GroupInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::Scripting::Result<void, ::Scripting::Error>
        _groupDeleteGroup(::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetGroup>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::ScriptModule
