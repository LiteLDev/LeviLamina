#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AllExperiments : int {
    TestExperiment                         = 0,
    NextUpdate                             = 1,
    DisabledExperiment                     = 2,
    ExperimentalText                       = 3,
    AllowSeedChange                        = 4,
    DataDrivenBiomes                       = 5,
    UpcomingCreatorFeatures                = 6,
    BetaApis                               = 7,
    DataDrivenVanillaBlocksAndItems        = 8,
    DisableDataDrivenVanillaBlocksAndItems = 9,
    ExperimentalCreatorCameras             = 10,
    MinecraftExplorer                      = 11,
    DeferredTechnicalPreview               = 12,
    VillagerTradesRebalance                = 13,
    VanillaBlockGeometry                   = 14,
    JigsawStructures                       = 15,
    SimplifiedSpawnRules                   = 16,
    Y2025Drop3                             = 17,
    Count                                  = 18,
};
