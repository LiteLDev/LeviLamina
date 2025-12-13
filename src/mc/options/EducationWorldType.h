#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class EducationWorldType : uchar {
    // bitfield representation
    Default            = 0,
    HasQuizDeprecated  = 1 << 0,
    SinglePlayerLesson = 1 << 1,
    MultiplayerLesson  = 1 << 2,
    AnyLesson          = SinglePlayerLesson | MultiplayerLesson,
};
