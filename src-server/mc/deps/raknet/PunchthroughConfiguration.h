#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct PunchthroughConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> TIME_BETWEEN_PUNCH_ATTEMPTS_INTERNAL;
    ::ll::TypedStorage<8, 8, uint64> TIME_BETWEEN_PUNCH_ATTEMPTS_EXTERNAL;
    ::ll::TypedStorage<4, 4, int>    UDP_SENDS_PER_PORT_INTERNAL;
    ::ll::TypedStorage<4, 4, int>    UDP_SENDS_PER_PORT_EXTERNAL;
    ::ll::TypedStorage<4, 4, int>    INTERNAL_IP_WAIT_AFTER_ATTEMPTS;
    ::ll::TypedStorage<4, 4, int>    MAX_PREDICTIVE_PORT_RANGE;
    ::ll::TypedStorage<4, 4, int>    EXTERNAL_IP_WAIT_AFTER_FIRST_TTL;
    ::ll::TypedStorage<4, 4, int>    EXTERNAL_IP_WAIT_BETWEEN_PORTS;
    ::ll::TypedStorage<4, 4, int>    EXTERNAL_IP_WAIT_AFTER_ALL_ATTEMPTS;
    ::ll::TypedStorage<4, 4, int>    MAXIMUM_NUMBER_OF_INTERNAL_IDS_TO_CHECK;
    ::ll::TypedStorage<1, 1, bool>   retryOnFailure;
    // NOLINTEND
};

} // namespace RakNet
