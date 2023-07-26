#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

class IManager {

public:
    // prevent constructor by default
    IManager& operator=(IManager const&) = delete;
    IManager(IManager const&)            = delete;
    IManager()                           = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CODEBUILDER_IMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IManager(); // NOLINT
#endif
};

}; // namespace CodeBuilder
