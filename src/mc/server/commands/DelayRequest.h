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

    // symbol: ?executeAction@DelayRequest@@QEAAXAEAVServerLevel@@AEAVDimension@@@Z
    MCAPI void executeAction(class ServerLevel& level, class Dimension& dimension);

    // symbol: ?getAction@DelayRequest@@QEBA?AV?$not_null@PEAVIRequestAction@@@gsl@@XZ
    MCAPI gsl::not_null<class IRequestAction*> getAction() const;

    // symbol: ?getTickToExecuteOn@DelayRequest@@QEBA_KXZ
    MCAPI uint64 getTickToExecuteOn() const;

    // symbol: ??ODelayRequest@@QEBA_NAEBV0@@Z
    MCAPI bool operator>(class DelayRequest const& rhs) const;

    // symbol: ??1DelayRequest@@QEAA@XZ
    MCAPI ~DelayRequest();

    // NOLINTEND
};
