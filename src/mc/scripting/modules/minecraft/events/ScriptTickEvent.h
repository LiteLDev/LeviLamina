#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptTickEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk87b2e4;
    ::ll::UntypedStorage<4, 4> mUnkb1f82f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTickEvent& operator=(ScriptTickEvent const&);
    ScriptTickEvent(ScriptTickEvent const&);
    ScriptTickEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
