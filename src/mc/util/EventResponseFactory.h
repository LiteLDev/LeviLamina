#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EventResponseFactory {
public:
    // prevent constructor by default
    EventResponseFactory& operator=(EventResponseFactory const&);
    EventResponseFactory(EventResponseFactory const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1EventResponseFactory@@UEAA@XZ
    virtual ~EventResponseFactory();

    // vIndex: 1, symbol: ?initializeFactory@BlockEventResponseFactory@@UEAAXAEBVExperiments@@@Z
    virtual void initializeFactory(class Experiments const&) = 0;

    // vIndex: 2, symbol: ?initSchema@BlockEventResponseFactory@@UEAAXXZ
    virtual void initSchema() = 0;

    // symbol: ??0EventResponseFactory@@QEAA@XZ
    MCAPI EventResponseFactory();

    // symbol:
    // ?initSchema@EventResponseFactory@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@@Z
    MCAPI void initSchema(std::string const&, class SemVersion const& version);

    // NOLINTEND
};
