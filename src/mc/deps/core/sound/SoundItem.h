#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SoundItem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOUNDITEM
public:
    SoundItem& operator=(SoundItem const&) = delete;
    SoundItem(SoundItem const&)            = delete;
    SoundItem()                            = delete;
#endif

public:
};
