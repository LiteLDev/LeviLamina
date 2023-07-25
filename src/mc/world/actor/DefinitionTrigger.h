#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DefinitionTrigger {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFINITIONTRIGGER
public:
    DefinitionTrigger& operator=(DefinitionTrigger const&) = delete;
    DefinitionTrigger(DefinitionTrigger const&)            = delete;
    DefinitionTrigger()                                    = delete;
#endif

public:
    /**
     * @symbol ?canTrigger\@DefinitionTrigger\@\@QEBA_NAEAVRenderParams\@\@\@Z
     */
    MCAPI bool canTrigger(class RenderParams&) const;
    /**
     * @symbol ??1DefinitionTrigger\@\@QEAA\@XZ
     */
    MCAPI ~DefinitionTrigger();
    /**
     * @symbol ?bindType\@DefinitionTrigger\@\@SAXXZ
     */
    MCAPI static void bindType();
};
