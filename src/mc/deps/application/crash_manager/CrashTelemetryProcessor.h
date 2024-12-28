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
    // prevent constructor by default
    CrashTelemetryProcessor& operator=(CrashTelemetryProcessor const&);
    CrashTelemetryProcessor(CrashTelemetryProcessor const&);
    CrashTelemetryProcessor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CrashTelemetryProcessor();

    // vIndex: 1
    virtual void sendCrashTelemetryNow(::std::shared_ptr<::Bedrock::SessionInfo>) = 0;

    // vIndex: 2
    virtual void addCrashTelemetryToBatch(::std::shared_ptr<::Bedrock::SessionInfo>) = 0;

    // vIndex: 3
    virtual void sendBatchedCrashTelemetry() = 0;

    // vIndex: 4
    virtual void sendCrashStatusTelemetry(::Bedrock::CrashUploadStatus const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
