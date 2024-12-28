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
    FocusTargetCamera                      = 12,
    MinecraftExplorer                      = 13,
    DeferredTechnicalPreview               = 14,
    VillagerTradesRebalance                = 15,
    VanillaBlockGeometry                   = 16,
    JigsawStructures                       = 17,
    CameraAimAssist                        = 18,
    ExperimentalGraphics                   = 19,
    SimplifiedSpawnRules                   = 20,
    Count                                  = 21,
};
