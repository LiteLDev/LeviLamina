#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct AudioRecvParameters {
public:
    // prevent constructor by default
    AudioRecvParameters& operator=(AudioRecvParameters const&);
    AudioRecvParameters(AudioRecvParameters const&);
    AudioRecvParameters();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AudioRecvParameters@cricket@@UEAA@XZ
    virtual ~AudioRecvParameters();

    // vIndex: 1, symbol:
    // ?ToStringMap@?$RtpParameters@UAudioCodec@cricket@@@cricket@@MEBA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
    virtual std::map<std::string, std::string> ToStringMap() const;

    // NOLINTEND
};

}; // namespace cricket
