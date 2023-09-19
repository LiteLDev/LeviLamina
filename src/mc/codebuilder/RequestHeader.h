#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct RequestHeader {
public:
    // prevent constructor by default
    RequestHeader& operator=(RequestHeader const&);
    RequestHeader(RequestHeader const&);
    RequestHeader();

public:
    // NOLINTBEGIN
    // symbol: ??1RequestHeader@CodeBuilder@@QEAA@XZ
    MCAPI ~RequestHeader();

    // NOLINTEND
};

}; // namespace CodeBuilder
