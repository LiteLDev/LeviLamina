#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct VoiceMediaSendInfo {
public:
    // prevent constructor by default
    VoiceMediaSendInfo& operator=(VoiceMediaSendInfo const&);

public:
    // NOLINTBEGIN
    // symbol: ??0VoiceMediaSendInfo@cricket@@QEAA@XZ
    MCAPI VoiceMediaSendInfo();

    // symbol: ??0VoiceMediaSendInfo@cricket@@QEAA@AEBU01@@Z
    MCAPI VoiceMediaSendInfo(struct cricket::VoiceMediaSendInfo const&);

    // symbol: ??1VoiceMediaSendInfo@cricket@@QEAA@XZ
    MCAPI ~VoiceMediaSendInfo();

    // NOLINTEND
};

}; // namespace cricket
