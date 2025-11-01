#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AnimationComponentGroupType : int {
    Client            = 0,
    ClientHUD         = 1,
    Server            = 2,
    ClientMap         = 3,
    ClientRemote      = 4,
    ClientFirstPerson = 5,
};
