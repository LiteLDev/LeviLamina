#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

enum class PackDownloadError : uchar {
    HasPendingOrActiveImports                       = 0,
    HasUnownedPacks                                 = 1,
    RealmsPlusEnded                                 = 2,
    MissingDlcDependencies                          = 3,
    MissingDlcWorldTemplate                         = 4,
    NoInternet                                      = 5,
    HasPerformanceIssues                            = 6,
    NotEnoughDiscSpace                              = 7,
    WifiRequiredYetNotAccessible                    = 8,
    MissingRequiredWorldTemplateRequestUserApproval = 9,
    InvalidPack                                     = 10,
    InvalidWorld                                    = 11,
    InitializationTimeout                           = 12,
    UnexpectedError                                 = 13,
};

}
