#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

enum class SignedAudioContentSectionType : uchar {
    SharedMetadata  = 0,
    OwnerMetadata   = 1,
    ServerContent   = 2,
    PlaybackContent = 3,
};

}
