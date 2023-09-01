#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace snappy {

class Source {
public:
    // prevent constructor by default
    Source& operator=(Source const&) = delete;
    Source(Source const&)            = delete;
    Source()                         = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1Source@snappy@@UEAA@XZ
    MCVAPI ~Source();

    // NOLINTEND
};

}; // namespace snappy
