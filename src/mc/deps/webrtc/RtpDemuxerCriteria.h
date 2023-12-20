#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpDemuxerCriteria {
public:
    // prevent constructor by default
    RtpDemuxerCriteria& operator=(RtpDemuxerCriteria const&);
    RtpDemuxerCriteria(RtpDemuxerCriteria const&);
    RtpDemuxerCriteria();

public:
    // NOLINTBEGIN
    // symbol: ??0RtpDemuxerCriteria@webrtc@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@0@Z
    MCAPI RtpDemuxerCriteria(std::string_view, std::string_view);

    // symbol:
    // ?ToString@RtpDemuxerCriteria@webrtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToString() const;

    // symbol: ??1RtpDemuxerCriteria@webrtc@@QEAA@XZ
    MCAPI ~RtpDemuxerCriteria();

    // NOLINTEND
};

}; // namespace webrtc
