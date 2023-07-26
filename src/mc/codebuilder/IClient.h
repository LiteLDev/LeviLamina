#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

class IClient {

public:
    // prevent constructor by default
    IClient& operator=(IClient const&) = delete;
    IClient(IClient const&)            = delete;
    IClient()                          = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CODEBUILDER_ICLIENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IClient(); // NOLINT
#endif
};

}; // namespace CodeBuilder
