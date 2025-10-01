#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AllExperiments : int {
    TestExperiment                         = 0,
    NextUpdate                             = 1,
    DisabledExperiment                     = 2,
    ExperimentalText                       = 3,
    AllowSeedChange                        = 4,
    UpcomingCreatorFeatures                = 5,
    BetaApis                               = 6,
    DataDrivenVanillaBlocksAndItems        = 7,
    DisableDataDrivenVanillaBlocksAndItems = 8,
    ExperimentalCreatorCameras             = 9,
    MinecraftExplorer                      = 10,
    DeferredTechnicalPreview               = 11,
    VillagerTradesRebalance                = 12,
    VanillaBlockGeometry                   = 13,
    JigsawStructures                       = 14,
    SimplifiedSpawnRules                   = 15,
    VoxelShapes                            = 16,
    Count                                  = 17,
};
