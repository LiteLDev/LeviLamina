#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorEventResponseFactory {
public:
    // prevent constructor by default
    ActorEventResponseFactory& operator=(ActorEventResponseFactory const&);
    ActorEventResponseFactory(ActorEventResponseFactory const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorEventResponseFactory@@UEAA@XZ
    virtual ~ActorEventResponseFactory();

    // symbol: ??0ActorEventResponseFactory@@QEAA@XZ
    MCAPI ActorEventResponseFactory();

    // symbol: ?initSchema@ActorEventResponseFactory@@QEAAXXZ
    MCAPI void initSchema();

    // symbol: ?initializeFactory@ActorEventResponseFactory@@QEAAXAEBVExperiments@@@Z
    MCAPI void initializeFactory(class Experiments const& experiments);

    // NOLINTEND
};
