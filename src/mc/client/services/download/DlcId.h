#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DlcId {
public:
    // prevent constructor by default
    DlcId& operator=(DlcId const&);
    DlcId(DlcId const&);
    DlcId();
};
