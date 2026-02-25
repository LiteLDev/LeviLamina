#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

enum class StartLocalWorldResult : int {
    Ok                        = 0,
    WorldNotInLevelList       = 1,
    StartupAlreadyInProgress  = 2,
    GameServerStarterNotReady = 3,
    MissingDependencies       = 4,
    DlcMissingContentKey      = 5,
    DlcPendingImports         = 6,
    HasUnownedPacks           = 7,
    UnknownError              = 8,
    WorldSavedInNewerVersion  = 9,
    RealmsPlusEnded           = 10,
    UnableToGetManifest       = 11,
};

}
