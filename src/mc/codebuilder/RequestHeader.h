#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct RequestHeader {

public:
    // prevent constructor by default
    RequestHeader& operator=(RequestHeader const&) = delete;
    RequestHeader(RequestHeader const&)            = delete;
    RequestHeader()                                = delete;

public:
    /**
     * @symbol ??1RequestHeader\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~RequestHeader(); // NOLINT
};

}; // namespace CodeBuilder
