#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class HttpInterface {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_HTTPINTERFACE
public:
    HttpInterface& operator=(HttpInterface const&) = delete;
    HttpInterface(HttpInterface const&)            = delete;
    HttpInterface()                                = delete;
#endif

public:
};

}; // namespace Bedrock::Http
