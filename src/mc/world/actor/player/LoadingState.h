#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LoadingState : int {
    // bitfield representation
    TimeCancellable               = -2147483648,
    None                          = 0,
    BuildingTerrain               = 1 << 1,
    SwitchingDimension            = 1 << 2,
    WaitingRealms                 = 1 << 3,
    Done                          = 1 << 4,
    Disconnected                  = 1 << 5,
    ImportingExporting            = 1 << 6,
    LocatingServer                = 1 << 7,
    WaitingResourcePack           = 1 << 8,
    DownloadingResourcePack       = 1 << 9,
    MakingWorldInfinite           = 1 << 10,
    WaitingResourceLoad           = 1 << 11,
    ConvertingWorld               = 1 << 12,
    WaitingRemoteStorage          = 1 << 13,
    WaitingSaveAndQuit            = 1 << 14,
    PreCachingScreens             = 1 << 15,
    StorageMigration              = 1 << 16,
    WaitingForTickingAreasPreload = 1 << 17,
    WaitingPurchase               = 1 << 20,
    CopyingWorld                  = 1 << 24,
    WaitingErrorPrompt            = 1 << 28,
    Error                         = 1 << 29,
    Cancellable                   = 1 << 30,
};
