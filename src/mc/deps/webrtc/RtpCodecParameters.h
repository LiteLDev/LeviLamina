#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpCodecParameters {
public:
    // prevent constructor by default
    RtpCodecParameters& operator=(RtpCodecParameters const&);

public:
    // NOLINTBEGIN
    // symbol: ??0RtpCodecParameters@webrtc@@QEAA@XZ
    MCAPI RtpCodecParameters();

    // symbol: ??0RtpCodecParameters@webrtc@@QEAA@AEBU01@@Z
    MCAPI RtpCodecParameters(struct webrtc::RtpCodecParameters const&);

    // symbol:
    // ?mime_type@RtpCodecParameters@webrtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string mime_type() const;

    // symbol: ??8RtpCodecParameters@webrtc@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct webrtc::RtpCodecParameters const&) const;

    // symbol: ??1RtpCodecParameters@webrtc@@QEAA@XZ
    MCAPI ~RtpCodecParameters();

    // NOLINTEND
};

}; // namespace webrtc
