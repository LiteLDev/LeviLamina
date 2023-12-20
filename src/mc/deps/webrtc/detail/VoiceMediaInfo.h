#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct VoiceMediaInfo {
public:
    // prevent constructor by default
    VoiceMediaInfo& operator=(VoiceMediaInfo const&);

public:
    // NOLINTBEGIN
    // symbol: ??0VoiceMediaInfo@cricket@@QEAA@XZ
    MCAPI VoiceMediaInfo();

    // symbol: ??0VoiceMediaInfo@cricket@@QEAA@AEBU01@@Z
    MCAPI VoiceMediaInfo(struct cricket::VoiceMediaInfo const&);

    // symbol: ??1VoiceMediaInfo@cricket@@QEAA@XZ
    MCAPI ~VoiceMediaInfo();

    // NOLINTEND
};

}; // namespace cricket
