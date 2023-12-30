#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/SSLRole.h"

namespace webrtc {

class SctpSidAllocator {
public:
    // prevent constructor by default
    SctpSidAllocator& operator=(SctpSidAllocator const&);
    SctpSidAllocator(SctpSidAllocator const&);
    SctpSidAllocator();

public:
    // NOLINTBEGIN
    // symbol: ?AllocateSid@SctpSidAllocator@webrtc@@QEAA_NW4SSLRole@rtc@@PEAH@Z
    MCAPI bool AllocateSid(::rtc::SSLRole, int*);

    // symbol: ?ReleaseSid@SctpSidAllocator@webrtc@@QEAAXH@Z
    MCAPI void ReleaseSid(int);

    // symbol: ?ReserveSid@SctpSidAllocator@webrtc@@QEAA_NH@Z
    MCAPI bool ReserveSid(int);

    // symbol: ??1SctpSidAllocator@webrtc@@QEAA@XZ
    MCAPI ~SctpSidAllocator();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?IsSidAvailable@SctpSidAllocator@webrtc@@AEBA_NH@Z
    MCAPI bool IsSidAvailable(int) const;

    // NOLINTEND
};

}; // namespace webrtc
