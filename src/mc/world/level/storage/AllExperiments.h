#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AllExperiments : int {
    TestExperiment                         = 0x0,
    NextUpdate                             = 0x1,
    DisabledExperiment                     = 0x2,
    ExperimentalText                       = 0x3,
    AllowSeedChange                        = 0x4,
    Bundles                                = 0x5,
    DataDrivenBiomes                       = 0x6,
    UpcomingCreatorFeatures                = 0x7,
    Gametest                               = 0x8,
    DataDrivenVanillaBlocksAndItems        = 0x9,
    DisableDataDrivenVanillaBlocksAndItems = 0xa,
    ThirdPersonCameras                     = 0xb,
    FocusTargetCamera                      = 0xc,
    MinecraftExplorer                      = 0xd,
    DeferredTechnicalPreview               = 0xe,
    VillagerTradesRebalance                = 0xf,
    VanillaBlockGeometry                   = 0x10,
    JigsawStructures                       = 0x11,
    CameraAimAssist                        = 0x12,
    ExperimentalGraphics                   = 0x13,
    NumExperiments                         = 0x14,
};
