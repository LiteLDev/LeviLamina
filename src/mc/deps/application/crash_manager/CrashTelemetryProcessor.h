#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class SessionInfo; }
namespace Bedrock { struct CrashUploadStatus; }
// clang-format on

namespace Bedrock {

class CrashTelemetryProcessor {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CrashTelemetryProcessor() = default;

    virtual void sendCrashTelemetryNow(::std::shared_ptr<::Bedrock::SessionInfo>) = 0;

    virtual void addCrashTelemetryToBatch(::std::shared_ptr<::Bedrock::SessionInfo>) = 0;

    virtual void sendBatchedCrashTelemetry() = 0;

    virtual void sendCrashStatusTelemetry(::Bedrock::CrashUploadStatus const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
