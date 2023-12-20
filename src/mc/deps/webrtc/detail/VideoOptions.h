#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct VideoOptions {
public:
    // prevent constructor by default
    VideoOptions& operator=(VideoOptions const&);
    VideoOptions(VideoOptions const&);

public:
    // NOLINTBEGIN
    // symbol: ??0VideoOptions@cricket@@QEAA@XZ
    MCAPI VideoOptions();

    // symbol: ??1VideoOptions@cricket@@QEAA@XZ
    MCAPI ~VideoOptions();

    // NOLINTEND
};

}; // namespace cricket
