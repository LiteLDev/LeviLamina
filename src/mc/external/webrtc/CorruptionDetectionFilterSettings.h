#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct CorruptionDetectionFilterSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke8bbc1;
    ::ll::UntypedStorage<4, 4> mUnkb562c9;
    ::ll::UntypedStorage<4, 4> mUnk89f9f6;
    // NOLINTEND

public:
    // prevent constructor by default
    CorruptionDetectionFilterSettings& operator=(CorruptionDetectionFilterSettings const&);
    CorruptionDetectionFilterSettings(CorruptionDetectionFilterSettings const&);
    CorruptionDetectionFilterSettings();
};

} // namespace webrtc
