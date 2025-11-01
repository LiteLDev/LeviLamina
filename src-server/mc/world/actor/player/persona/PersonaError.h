#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

enum class PersonaError : uint {
    NoError                  = 0,
    ItemSelection            = 1,
    InvalidPersona           = 3,
    LoadingAppearanceTimeOut = 4,
    DesyncedState            = 5,
    Size                     = 6,
};

}
