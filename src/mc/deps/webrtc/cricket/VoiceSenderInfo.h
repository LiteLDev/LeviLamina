#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct VoiceSenderInfo {
public:
    // prevent constructor by default
    VoiceSenderInfo& operator=(VoiceSenderInfo const&);
    VoiceSenderInfo(VoiceSenderInfo const&);

public:
    // NOLINTBEGIN
    // symbol: ??0VoiceSenderInfo@cricket@@QEAA@XZ
    MCAPI VoiceSenderInfo();

    // symbol: ??1VoiceSenderInfo@cricket@@QEAA@XZ
    MCAPI ~VoiceSenderInfo();

    // NOLINTEND
};

}; // namespace cricket
