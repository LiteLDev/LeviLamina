#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace snappy {

class Source {
public:
    // prevent constructor by default
    Source& operator=(Source const&);
    Source(Source const&);
    Source();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Source();

    // NOLINTEND
};

}; // namespace snappy
