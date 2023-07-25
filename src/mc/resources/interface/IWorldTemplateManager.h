#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IWorldTemplateManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IWORLDTEMPLATEMANAGER
public:
    IWorldTemplateManager& operator=(IWorldTemplateManager const&) = delete;
    IWorldTemplateManager(IWorldTemplateManager const&)            = delete;
    IWorldTemplateManager()                                        = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IWORLDTEMPLATEMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IWorldTemplateManager();
#endif
};
