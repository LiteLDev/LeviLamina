#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct BitrateSettings {
public:
    // prevent constructor by default
    BitrateSettings& operator=(BitrateSettings const&);
    BitrateSettings(BitrateSettings const&);

public:
    // NOLINTBEGIN
    // symbol: ??0BitrateSettings@webrtc@@QEAA@XZ
    MCAPI BitrateSettings();

    // symbol: ??1BitrateSettings@webrtc@@QEAA@XZ
    MCAPI ~BitrateSettings();

    // NOLINTEND
};

}; // namespace webrtc
