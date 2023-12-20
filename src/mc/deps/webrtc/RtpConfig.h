#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpConfig {
public:
    // RtpConfig inner types declare
    // clang-format off
    struct Flexfec;
    struct Rtx;
    // clang-format on

    // RtpConfig inner types define
    struct Flexfec {
    public:
        // prevent constructor by default
        Flexfec& operator=(Flexfec const&);
        Flexfec();

    public:
        // NOLINTBEGIN
        // symbol: ??0Flexfec@RtpConfig@webrtc@@QEAA@AEBU012@@Z
        MCAPI Flexfec(struct webrtc::RtpConfig::Flexfec const&);

        // symbol: ??1Flexfec@RtpConfig@webrtc@@QEAA@XZ
        MCAPI ~Flexfec();

        // NOLINTEND
    };

    struct Rtx {
    public:
        // prevent constructor by default
        Rtx& operator=(Rtx const&);
        Rtx();

    public:
        // NOLINTBEGIN
        // symbol: ??0Rtx@RtpConfig@webrtc@@QEAA@AEBU012@@Z
        MCAPI Rtx(struct webrtc::RtpConfig::Rtx const&);

        // symbol: ??1Rtx@RtpConfig@webrtc@@QEAA@XZ
        MCAPI ~Rtx();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RtpConfig& operator=(RtpConfig const&);
    RtpConfig();

public:
    // NOLINTBEGIN
    // symbol: ?GetRtxSsrcAssociatedWithMediaSsrc@RtpConfig@webrtc@@QEBA?AV?$optional@I@std@@I@Z
    MCAPI std::optional<uint> GetRtxSsrcAssociatedWithMediaSsrc(uint) const;

    // symbol: ??0RtpConfig@webrtc@@QEAA@AEBU01@@Z
    MCAPI RtpConfig(struct webrtc::RtpConfig const&);

    // symbol: ??1RtpConfig@webrtc@@QEAA@XZ
    MCAPI ~RtpConfig();

    // NOLINTEND
};

}; // namespace webrtc
