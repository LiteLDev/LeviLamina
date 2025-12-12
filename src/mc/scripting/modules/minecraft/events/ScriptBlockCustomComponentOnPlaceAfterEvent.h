#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentOnPlaceAfterEventIntermediateStorage; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentOnPlaceAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent,
                                                     public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk379e9b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentOnPlaceAfterEvent& operator=(ScriptBlockCustomComponentOnPlaceAfterEvent const&);
    ScriptBlockCustomComponentOnPlaceAfterEvent(ScriptBlockCustomComponentOnPlaceAfterEvent const&);
    ScriptBlockCustomComponentOnPlaceAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
