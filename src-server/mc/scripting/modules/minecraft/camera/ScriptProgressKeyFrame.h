#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProgressKeyFrame {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkda262a;
    ::ll::UntypedStorage<4, 4> mUnk7e639d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProgressKeyFrame& operator=(ScriptProgressKeyFrame const&);
    ScriptProgressKeyFrame(ScriptProgressKeyFrame const&);
    ScriptProgressKeyFrame();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

};

}
