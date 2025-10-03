#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class IceCandidatePairType : int {
    KIceCandidatePairHostHost               = 0,
    KIceCandidatePairHostSrflx              = 1,
    KIceCandidatePairHostRelay              = 2,
    KIceCandidatePairHostPrflx              = 3,
    KIceCandidatePairSrflxHost              = 4,
    KIceCandidatePairSrflxSrflx             = 5,
    KIceCandidatePairSrflxRelay             = 6,
    KIceCandidatePairSrflxPrflx             = 7,
    KIceCandidatePairRelayHost              = 8,
    KIceCandidatePairRelaySrflx             = 9,
    KIceCandidatePairRelayRelay             = 10,
    KIceCandidatePairRelayPrflx             = 11,
    KIceCandidatePairPrflxHost              = 12,
    KIceCandidatePairPrflxSrflx             = 13,
    KIceCandidatePairPrflxRelay             = 14,
    KIceCandidatePairHostPrivateHostPrivate = 15,
    KIceCandidatePairHostPrivateHostPublic  = 16,
    KIceCandidatePairHostPublicHostPrivate  = 17,
    KIceCandidatePairHostPublicHostPublic   = 18,
    KIceCandidatePairHostNameHostName       = 19,
    KIceCandidatePairHostNameHostPrivate    = 20,
    KIceCandidatePairHostNameHostPublic     = 21,
    KIceCandidatePairHostPrivateHostName    = 22,
    KIceCandidatePairHostPublicHostName     = 23,
    KIceCandidatePairMax                    = 24,
};

}
