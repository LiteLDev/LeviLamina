#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

enum class ClusterValues : uint {
    RootStartClusterIndex      = 0,
    FreeCluster                = 0,
    ClusterIndexBitsCount      = 22,
    ClusterShortIndexBitsCount = 14,
    ClusterIndexMask           = 4194303,
    ClusterShortIndexMask      = 16383,
    LastClusterIndexValue      = 4194302,
    StartEndValueFlag          = 2147483648,
    InvalidValue               = 4194303,
    ChainStartEndMask          = 2147483648,
    FlagsAndIndexMask          = 2151677951,
    FlagsAndShortIndexMask     = 2147500031,
    StartOfChain               = 2147483648,
    EndOfChain                 = 2147483648,
    FdriStartBit               = 23,
    HighPositionOf8CrcBits     = 23,
    LowPositionOf8CrcBits      = 14,
    FdriBitsCount              = 8,
    FdriMask                   = 255,
    FdriShiftedMask            = 2139095040,
    CrcLowPosition8BitsMask    = 4177920,
    CrcInitializedMask         = 4194304,
    CrcBitCount                = 16,
    ClusterNotInitialized      = 4194304,
};

}
