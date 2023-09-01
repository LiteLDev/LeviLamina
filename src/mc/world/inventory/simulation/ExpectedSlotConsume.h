#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"

struct ExpectedSlotConsume {
public:
    // prevent constructor by default
    ExpectedSlotConsume& operator=(ExpectedSlotConsume const&) = delete;
    ExpectedSlotConsume(ExpectedSlotConsume const&)            = delete;
    ExpectedSlotConsume()                                      = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0ExpectedSlotConsume@@QEAA@W4ContainerEnumName@@EAEBVItemStack@@E@Z
    MCAPI ExpectedSlotConsume(::ContainerEnumName, uchar, class ItemStack const&, uchar);

    // NOLINTEND
};
