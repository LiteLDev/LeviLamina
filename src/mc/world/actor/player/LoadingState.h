#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LoadingState : int {
    None                          = 0,
    BuildingTerrain               = 2,
    SwitchingDimension            = 4,
    WaitingRealms                 = 8,
    Done                          = 16,
    Disconnected                  = 32,
    ImportingExporting            = 64,
    LocatingServer                = 128,
    WaitingResourcePack           = 256,
    DownloadingResourcePack       = 512,
    MakingWorldInfinite           = 1024,
    WaitingResourceLoad           = 2048,
    ConvertingWorld               = 4096,
    WaitingRemoteStorage          = 8192,
    WaitingSaveAndQuit            = 16384,
    PreCachingScreens             = 4294934528,
    StorageMigration              = 65536,
    WaitingForTickingAreasPreload = 131072,
    WaitingPurchase               = 1048576,
    CopyingWorld                  = 16777216,
    WaitingErrorPrompt            = 268435456,
    Error                         = 536870912,
    Cancellable                   = 1073741824,
    TimeCancellable               = 2147483648,
};
