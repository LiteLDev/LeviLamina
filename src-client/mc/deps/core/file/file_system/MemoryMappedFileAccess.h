#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MemoryMappedFileAccess {
public:
    // MemoryMappedFileAccess inner types declare
    // clang-format off
    struct MemoryMappedFileReadAccess;
    struct MemoryMappedFileWriteAccess;
    struct StreamDetails;
    struct StreamHandle;
    // clang-format on

    // MemoryMappedFileAccess inner types define
    struct MemoryMappedFileReadAccess {};

    struct MemoryMappedFileWriteAccess {};

    struct StreamDetails {};

    struct StreamHandle {};
};
