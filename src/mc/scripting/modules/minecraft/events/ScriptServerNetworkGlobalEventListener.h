#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/scripting/modules/minecraft/Listener.h"

// auto generated inclusion list
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ServerNetworkEventListener.h"

// auto generated forward declare list
// clang-format off
struct ChatEvent;
struct MessageEvent;
namespace ScriptModuleMinecraft::ScriptGlobalEventListenerUtils { struct Listener; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptServerNetworkGlobalEventListener : public ::EventListenerDispatcher<::ServerNetworkEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptGlobalEventListenerUtils::Listener>>
        mListeners;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onEvent(::ChatEvent const& chatEvent) /*override*/;

    virtual ::EventResult onMessage(::MessageEvent const& messageEvent) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::ChatEvent const& chatEvent);

    MCAPI ::EventResult $onMessage(::MessageEvent const& messageEvent);


    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
