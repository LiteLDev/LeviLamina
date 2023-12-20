#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct VideoMediaReceiveInfo; }
namespace cricket { struct VideoMediaSendInfo; }
// clang-format on

namespace cricket {

struct VideoMediaInfo {
public:
    // prevent constructor by default
    VideoMediaInfo& operator=(VideoMediaInfo const&);

public:
    // NOLINTBEGIN
    // symbol: ??0VideoMediaInfo@cricket@@QEAA@XZ
    MCAPI VideoMediaInfo();

    // symbol: ??0VideoMediaInfo@cricket@@QEAA@AEBU01@@Z
    MCAPI VideoMediaInfo(struct cricket::VideoMediaInfo const&);

    // symbol: ??0VideoMediaInfo@cricket@@QEAA@$$QEAUVideoMediaSendInfo@1@$$QEAUVideoMediaReceiveInfo@1@@Z
    MCAPI VideoMediaInfo(struct cricket::VideoMediaSendInfo&&, struct cricket::VideoMediaReceiveInfo&&);

    // symbol: ??1VideoMediaInfo@cricket@@QEAA@XZ
    MCAPI ~VideoMediaInfo();

    // NOLINTEND
};

}; // namespace cricket
