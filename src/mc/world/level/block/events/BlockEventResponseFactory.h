#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/EventResponseFactory.h"

class BlockEventResponseFactory : public ::EventResponseFactory {
public:
    // prevent constructor by default
    BlockEventResponseFactory& operator=(BlockEventResponseFactory const&);
    BlockEventResponseFactory(BlockEventResponseFactory const&);
    BlockEventResponseFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockEventResponseFactory@@UEAA@XZ
    virtual ~BlockEventResponseFactory();

    // vIndex: 1, symbol: ?initializeFactory@BlockEventResponseFactory@@UEAAXAEBVExperiments@@@Z
    virtual void initializeFactory(class Experiments const& experiments);

    // vIndex: 2, symbol: ?initSchema@BlockEventResponseFactory@@UEAAXXZ
    virtual void initSchema();

    // NOLINTEND
};
