#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CustomSaveComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CUSTOMSAVECOMPONENT
public:
    CustomSaveComponent& operator=(CustomSaveComponent const&) = delete;
    CustomSaveComponent(CustomSaveComponent const&)            = delete;
    CustomSaveComponent()                                      = delete;
#endif

public:
    /**
     * @symbol ?save\@CustomSaveComponent\@\@QEAA_NAEAVLevelStorage\@\@AEAVActor\@\@\@Z
     */
    MCAPI bool save(class LevelStorage&, class Actor&);
};
