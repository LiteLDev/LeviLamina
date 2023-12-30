#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FieldTrialParameterInterface {
public:
    // prevent constructor by default
    FieldTrialParameterInterface& operator=(FieldTrialParameterInterface const&);
    FieldTrialParameterInterface(FieldTrialParameterInterface const&);
    FieldTrialParameterInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FieldTrialParameterInterface@webrtc@@UEAA@XZ
    virtual ~FieldTrialParameterInterface();

    // vIndex: 1, symbol:
    // ?Parse@?$FieldTrialConstrained@H@webrtc@@MEAA_NV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    virtual bool Parse(std::optional<std::string>) = 0;

    // vIndex: 2, symbol: ?ParseDone@FieldTrialParameterInterface@webrtc@@MEAAXXZ
    virtual void ParseDone();

    // vIndex: 3, symbol: ?Size@?$FieldTrialList@N@webrtc@@MEAAHXZ
    virtual int Size();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0FieldTrialParameterInterface@webrtc@@IEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI explicit FieldTrialParameterInterface(std::string_view);

    // NOLINTEND
};

}; // namespace webrtc
