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
    ::ll::UntypedStorage<8, 8>   mUnk2405d5;
    ::ll::UntypedStorage<8, 112> mUnkb8ac67;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClientDiagnosticsListener& operator=(ScriptClientDiagnosticsListener const&);
    ScriptClientDiagnosticsListener(ScriptClientDiagnosticsListener const&);
    ScriptClientDiagnosticsListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptClientDiagnosticsListener() /*override*/ = default;

    virtual ::EventResult onDiagnostics(::DiagnosticsEvent const& diagnosticsEvent) /*override*/;
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
