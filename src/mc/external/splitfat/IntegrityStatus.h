#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

enum class IntegrityStatus : int {
    ResultOk                                      = 0,
    InternalError                                 = 1,
    ClusterChainStartMismatch                     = 2,
    ClusterChainEndMismatch                       = 3,
    InvalidCellIndexForPreviousCell               = 4,
    InvalidCellIndexForNextCell                   = 5,
    AllocatedCellBelongsToDeletedFile             = 6,
    MissingClusterChainForNotEmptyFile            = 7,
    ClusterChainAttachedToAnEmptyFile             = 8,
    FirstChainClusterNotMarkedAsAChainStart       = 9,
    MiddleChainClusterMarkedAsAChainStart         = 10,
    PreviousClusterOfAMiddleChainClusterIsInvalid = 11,
    PreviousClusterOfAMiddleChainClusterIsWrong   = 12,
    FileSizeDoesNotMatchTheCountOfCluster         = 13,
    InvalidFileStartClusterIndex                  = 14,
    InvalidFileEndClusterIndex                    = 15,
    FileEndClusterIndexMismatch                   = 16,
    ReferenceToNotAllocatedClusterForChainStart   = 17,
    ReferenceToNotAllocatedClusterForChainEnd     = 18,
    CrcDoesNotMatchForCluster                     = 19,
};

}
