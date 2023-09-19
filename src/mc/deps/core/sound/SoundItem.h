#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SoundItem {
public:
    // prevent constructor by default
    SoundItem& operator=(SoundItem const&);
    SoundItem(SoundItem const&);
    SoundItem();
};
