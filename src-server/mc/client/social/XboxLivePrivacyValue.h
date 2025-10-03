#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class XboxLivePrivacyValue : int {
    Unknown                              = 0,
    CommunicateUsingText                 = 1,
    CommunicateUsingVideo                = 2,
    CommunicateUsingVoice                = 3,
    ViewTargetProfile                    = 4,
    ViewTargetGameHistory                = 5,
    ViewTargetVideoHistory               = 6,
    ViewTargetMusicHistory               = 7,
    ViewTargetExerciseInfo               = 8,
    ViewTargetPresence                   = 9,
    ViewTargetVideoStatus                = 10,
    ViewTargetMusicStatus                = 11,
    PlayMultiplayer                      = 12,
    BroadcastWithTwitch                  = 13,
    ViewTargetUserCreatedContent         = 14,
    WriteComment                         = 15,
    ShareItem                            = 16,
    ShareTargetContentToExternalNetworks = 17,
};

}
