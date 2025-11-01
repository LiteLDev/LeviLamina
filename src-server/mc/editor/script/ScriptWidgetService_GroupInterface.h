#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

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
    // vIndex: 0
    virtual ::Scripting::Result_deprecated<void>
        _groupDeleteGroup(::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetGroup>) = 0;

    // vIndex: 1
    virtual ::AABB const& _getDimensionBounds() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::ScriptModule
