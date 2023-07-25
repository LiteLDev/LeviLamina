#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct RequestHeader {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDER_REQUESTHEADER
public:
    RequestHeader& operator=(RequestHeader const&) = delete;
    RequestHeader(RequestHeader const&)            = delete;
    RequestHeader()                                = delete;
#endif

public:
    /**
     * @symbol ??1RequestHeader\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~RequestHeader();
};

}; // namespace CodeBuilder
