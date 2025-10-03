#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Playtest {

enum class SessionResult : int {
    Ok                   = 0,
    InvalidSessionHandle = 1,
    SessionInfoNotFound  = 2,
    TooManyPlayers       = 3,
    WorldExportFailed    = 4,
    WorldExportBusy      = 5,
    UnsupportedScenario  = 6,
    EditorSystemFailure  = 7,
    InvalidLevelId       = 8,
    PlayerNotFound       = 9,
    ResponseTimeout      = 10,
    UnspecifiedError     = 11,
};

}
