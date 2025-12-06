#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RemoteAudioSource {
public:
    // RemoteAudioSource inner types declare
    // clang-format off
    struct AudioDataProxy;
    // clang-format on

    // RemoteAudioSource inner types define
    enum class OnAudioChannelGoneAction : uint {};

    struct AudioDataProxy {};
};

} // namespace webrtc
