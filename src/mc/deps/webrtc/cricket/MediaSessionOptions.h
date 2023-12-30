#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct MediaSessionOptions {
public:
    // prevent constructor by default
    MediaSessionOptions& operator=(MediaSessionOptions const&);

public:
    // NOLINTBEGIN
    // symbol: ??0MediaSessionOptions@cricket@@QEAA@XZ
    MCAPI MediaSessionOptions();

    // symbol: ??0MediaSessionOptions@cricket@@QEAA@AEBU01@@Z
    MCAPI MediaSessionOptions(struct cricket::MediaSessionOptions const&);

    // symbol: ??1MediaSessionOptions@cricket@@QEAA@XZ
    MCAPI ~MediaSessionOptions();

    // NOLINTEND
};

}; // namespace cricket
