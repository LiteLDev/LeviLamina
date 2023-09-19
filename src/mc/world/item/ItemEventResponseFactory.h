#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/EventResponseFactory.h"

class ItemEventResponseFactory : public ::EventResponseFactory {
public:
    // prevent constructor by default
    ItemEventResponseFactory& operator=(ItemEventResponseFactory const&);
    ItemEventResponseFactory(ItemEventResponseFactory const&);
    ItemEventResponseFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?initializeFactory@ItemEventResponseFactory@@UEAAXAEBVExperiments@@@Z
    virtual void initializeFactory(class Experiments const&);

    // vIndex: 2, symbol: ?initSchema@ItemEventResponseFactory@@UEAAXXZ
    virtual void initSchema();

    // NOLINTEND
};
