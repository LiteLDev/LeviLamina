#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SoundPlayerInterface {

public:
    // prevent constructor by default
    SoundPlayerInterface& operator=(SoundPlayerInterface const&) = delete;
    SoundPlayerInterface(SoundPlayerInterface const&)            = delete;
    SoundPlayerInterface()                                       = delete;
};
