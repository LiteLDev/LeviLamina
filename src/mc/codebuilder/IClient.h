#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

class IClient {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDER_ICLIENT
public:
    IClient& operator=(IClient const&) = delete;
    IClient(IClient const&)            = delete;
    IClient()                          = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CODEBUILDER_ICLIENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IClient();
#endif
};

}; // namespace CodeBuilder
