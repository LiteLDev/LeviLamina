#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct SentryEnvelope;
// clang-format on

namespace ScriptModuleDiagnostics {

class IScriptSentryRequestSender {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IScriptSentryRequestSender() = default;

    // vIndex: 1
    virtual void sendRequest(::SentryEnvelope) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
