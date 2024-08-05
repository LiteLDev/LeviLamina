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
    MCAPI ~RequestHeader();

    // NOLINTEND
};

}; // namespace CodeBuilder
