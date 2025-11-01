#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentBoundingBoxStateChangeEventParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6f4b77;
    ::ll::UntypedStorage<8, 32> mUnk9c4560;
    ::ll::UntypedStorage<4, 4> mUnk8c0d68;
    ::ll::UntypedStorage<4, 16> mUnk6f3b80;
    ::ll::UntypedStorage<4, 16> mUnk116917;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentBoundingBoxStateChangeEventParameters& operator=(ScriptWidgetComponentBoundingBoxStateChangeEventParameters const&);
    ScriptWidgetComponentBoundingBoxStateChangeEventParameters(ScriptWidgetComponentBoundingBoxStateChangeEventParameters const&);
    ScriptWidgetComponentBoundingBoxStateChangeEventParameters();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptWidgetComponentBoundingBoxStateChangeEventParameters& operator=(::Editor::ScriptModule::ScriptWidgetComponentBoundingBoxStateChangeEventParameters&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

};

}
