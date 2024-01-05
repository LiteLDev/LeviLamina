#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DelayRequest {
public:
    // prevent constructor by default
    DelayRequest& operator=(DelayRequest const&);
    DelayRequest(DelayRequest const&);
    DelayRequest();

public:
    // NOLINTBEGIN
    // symbol: ??0DelayRequest@@QEAA@V?$unique_ptr@VIRequestAction@@U?$default_delete@VIRequestAction@@@std@@@std@@_K@Z
    MCAPI DelayRequest(std::unique_ptr<class IRequestAction> action, uint64);

    // symbol: ??1DelayRequest@@QEAA@XZ
    MCAPI ~DelayRequest();

    // NOLINTEND
};
