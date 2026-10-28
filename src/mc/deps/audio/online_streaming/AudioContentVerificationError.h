#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

enum class AudioContentVerificationError : int {
    VerificationUnavailable = 1,
    MalformedToken          = 2,
    UnsupportedAlgorithm    = 3,
    UnsupportedTokenType    = 4,
    MissingKeyId            = 5,
    UnknownKey              = 6,
    InvalidSignature        = 7,
    UnexpectedIssuer        = 8,
    UnexpectedAudience      = 9,
    InvalidSectionType      = 10,
    MissingSubject          = 11,
    MissingDocument         = 12,
    InvalidDocument         = 13,
};

}
