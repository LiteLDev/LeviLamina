#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CloseStatusCode : ushort {
    Normal = 1000,
    EndpointGoingAway = 1001,
    ProtocolError = 1002,
    UnsupportedDataType = 1003,
    Reserved1004 = 1004,
    Reserved1005 = 1005,
    Reserved1006 = 1006,
    DataNotOfExpectedType = 1007,
    PolicyViolation = 1008,
    MessageTooBig = 1009,
    ServerDoesNotSupportExtension = 1010,
    UnexpectedError = 1011,
    Reserved1015 = 1015,
    InvalidHandshakeRequest = 4996,
    HandshakeKeyNotFound = 4997,
    HandshakeTimeout = 4998,
    LostConnection = 4999,
};
