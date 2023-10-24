#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CurrentCmdVersion : int {
    Invalid                                      = -1,
    Initial                                      = 0x1,
    TpRotationClamping                           = 0x2,
    NewBedrockCmdSystem                          = 0x3,
    ExecuteUsesVec3                              = 0x4,
    CloneFixes                                   = 0x5,
    UpdateAquatic                                = 0x6,
    EntitySelectorUsesVec3                       = 0x7,
    ContainersDontDropItemsAnymore               = 0x8,
    FiltersObeyDimensions                        = 0x9,
    ExecuteAndBlockCommandAndSelfSelectorFixes   = 0xA,
    InstantEffectsUseTicks                       = 0xB,
    DontRegisterBrokenFunctionCommands           = 0xC,
    ClearSpawnPointCommand                       = 0xD,
    CloneAndTeleportRotationFixes                = 0xE,
    TeleportDimensionFixes                       = 0xF,
    CloneUpdateBlockAndTimeFixes                 = 0x10,
    CloneIntersectFix                            = 0x11,
    FunctionExecuteOrderAndChestSlotFix          = 0x12,
    NonTickingAreasNoLongerConsideredLoaded      = 0x13,
    SpreadplayersHazardAndResolvePlayerByNameFix = 0x14,
    NewExecuteCommandSyntaxExperimentAndChestLootTableFixAndTeleportFacingVerticalUnclampedAndLocateBiomeAndFeatureMerged =
        0x15,
    WaterloggingAddedToStructureCommand            = 0x16,
    SelectorDistanceFilteredAndRelativeRotationFix = 0x17,
    NewSummonCommandAddedRotationOptionsAndBubbleColumnCloneFixAndExecuteInDimensionTeleportFixAndNewExecuteRotationFix =
        0x18,
    NewExecuteCommandReleaseEnchantCommandLevelFixAndHasItemDataFixAndCommandDeferral = 0x19,
    ExecuteIfScoreFixes                                                               = 0x1A,
    ReplaceItemAndLootReplaceBlockCommandsDoNotPlaceItemsIntoCauldronsFix             = 0x1B,
    ChangesToCommandOriginRotation                                                    = 0x1C,
    RemoveAuxValueParameterFromBlockCommands                                          = 0x1D,
    VolumeSelectorFixes                                                               = 0x1E,
    EnableSummonRotation                                                              = 0x1F,
    SummonCommandDefaultRotation                                                      = 0x20,
    PositionalDimensionFiltering                                                      = 0x21,
};
