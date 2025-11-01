#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

enum class SSLPeerCertificateDigestError : int {
    None               = 0,
    UnknownAlgorithm   = 1,
    InvalidLength      = 2,
    VerificationFailed = 3,
};

}
