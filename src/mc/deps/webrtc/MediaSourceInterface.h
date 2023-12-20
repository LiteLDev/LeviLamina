#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class MediaSourceInterface {
public:
    // MediaSourceInterface inner types define
    enum class SourceState {};

public:
    // prevent constructor by default
    MediaSourceInterface& operator=(MediaSourceInterface const&);
    MediaSourceInterface(MediaSourceInterface const&);
    MediaSourceInterface();
};

}; // namespace webrtc
