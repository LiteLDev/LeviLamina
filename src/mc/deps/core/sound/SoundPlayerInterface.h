#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SoundPlayerInterface {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOUNDPLAYERINTERFACE
public:
    SoundPlayerInterface& operator=(SoundPlayerInterface const&) = delete;
    SoundPlayerInterface(SoundPlayerInterface const&)            = delete;
    SoundPlayerInterface()                                       = delete;
#endif

public:
};
