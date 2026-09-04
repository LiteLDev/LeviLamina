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
    SimplifiedSpawnRules                   = 14,
    VoxelShapes                            = 15,
    Poi                                    = 16,
    BrainPrototype                         = 17,
    Lwe                                    = 18,
    GameplayUi                             = 19,
    GameEventSystemRefactor                = 20,
    Count                                  = 21,
};
