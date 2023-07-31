#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CustomSaveComponent {

public:
    // prevent constructor by default
    CustomSaveComponent& operator=(CustomSaveComponent const&) = delete;
    CustomSaveComponent(CustomSaveComponent const&)            = delete;
    CustomSaveComponent()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?save\@CustomSaveComponent\@\@QEAA_NAEAVLevelStorage\@\@AEAVActor\@\@\@Z
     */
    MCAPI bool save(class LevelStorage&, class Actor&);
    // NOLINTEND
};
