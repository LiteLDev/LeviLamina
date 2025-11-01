#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/diagnostics/IScriptSentryRequestSender.h"

// auto generated forward declare list
// clang-format off
struct SentryEnvelope;
// clang-format on

namespace ScriptModuleDiagnostics {

class MinecraftScriptSentryRequestSender : public ::ScriptModuleDiagnostics::IScriptSentryRequestSender {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 120> mUnkfa069e;
    ::ll::UntypedStorage<8, 32> mUnk646b87;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftScriptSentryRequestSender& operator=(MinecraftScriptSentryRequestSender const&);
    MinecraftScriptSentryRequestSender(MinecraftScriptSentryRequestSender const&);
    MinecraftScriptSentryRequestSender();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void sendRequest(::SentryEnvelope sentryEvent) /*override*/;

    // vIndex: 0
    virtual ~MinecraftScriptSentryRequestSender() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $sendRequest(::SentryEnvelope sentryEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
