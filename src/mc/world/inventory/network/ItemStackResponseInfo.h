#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStackResponseInfo {
public:
    // prevent constructor by default
    ItemStackResponseInfo& operator=(ItemStackResponseInfo const&);
    ItemStackResponseInfo(ItemStackResponseInfo const&);

public:
    // NOLINTBEGIN
    MCAPI ItemStackResponseInfo();

    MCAPI ItemStackResponseInfo(struct ItemStackResponseInfo&&);

    MCAPI ~ItemStackResponseInfo();

    // NOLINTEND
};
