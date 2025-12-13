#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptChatSendAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptChatSendBeforeEvent : public ::ScriptModuleMinecraft::ScriptChatSendAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk920bb0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptChatSendBeforeEvent& operator=(ScriptChatSendBeforeEvent const&);
    ScriptChatSendBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptChatSendBeforeEvent(::ScriptModuleMinecraft::ScriptChatSendBeforeEvent const&);

    MCNAPI ::ScriptModuleMinecraft::ScriptChatSendBeforeEvent&
    operator=(::ScriptModuleMinecraft::ScriptChatSendBeforeEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptChatSendBeforeEvent const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
