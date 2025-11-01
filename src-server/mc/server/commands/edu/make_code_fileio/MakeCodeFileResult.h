#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MakeCodeFileIO {

enum class MakeCodeFileResult : int {
    Success            = 0,
    OpenFailure        = 1,
    ReadFailure        = 2,
    WriteFailure       = 3,
    InvalidFileType    = 4,
    FileTooLarge       = 5,
    GetFileSizeFailure = 6,
};

}
