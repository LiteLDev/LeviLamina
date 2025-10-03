#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptCursorRay {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnkac357d;
    ::ll::UntypedStorage<4, 12> mUnk319c34;
    ::ll::UntypedStorage<4, 12> mUnk54949d;
    ::ll::UntypedStorage<1, 1>  mUnkeeedbd;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCursorRay& operator=(ScriptCursorRay const&);
    ScriptCursorRay(ScriptCursorRay const&);
    ScriptCursorRay();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
