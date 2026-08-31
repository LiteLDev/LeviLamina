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
#ifdef LL_PLAT_S
    virtual ~CrashTelemetryProcessor() = default;
#else // LL_PLAT_C
    virtual ~CrashTelemetryProcessor();
#endif

    virtual void sendCrashTelemetryNow(::std::shared_ptr<::Bedrock::SessionInfo> session) = 0;

    virtual void addCrashTelemetryToBatch(::std::shared_ptr<::Bedrock::SessionInfo> session) = 0;

    virtual void sendBatchedCrashTelemetry() = 0;

    virtual void sendCrashStatusTelemetry(::Bedrock::CrashUploadStatus const& status) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Bedrock
