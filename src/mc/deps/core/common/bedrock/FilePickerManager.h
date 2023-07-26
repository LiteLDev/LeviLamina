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
        DirectoryPickerResult& operator=(DirectoryPickerResult const&) = delete;
        DirectoryPickerResult(DirectoryPickerResult const&)            = delete;
        DirectoryPickerResult()                                        = delete;

    public:
        /**
         * @symbol ??1DirectoryPickerResult\@FilePickerManager\@Bedrock\@\@QEAA\@XZ
         */
        MCAPI ~DirectoryPickerResult(); // NOLINT
    };

public:
    // prevent constructor by default
    FilePickerManager& operator=(FilePickerManager const&) = delete;
    FilePickerManager(FilePickerManager const&)            = delete;
    FilePickerManager()                                    = delete;
};

}; // namespace Bedrock
