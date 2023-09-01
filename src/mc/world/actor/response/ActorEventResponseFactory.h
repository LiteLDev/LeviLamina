#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorEventResponseFactory {
public:
    // prevent constructor by default
    ActorEventResponseFactory& operator=(ActorEventResponseFactory const&) = delete;
    ActorEventResponseFactory(ActorEventResponseFactory const&)            = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1ActorEventResponseFactory@@UEAA@XZ
    MCVAPI ~ActorEventResponseFactory();

    // symbol: ??0ActorEventResponseFactory@@QEAA@XZ
    MCAPI ActorEventResponseFactory();

    // symbol: ?initSchema@ActorEventResponseFactory@@QEAAXXZ
    MCAPI void initSchema();

    // symbol: ?initializeFactory@ActorEventResponseFactory@@QEAAXAEBVExperiments@@@Z
    MCAPI void initializeFactory(class Experiments const&);

    // NOLINTEND
};
