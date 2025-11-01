#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class DynDnsResultCode : int {
    Success = 0,
    DnsAlreadySet = 1,
    NoChange = 2,
    NotDonator = 3,
    NoHost = 4,
    BadAuth = 5,
    NotYours = 6,
    Abuse = 7,
    TcpFailedToStart = 8,
    TcpDidNotConnect = 9,
    UnknownResult = 10,
    ParsingFailure = 11,
    ConnectionLostWithoutResponse = 12,
    BadAgent = 13,
    BadSys = 14,
    DnsError = 15,
    NotFqdn = 16,
    NumHost = 17,
    Rc911 = 18,
    DyndnsTimeout = 19,
};

}
