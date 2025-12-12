#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptItemUseAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseBeforeEvent : public ::ScriptModuleMinecraft::ScriptItemUseAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk5a2182;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemUseBeforeEvent& operator=(ScriptItemUseBeforeEvent const&);
    ScriptItemUseBeforeEvent(ScriptItemUseBeforeEvent const&);
    ScriptItemUseBeforeEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
