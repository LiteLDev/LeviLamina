#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CrashDumpLogFormatCode : int {
    None      = 0,
    Padding   = 1,
    String    = 2,
    UIntHex   = 3,
    Uint      = 4,
    Int       = 5,
    Uint64Hex = 6,
    Uint64    = 7,
    Int64     = 8,
    Tagstring = 9,
    Float     = 10,
    Short     = 11,
    Guid      = 12,
};
