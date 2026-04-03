#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentBoundingBoxLimit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk1f3915;
    ::ll::UntypedStorage<4, 12> mUnk6d7d3b;
    ::ll::UntypedStorage<4, 8>  mUnk61a9d8;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentBoundingBoxLimit& operator=(ScriptWidgetComponentBoundingBoxLimit const&);
    ScriptWidgetComponentBoundingBoxLimit(ScriptWidgetComponentBoundingBoxLimit const&);
    ScriptWidgetComponentBoundingBoxLimit();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
