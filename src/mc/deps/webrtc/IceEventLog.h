#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/IceCandidatePairConfigType.h"
#include "mc/deps/webrtc/IceCandidatePairEventType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceCandidatePairDescription; }
// clang-format on

namespace webrtc {

class IceEventLog {
public:
    // prevent constructor by default
    IceEventLog& operator=(IceEventLog const&);
    IceEventLog(IceEventLog const&);

public:
    // NOLINTBEGIN
    // symbol: ?DumpCandidatePairDescriptionToMemoryAsConfigEvents@IceEventLog@webrtc@@QEBAXXZ
    MCAPI void DumpCandidatePairDescriptionToMemoryAsConfigEvents() const;

    // symbol: ??0IceEventLog@webrtc@@QEAA@XZ
    MCAPI IceEventLog();

    // symbol:
    // ?LogCandidatePairConfig@IceEventLog@webrtc@@QEAAXW4IceCandidatePairConfigType@2@IAEBVIceCandidatePairDescription@2@@Z
    MCAPI void
    LogCandidatePairConfig(::webrtc::IceCandidatePairConfigType, uint, class webrtc::IceCandidatePairDescription const&);

    // symbol: ?LogCandidatePairEvent@IceEventLog@webrtc@@QEAAXW4IceCandidatePairEventType@2@II@Z
    MCAPI void LogCandidatePairEvent(::webrtc::IceCandidatePairEventType, uint, uint);

    // symbol: ??1IceEventLog@webrtc@@QEAA@XZ
    MCAPI ~IceEventLog();

    // NOLINTEND
};

}; // namespace webrtc
