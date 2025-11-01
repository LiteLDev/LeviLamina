#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class RackspaceEventType : int {
    Success200 = 0,
    Success201 = 1,
    Success202 = 2,
    Success203 = 3,
    Success204 = 4,
    CloudServersFault500 = 5,
    ServiceUnavailable503 = 6,
    Unauthorized401 = 7,
    BadRequest400 = 8,
    OverLimit413 = 9,
    BadMediaType415 = 10,
    ItemNotFound404 = 11,
    BuildInProgress409 = 12,
    ResizeNotAllowed403 = 13,
    ConnectionClosedWithoutReponse = 14,
    UnknownFailure = 15,
};

}
