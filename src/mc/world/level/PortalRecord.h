#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PortalRecord {

public:
    // prevent constructor by default
    PortalRecord& operator=(PortalRecord const&) = delete;
    PortalRecord(PortalRecord const&)            = delete;
    PortalRecord()                               = delete;
};
