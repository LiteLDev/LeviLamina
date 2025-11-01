#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentGizmoStateChangeEventParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk80179b;
    ::ll::UntypedStorage<8, 32> mUnk297c41;
    ::ll::UntypedStorage<4, 8> mUnk881eed;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentGizmoStateChangeEventParameters& operator=(ScriptWidgetComponentGizmoStateChangeEventParameters const&);
    ScriptWidgetComponentGizmoStateChangeEventParameters(ScriptWidgetComponentGizmoStateChangeEventParameters const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetComponentGizmoStateChangeEventParameters();

    MCNAPI ::Editor::ScriptModule::ScriptWidgetComponentGizmoStateChangeEventParameters& operator=(::Editor::ScriptModule::ScriptWidgetComponentGizmoStateChangeEventParameters&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

};

}
