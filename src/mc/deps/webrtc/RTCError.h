#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RTCErrorType.h"

namespace webrtc {

class RTCError {
public:
    // prevent constructor by default
    RTCError& operator=(RTCError const&);
    RTCError(RTCError const&);
    RTCError();

public:
    // NOLINTBEGIN
    // symbol: ??0RTCError@webrtc@@QEAA@W4RTCErrorType@1@@Z
    MCAPI explicit RTCError(::webrtc::RTCErrorType);

    // symbol:
    // ??0RTCError@webrtc@@QEAA@W4RTCErrorType@1@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI RTCError(::webrtc::RTCErrorType, std::string);

    // symbol: ?message@RTCError@webrtc@@QEBAPEBDXZ
    MCAPI char const* message() const;

    // symbol: ??4RTCError@webrtc@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class webrtc::RTCError& operator=(class webrtc::RTCError&&);

    // symbol: ?set_message@RTCError@webrtc@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void set_message(std::string);

    // symbol: ??1RTCError@webrtc@@QEAA@XZ
    MCAPI ~RTCError();

    // symbol: ?OK@RTCError@webrtc@@SA?AV12@XZ
    MCAPI static class webrtc::RTCError OK();

    // NOLINTEND
};

}; // namespace webrtc
