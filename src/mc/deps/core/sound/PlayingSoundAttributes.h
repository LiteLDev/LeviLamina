#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayingSoundAttributes {
public:
    // prevent constructor by default
    PlayingSoundAttributes& operator=(PlayingSoundAttributes const&);
    PlayingSoundAttributes(PlayingSoundAttributes const&);
    PlayingSoundAttributes();
};
