#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ServerNetworkEventListener.h"

// auto generated forward declare list
// clang-format off
struct DiagnosticsEvent;
// clang-format on

class ScriptClientDiagnosticsListener : public ::ServerNetworkEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnkb8ac67;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClientDiagnosticsListener& operator=(ScriptClientDiagnosticsListener const&);
    ScriptClientDiagnosticsListener(ScriptClientDiagnosticsListener const&);
    ScriptClientDiagnosticsListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptClientDiagnosticsListener() /*override*/ = default;

    // vIndex: 3
    virtual ::EventResult onDiagnostics(::DiagnosticsEvent const& diagnosticsEvent) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onDiagnostics(::DiagnosticsEvent const& diagnosticsEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
