#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UWPMigrationManager {
public:
    // UWPMigrationManager inner types declare
    // clang-format off
    struct MoveOperation;
    struct OperationResult;
    struct MoveDirectoryOperation;
    struct MoveFileOperation;
    struct MoveSecureStorageOperation;
    // clang-format on

    // UWPMigrationManager inner types define
    enum class Status : int {};

    struct MoveOperation {
    public:
        // MoveOperation inner types define
        enum class Type : int {};
    };

    struct OperationResult {};

    struct MoveDirectoryOperation {};

    struct MoveFileOperation {};

    struct MoveSecureStorageOperation {};
};
