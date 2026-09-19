#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ServerNetworkEventListener.h"

// auto generated forward declare list
// clang-format off
class ServerNetworkEventCoordinator;
struct DiagnosticsEvent;
// clang-format on

class DebuggerClientDiagnosticsListener : public ::ServerNetworkEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkb180f9;
    ::ll::UntypedStorage<8, 216> mUnkf772fe;
    // NOLINTEND

public:
    // prevent constructor by default
    DebuggerClientDiagnosticsListener& operator=(DebuggerClientDiagnosticsListener const&);
    DebuggerClientDiagnosticsListener(DebuggerClientDiagnosticsListener const&);
    DebuggerClientDiagnosticsListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DebuggerClientDiagnosticsListener() /*override*/ = default;

    virtual ::EventResult onDiagnostics(::DiagnosticsEvent const& diagnosticsEvent) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DebuggerClientDiagnosticsListener(::ServerNetworkEventCoordinator& networkEventCoordinator);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerNetworkEventCoordinator& networkEventCoordinator);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onDiagnostics(::DiagnosticsEvent const& diagnosticsEvent);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
