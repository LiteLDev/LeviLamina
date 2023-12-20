#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct AudioSendParameters {
public:
    // prevent constructor by default
    AudioSendParameters& operator=(AudioSendParameters const&);
    AudioSendParameters(AudioSendParameters const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AudioSendParameters@cricket@@UEAA@XZ
    virtual ~AudioSendParameters();

    // vIndex: 1, symbol:
    // ?ToStringMap@AudioSendParameters@cricket@@MEBA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
    virtual std::map<std::string, std::string> ToStringMap() const;

    // symbol: ??0AudioSendParameters@cricket@@QEAA@XZ
    MCAPI AudioSendParameters();

    // NOLINTEND
};

}; // namespace cricket
