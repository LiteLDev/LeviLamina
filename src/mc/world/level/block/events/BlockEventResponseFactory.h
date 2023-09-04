#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/EventResponseFactory.h"

class BlockEventResponseFactory : public ::EventResponseFactory {
public:
    // prevent constructor by default
    BlockEventResponseFactory& operator=(BlockEventResponseFactory const&) = delete;
    BlockEventResponseFactory(BlockEventResponseFactory const&)            = delete;
    BlockEventResponseFactory()                                            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?initializeFactory@BlockEventResponseFactory@@UEAAXAEBVExperiments@@@Z
    virtual void initializeFactory(class Experiments const&);

    // vIndex: 2, symbol: ?initSchema@BlockEventResponseFactory@@UEAAXXZ
    virtual void initSchema();

    // symbol: ??1BlockEventResponseFactory@@UEAA@XZ
    MCVAPI ~BlockEventResponseFactory();

    // NOLINTEND
};
