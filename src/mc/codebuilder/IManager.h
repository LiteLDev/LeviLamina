#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

class IManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDER_IMANAGER
public:
    IManager& operator=(IManager const&) = delete;
    IManager(IManager const&)            = delete;
    IManager()                           = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CODEBUILDER_IMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IManager();
#endif
};

}; // namespace CodeBuilder
