#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SerialWorkListLogEntry {
public:
    // prevent constructor by default
    SerialWorkListLogEntry& operator=(SerialWorkListLogEntry const&);
    SerialWorkListLogEntry(SerialWorkListLogEntry const&);
    SerialWorkListLogEntry();
};
