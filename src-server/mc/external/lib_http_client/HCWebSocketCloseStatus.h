#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HCWebSocketCloseStatus : uint {
    Normal = 1000,
    GoingAway = 1001,
    ProtocolError = 1002,
    Unsupported = 1003,
    EmptyStatus = 1005,
    AbnormalClose = 1006,
    InconsistentDatatype = 1007,
    PolicyViolation = 1008,
    TooLarge = 1009,
    NegotiateError = 1010,
    ServerTerminate = 1011,
    HandshakeError = 1015,
    UnknownError = 4000,
    ErrorWinhttpTimeout = 12002,
};
