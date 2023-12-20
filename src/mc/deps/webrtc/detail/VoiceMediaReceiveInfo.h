#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct VoiceMediaReceiveInfo {
public:
    // prevent constructor by default
    VoiceMediaReceiveInfo& operator=(VoiceMediaReceiveInfo const&);

public:
    // NOLINTBEGIN
    // symbol: ??0VoiceMediaReceiveInfo@cricket@@QEAA@XZ
    MCAPI VoiceMediaReceiveInfo();

    // symbol: ??0VoiceMediaReceiveInfo@cricket@@QEAA@AEBU01@@Z
    MCAPI VoiceMediaReceiveInfo(struct cricket::VoiceMediaReceiveInfo const&);

    // symbol: ??1VoiceMediaReceiveInfo@cricket@@QEAA@XZ
    MCAPI ~VoiceMediaReceiveInfo();

    // NOLINTEND
};

}; // namespace cricket
