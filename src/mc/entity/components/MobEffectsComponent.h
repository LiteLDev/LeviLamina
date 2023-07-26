#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobEffectsComponent {

public:
    // prevent constructor by default
    MobEffectsComponent& operator=(MobEffectsComponent const&) = delete;
    MobEffectsComponent(MobEffectsComponent const&)            = delete;
    MobEffectsComponent()                                      = delete;

public:
    /**
     * @symbol ??4MobEffectsComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct MobEffectsComponent& operator=(struct MobEffectsComponent&&); // NOLINT
};
