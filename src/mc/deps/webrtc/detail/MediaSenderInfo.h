#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct MediaSenderInfo {
public:
    // NOLINTBEGIN
    // symbol: ??0MediaSenderInfo@cricket@@QEAA@XZ
    MCAPI MediaSenderInfo();

    // symbol: ??0MediaSenderInfo@cricket@@QEAA@AEBU01@@Z
    MCAPI MediaSenderInfo(struct cricket::MediaSenderInfo const&);

    // symbol: ??4MediaSenderInfo@cricket@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct cricket::MediaSenderInfo& operator=(struct cricket::MediaSenderInfo const&);

    // symbol: ?ssrc@MediaSenderInfo@cricket@@QEBAIXZ
    MCAPI uint ssrc() const;

    // symbol: ??1MediaSenderInfo@cricket@@QEAA@XZ
    MCAPI ~MediaSenderInfo();

    // NOLINTEND
};

}; // namespace cricket
