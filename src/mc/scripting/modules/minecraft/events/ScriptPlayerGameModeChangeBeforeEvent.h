#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptPlayerGameModeChangeAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerGameModeChangeBeforeEvent : public ::ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk78c7d3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerGameModeChangeBeforeEvent& operator=(ScriptPlayerGameModeChangeBeforeEvent const&);
    ScriptPlayerGameModeChangeBeforeEvent(ScriptPlayerGameModeChangeBeforeEvent const&);
    ScriptPlayerGameModeChangeBeforeEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
