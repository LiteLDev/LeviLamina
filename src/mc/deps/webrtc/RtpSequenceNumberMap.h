#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpSequenceNumberMap {
public:
    // RtpSequenceNumberMap inner types declare
    // clang-format off
    struct Info;
    // clang-format on

    // RtpSequenceNumberMap inner types define
    struct Info {
    public:
        // prevent constructor by default
        Info& operator=(Info const&);
        Info(Info const&);
        Info();
    };

public:
    // prevent constructor by default
    RtpSequenceNumberMap& operator=(RtpSequenceNumberMap const&);
    RtpSequenceNumberMap(RtpSequenceNumberMap const&);
    RtpSequenceNumberMap();

public:
    // NOLINTBEGIN
    // symbol: ?Get@RtpSequenceNumberMap@webrtc@@QEBA?AV?$optional@UInfo@RtpSequenceNumberMap@webrtc@@@std@@G@Z
    MCAPI std::optional<struct webrtc::RtpSequenceNumberMap::Info> Get(ushort) const;

    // symbol: ?InsertPacket@RtpSequenceNumberMap@webrtc@@QEAAXGUInfo@12@@Z
    MCAPI void InsertPacket(ushort, struct webrtc::RtpSequenceNumberMap::Info);

    // symbol: ??0RtpSequenceNumberMap@webrtc@@QEAA@_K@Z
    MCAPI explicit RtpSequenceNumberMap(uint64);

    // symbol: ??1RtpSequenceNumberMap@webrtc@@QEAA@XZ
    MCAPI ~RtpSequenceNumberMap();

    // NOLINTEND
};

}; // namespace webrtc
