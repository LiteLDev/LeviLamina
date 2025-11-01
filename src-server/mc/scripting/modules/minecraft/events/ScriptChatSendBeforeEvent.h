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
    ::ll::TypedStorage<1, 1, bool> mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptChatSendBeforeEvent& operator=(ScriptChatSendBeforeEvent const&);
    ScriptChatSendBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptChatSendBeforeEvent(::ScriptModuleMinecraft::ScriptChatSendBeforeEvent const&);

    MCAPI ::ScriptModuleMinecraft::ScriptChatSendBeforeEvent& operator=(::ScriptModuleMinecraft::ScriptChatSendBeforeEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptChatSendBeforeEvent const&);
    // NOLINTEND

};

}
