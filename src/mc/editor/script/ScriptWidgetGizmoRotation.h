#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetGizmoRotation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk224148;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetGizmoRotation& operator=(ScriptWidgetGizmoRotation const&);
    ScriptWidgetGizmoRotation(ScriptWidgetGizmoRotation const&);
    ScriptWidgetGizmoRotation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<float> _getPreferredRingRadius() const;

    MCNAPI ::Scripting::Result_deprecated<float> _getVisualStepDegrees() const;

    MCNAPI ::Scripting::Result_deprecated<void> _setPreferredRingRadius(float radius);

    MCNAPI ::Scripting::Result_deprecated<void> _setVisualStepDegrees(float stepDegrees);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
