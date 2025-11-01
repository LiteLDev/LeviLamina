#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class SctpErrorCauseCode : ushort {
    KInvalidStreamIdentifier = 1,
    KMissingMandatoryParameter = 2,
    KStaleCookieError = 3,
    KOutOfResource = 4,
    KUnresolvableAddress = 5,
    KUnrecognizedChunkType = 6,
    KInvalidMandatoryParameter = 7,
    KUnrecognizedParameters = 8,
    KNoUserData = 9,
    KCookieReceivedWhileShuttingDown = 10,
    KRestartWithNewAddresses = 11,
    KUserInitiatedAbort = 12,
    KProtocolViolation = 13,
};

}
