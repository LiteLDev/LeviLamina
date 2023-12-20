#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SdpVideoFormat {
public:
    // prevent constructor by default
    SdpVideoFormat& operator=(SdpVideoFormat const&);
    SdpVideoFormat(SdpVideoFormat const&);
    SdpVideoFormat();

public:
    // NOLINTBEGIN
    // symbol: ?IsSameCodec@SdpVideoFormat@webrtc@@QEBA_NAEBU12@@Z
    MCAPI bool IsSameCodec(struct webrtc::SdpVideoFormat const&) const;

    // symbol:
    // ??0SdpVideoFormat@webrtc@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@3@@Z
    MCAPI SdpVideoFormat(std::string const&, std::map<std::string, std::string> const&);

    // symbol: ??1SdpVideoFormat@webrtc@@QEAA@XZ
    MCAPI ~SdpVideoFormat();

    // NOLINTEND
};

}; // namespace webrtc
