#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class srtp_prf_label : int {
    RtpEncryption       = 0,
    RtpMsgAuth          = 1,
    RtpSalt             = 2,
    RtcpEncryption      = 3,
    RtcpMsgAuth         = 4,
    RtcpSalt            = 5,
    RtpHeaderEncryption = 6,
    RtpHeaderSalt       = 7,
};
