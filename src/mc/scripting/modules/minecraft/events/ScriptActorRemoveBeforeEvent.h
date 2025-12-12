#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorRemoveBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb81c95;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorRemoveBeforeEvent& operator=(ScriptActorRemoveBeforeEvent const&);
    ScriptActorRemoveBeforeEvent(ScriptActorRemoveBeforeEvent const&);
    ScriptActorRemoveBeforeEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
