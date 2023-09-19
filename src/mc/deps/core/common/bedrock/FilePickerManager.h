#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class FilePickerManager {
public:
    // FilePickerManager inner types declare
    // clang-format off
    struct DirectoryPickerResult;
    // clang-format on

    // FilePickerManager inner types define
    struct DirectoryPickerResult {
    public:
        // prevent constructor by default
        DirectoryPickerResult& operator=(DirectoryPickerResult const&);
        DirectoryPickerResult(DirectoryPickerResult const&);
        DirectoryPickerResult();

    public:
        // NOLINTBEGIN
        // symbol: ??1DirectoryPickerResult@FilePickerManager@Bedrock@@QEAA@XZ
        MCAPI ~DirectoryPickerResult();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    FilePickerManager& operator=(FilePickerManager const&);
    FilePickerManager(FilePickerManager const&);
    FilePickerManager();
};

}; // namespace Bedrock
