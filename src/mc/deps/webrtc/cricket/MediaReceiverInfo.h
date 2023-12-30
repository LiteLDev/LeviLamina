#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct MediaReceiverInfo {
public:
    // prevent constructor by default
    MediaReceiverInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0MediaReceiverInfo@cricket@@QEAA@AEBU01@@Z
    MCAPI MediaReceiverInfo(struct cricket::MediaReceiverInfo const&);

    // symbol: ??4MediaReceiverInfo@cricket@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct cricket::MediaReceiverInfo& operator=(struct cricket::MediaReceiverInfo const&);

    // symbol: ?ssrc@MediaReceiverInfo@cricket@@QEBAIXZ
    MCAPI uint ssrc() const;

    // symbol: ??1MediaReceiverInfo@cricket@@QEAA@XZ
    MCAPI ~MediaReceiverInfo();

    // NOLINTEND
};

}; // namespace cricket
