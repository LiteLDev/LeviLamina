#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStackResponseInfo {
public:
    // prevent constructor by default
    ItemStackResponseInfo& operator=(ItemStackResponseInfo const&);
    ItemStackResponseInfo(ItemStackResponseInfo const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ItemStackResponseInfo@@QEAA@XZ
    MCAPI ItemStackResponseInfo();

    // symbol: ??0ItemStackResponseInfo@@QEAA@$$QEAU0@@Z
    MCAPI ItemStackResponseInfo(struct ItemStackResponseInfo&&);

    // symbol: ??1ItemStackResponseInfo@@QEAA@XZ
    MCAPI ~ItemStackResponseInfo();

    // NOLINTEND
};
