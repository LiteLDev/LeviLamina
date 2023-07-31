#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IContainerManager {

public:
    // prevent constructor by default
    IContainerManager& operator=(IContainerManager const&) = delete;
    IContainerManager(IContainerManager const&)            = delete;
    IContainerManager()                                    = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ICONTAINERMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IContainerManager();
#endif
    // NOLINTEND
};
