#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FileSystemFileAccess {
public:
    // FileSystemFileAccess inner types declare
    // clang-format off
    struct FileSystemFileReadAccess;
    struct FileSystemFileWriteAccess;
    // clang-format on

    // FileSystemFileAccess inner types define
    struct FileSystemFileReadAccess {};

    struct FileSystemFileWriteAccess {};
};
