#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct VoiceReceiverInfo {
public:
    // prevent constructor by default
    VoiceReceiverInfo& operator=(VoiceReceiverInfo const&);
    VoiceReceiverInfo(VoiceReceiverInfo const&);
    VoiceReceiverInfo();

public:
    // NOLINTBEGIN
    // symbol: ??1VoiceReceiverInfo@cricket@@QEAA@XZ
    MCAPI ~VoiceReceiverInfo();

    // NOLINTEND
};

}; // namespace cricket
