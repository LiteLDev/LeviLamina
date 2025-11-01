#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CompilerFlags : uint {
    // bitfield representation
    OptimizationLevel1              = 0,
    Debug                           = 1u << 0,
    SkipValidation                  = 1u << 1,
    SkipOptimization                = 1u << 2,
    PackMatrixRowMajor              = 1u << 3,
    PackMatrixColumnMajor           = 1u << 4,
    PartialPrecision                = 1u << 5,
    ForceVsSoftwareNoOpt            = 1u << 6,
    ForcePsSoftwareNoOpt            = 1u << 7,
    NoPreshader                     = 1u << 8,
    AvoidFlowControl                = 1u << 9,
    PreferFlowControl               = 1u << 10,
    EnableStrictness                = 1u << 11,
    EnableBackwardsCompatibility    = 1u << 12,
    IeeeStrictness                  = 1u << 13,
    OptimizationLevel0              = 1u << 14,
    OptimizationLevel3              = 1u << 15,
    Reserved16                      = 1u << 16,
    Reserved17                      = 1u << 17,
    WarningsAreErrors               = 1u << 18,
    ResourcesMayAlias               = 1u << 19,
    EnableUnboundedDescriptorTables = 1u << 20,
    AllResourcesBound               = 1u << 21,
    OptimizationLevel2              = OptimizationLevel0 | OptimizationLevel3,
};
