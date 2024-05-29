#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class OSError {
public:
    // prevent constructor by default
    OSError& operator=(OSError const&);
    OSError(OSError const&);
    OSError();

public:
    // NOLINTBEGIN
    // symbol: ??0OSError@Bedrock@@QEAA@AEBVerror_code@std@@@Z
    MCAPI explicit OSError(std::error_code const&);

    // symbol: ??0OSError@Bedrock@@QEAA@W4errc@std@@@Z
    MCAPI explicit OSError(std::errc);

    // NOLINTEND
};

}; // namespace Bedrock
