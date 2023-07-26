#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayingSoundAttributes {

public:
    // prevent constructor by default
    PlayingSoundAttributes& operator=(PlayingSoundAttributes const&) = delete;
    PlayingSoundAttributes(PlayingSoundAttributes const&)            = delete;
    PlayingSoundAttributes()                                         = delete;
};
