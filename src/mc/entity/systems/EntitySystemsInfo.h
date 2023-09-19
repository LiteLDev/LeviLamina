#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EntitySystemsInfo {
public:
    // prevent constructor by default
    EntitySystemsInfo& operator=(EntitySystemsInfo const&);
    EntitySystemsInfo(EntitySystemsInfo const&);
    EntitySystemsInfo();

public:
    // NOLINTBEGIN
    // symbol: ?bindType@EntitySystemsInfo@@SAXXZ
    MCAPI static void bindType();

    // NOLINTEND
};
