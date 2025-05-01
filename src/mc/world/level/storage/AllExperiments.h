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
    CustomComponentsV2                     = 8,
    DataDrivenVanillaBlocksAndItems        = 9,
    DisableDataDrivenVanillaBlocksAndItems = 10,
    ExperimentalCreatorCameras             = 11,
    MinecraftExplorer                      = 12,
    DeferredTechnicalPreview               = 13,
    VillagerTradesRebalance                = 14,
    VanillaBlockGeometry                   = 15,
    JigsawStructures                       = 16,
    ExperimentalGraphics                   = 17,
    SimplifiedSpawnRules                   = 18,
    Y2025Drop2                             = 19,
    Count                                  = 20,
};
