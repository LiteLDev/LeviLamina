#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DefinitionTrigger {

public:
    // prevent constructor by default
    DefinitionTrigger& operator=(DefinitionTrigger const&) = delete;
    DefinitionTrigger(DefinitionTrigger const&)            = delete;
    DefinitionTrigger()                                    = delete;

public:
    /**
     * @symbol ?canTrigger\@DefinitionTrigger\@\@QEBA_NAEAVRenderParams\@\@\@Z
     */
    MCAPI bool canTrigger(class RenderParams&) const; // NOLINT
    /**
     * @symbol ??1DefinitionTrigger\@\@QEAA\@XZ
     */
    MCAPI ~DefinitionTrigger(); // NOLINT
    /**
     * @symbol ?bindType\@DefinitionTrigger\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
};
