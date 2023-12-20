#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::metrics {

class SampleInfo {
public:
    // prevent constructor by default
    SampleInfo& operator=(SampleInfo const&);
    SampleInfo(SampleInfo const&);
    SampleInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0SampleInfo@metrics@webrtc@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@HH_K@Z
    MCAPI SampleInfo(std::string_view, int, int, uint64);

    // symbol: ??1SampleInfo@metrics@webrtc@@QEAA@XZ
    MCAPI ~SampleInfo();

    // NOLINTEND
};

}; // namespace webrtc::metrics
