#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StopSoundPacketPayload {
    ::std::string mName;
    bool          mStopAll;
    bool          mStopMusicLegacy;
};
