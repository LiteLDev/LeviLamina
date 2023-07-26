#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AddMobPacket {

public:
    // prevent constructor by default
    AddMobPacket& operator=(AddMobPacket const&) = delete;
    AddMobPacket(AddMobPacket const&)            = delete;
    AddMobPacket()                               = delete;
};
