#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class FatalClientPackErrorType : int {
    Unknown                              = 0,
    EncryptionFailure                    = 1,
    FatallyIncompatible                  = 2,
    NonFatallyIncompatibleButRequired    = 3,
    BehaviorPackMismatch                 = 4,
    ResourcePackMismatch                 = 5,
    DownloadFailureCouldNotInitDirectory = 6,
    DownloadFailureCouldNotWriteToDisk   = 7,
    DownloadFailureCouldNotUnzipFiles    = 8,
    DownloadFailureLogicError            = 9,
};
