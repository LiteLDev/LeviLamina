#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct VideoRecvParameters {
public:
    // prevent constructor by default
    VideoRecvParameters& operator=(VideoRecvParameters const&);
    VideoRecvParameters(VideoRecvParameters const&);
    VideoRecvParameters();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1VideoRecvParameters@cricket@@UEAA@XZ
    virtual ~VideoRecvParameters();

    // vIndex: 1, symbol:
    // ?ToStringMap@?$RtpParameters@UVideoCodec@cricket@@@cricket@@MEBA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
    virtual std::map<std::string, std::string> ToStringMap() const;

    // NOLINTEND
};

}; // namespace cricket
