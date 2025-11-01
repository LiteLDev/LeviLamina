#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class zip_source_cmd : int {
    Open = 0,
    Read = 1,
    Close = 2,
    Stat = 3,
    Error = 4,
    Free = 5,
    Seek = 6,
    Tell = 7,
    BeginWrite = 8,
    CommitWrite = 9,
    RollbackWrite = 10,
    Write = 11,
    SeekWrite = 12,
    TellWrite = 13,
    Supports = 14,
    Remove = 15,
    Reserved1 = 16,
    BeginWriteCloning = 17,
    AcceptEmpty = 18,
    GetFileAttributes = 19,
    SupportsReopen = 20,
    GetDosTime = 21,
};
