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
    Mao                                    = 18,
    Lwe                                    = 19,
    GameplayUi                             = 20,
    GameEventSystemRefactor                = 21,
    OffhandParity                          = 22,
    CreatorWorldClocks                     = 23,
    Count                                  = 24,
};
