#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct VideoSendParameters {
public:
    // prevent constructor by default
    VideoSendParameters& operator=(VideoSendParameters const&);
    VideoSendParameters(VideoSendParameters const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1VideoSendParameters@cricket@@UEAA@XZ
    virtual ~VideoSendParameters();

    // vIndex: 1, symbol:
    // ?ToStringMap@VideoSendParameters@cricket@@MEBA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
    virtual std::map<std::string, std::string> ToStringMap() const;

    // symbol: ??0VideoSendParameters@cricket@@QEAA@XZ
    MCAPI VideoSendParameters();

    // NOLINTEND
};

}; // namespace cricket
