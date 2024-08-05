#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyEventItemComponentData {
public:
    // prevent constructor by default
    LegacyEventItemComponentData& operator=(LegacyEventItemComponentData const&);
    LegacyEventItemComponentData(LegacyEventItemComponentData const&);
    LegacyEventItemComponentData();

public:
    // NOLINTBEGIN
    MCAPI ~LegacyEventItemComponentData();

    // NOLINTEND
};
