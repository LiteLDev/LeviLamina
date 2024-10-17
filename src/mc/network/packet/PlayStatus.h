#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PlayStatus : int {
    LoginSuccess                              = 0x0,
    LoginFailed_ClientOld                     = 0x1,
    LoginFailed_ServerOld                     = 0x2,
    PlayerSpawn                               = 0x3,
    LoginFailed_InvalidTenant                 = 0x4,
    LoginFailed_EditionMismatchEduToVanilla   = 0x5,
    LoginFailed_EditionMismatchVanillaToEdu   = 0x6,
    LoginFailed_ServerFullSubClient           = 0x7,
    LoginFailed_EditorMismatchEditorToVanilla = 0x8,
    LoginFailed_EditorMismatchVanillaToEditor = 0x9,
};
