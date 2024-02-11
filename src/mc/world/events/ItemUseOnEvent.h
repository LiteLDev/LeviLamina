#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemUseOnEvent {
public:
    // prevent constructor by default
    ItemUseOnEvent& operator=(ItemUseOnEvent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ItemUseOnEvent@@QEAA@XZ
    MCAPI ItemUseOnEvent();

    // symbol: ??0ItemUseOnEvent@@QEAA@$$QEAU0@@Z
    MCAPI ItemUseOnEvent(struct ItemUseOnEvent&&);

    // symbol: ??0ItemUseOnEvent@@QEAA@AEBU0@@Z
    MCAPI ItemUseOnEvent(struct ItemUseOnEvent const&);

    // symbol: ??1ItemUseOnEvent@@QEAA@XZ
    MCAPI ~ItemUseOnEvent();

    // NOLINTEND
};
