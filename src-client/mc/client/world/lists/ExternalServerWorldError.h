#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

enum class ExternalServerWorldError : int {
    NameIsEmpty       = 0,
    AddressIsEmpty    = 1,
    InvalidIpAddress  = 2,
    InvalidPortNumber = 3,
    UnknownError      = 4,
    IdNotFound        = 5,
};

}
