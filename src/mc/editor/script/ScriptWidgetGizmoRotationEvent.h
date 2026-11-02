#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetGizmoRotationEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2303eb;
    ::ll::UntypedStorage<8, 32> mUnk126812;
    ::ll::UntypedStorage<4, 4>  mUnk488fb6;
    ::ll::UntypedStorage<4, 4>  mUnkee2458;
    ::ll::UntypedStorage<4, 4>  mUnk9c3b2c;
    ::ll::UntypedStorage<4, 4>  mUnkb8934c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetGizmoRotationEvent& operator=(ScriptWidgetGizmoRotationEvent const&);
    ScriptWidgetGizmoRotationEvent(ScriptWidgetGizmoRotationEvent const&);
    ScriptWidgetGizmoRotationEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
