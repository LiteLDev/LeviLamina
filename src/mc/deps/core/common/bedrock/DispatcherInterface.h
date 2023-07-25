#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class DispatcherInterface {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_DISPATCHERINTERFACE
public:
    DispatcherInterface& operator=(DispatcherInterface const&) = delete;
    DispatcherInterface(DispatcherInterface const&)            = delete;
    DispatcherInterface()                                      = delete;
#endif

public:
};

}; // namespace Bedrock::Http
