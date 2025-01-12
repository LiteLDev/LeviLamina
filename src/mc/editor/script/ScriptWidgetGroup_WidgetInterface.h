#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetErrorInvalidObject; }
namespace Editor::ScriptModule { class ScriptWidgetGroupErrorInvalidObject; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetGroup_WidgetInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject,
        ::Editor::ScriptModule::ScriptWidgetGroupErrorInvalidObject,
        ::Scripting::Error>
        _deleteWidget(::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::ScriptModule
