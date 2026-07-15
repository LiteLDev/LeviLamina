#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class AABB;
namespace Editor::ScriptModule { class ScriptWidgetGroup; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetService_GroupInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Scripting::Result_deprecated<void>
        _groupDeleteGroup(::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetGroup>) = 0;

    virtual ::AABB const& _getDimensionBounds() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::ScriptModule
