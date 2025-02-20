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
    ThirdPersonCameras                     = 11,
    MinecraftExplorer                      = 12,
    DeferredTechnicalPreview               = 13,
    VillagerTradesRebalance                = 14,
    VanillaBlockGeometry                   = 15,
    JigsawStructures                       = 16,
    CameraAimAssist                        = 17,
    ExperimentalGraphics                   = 18,
    SimplifiedSpawnRules                   = 19,
    Y2025Drop1                             = 20,
    Count                                  = 21,
};
