#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IWorldTemplateManager {

public:
    // prevent constructor by default
    IWorldTemplateManager& operator=(IWorldTemplateManager const&) = delete;
    IWorldTemplateManager(IWorldTemplateManager const&)            = delete;
    IWorldTemplateManager()                                        = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IWORLDTEMPLATEMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IWorldTemplateManager(); // NOLINT
#endif
};
