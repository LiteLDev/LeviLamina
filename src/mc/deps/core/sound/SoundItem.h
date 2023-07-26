#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SoundItem {

public:
    // prevent constructor by default
    SoundItem& operator=(SoundItem const&) = delete;
    SoundItem(SoundItem const&)            = delete;
    SoundItem()                            = delete;
};
