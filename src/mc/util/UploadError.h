#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class UploadError : int {
    None                     = 0,
    ForbiddenContent         = 1,
    FileTooBig               = 2,
    InvalidWorldFile         = 3,
    NoUploadEndpoint         = 4,
    NoUploadResponse         = 5,
    UnownedTemplate          = 6,
    CreateArchiveFileFailed  = 7,
    CreateLevelStorageFailed = 8,
    WorldNameNonCompliant    = 9,
    Unknown                  = 10,
    SingleUploadFailed       = 11,
    MultiUploadFailed        = 12,
    BlockListFailed          = 13,
    UploadCompleteFailed     = 14,
    RefreshSessionFailed     = 15,
    ProcessingFailed         = 16,
};
