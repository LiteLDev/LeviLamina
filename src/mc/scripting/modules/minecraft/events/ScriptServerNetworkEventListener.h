#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class ServerNetworkEventListener;
struct ChatEvent;
struct MessageEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptServerNetworkEventListener : public ::EventListenerDispatcher<::ServerNetworkEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkab21db;
    ::ll::UntypedStorage<8, 16> mUnk45e805;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptServerNetworkEventListener& operator=(ScriptServerNetworkEventListener const&);
    ScriptServerNetworkEventListener(ScriptServerNetworkEventListener const&);
    ScriptServerNetworkEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual ::EventResult onEvent(::ChatEvent const& chatEvent) /*override*/;

    // vIndex: 2
    virtual ::EventResult onMessage(::MessageEvent const& messageEvent) /*override*/;

    // vIndex: 0
    virtual ~ScriptServerNetworkEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::ChatEvent const& chatEvent);

    MCNAPI ::EventResult $onMessage(::MessageEvent const& messageEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
