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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_FILEPICKERMANAGER_DIRECTORYPICKERRESULT
    public:
        DirectoryPickerResult& operator=(DirectoryPickerResult const&) = delete;
        DirectoryPickerResult(DirectoryPickerResult const&)            = delete;
        DirectoryPickerResult()                                        = delete;
#endif

    public:
        /**
         * @symbol ??1DirectoryPickerResult\@FilePickerManager\@Bedrock\@\@QEAA\@XZ
         */
        MCAPI ~DirectoryPickerResult();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_FILEPICKERMANAGER
public:
    FilePickerManager& operator=(FilePickerManager const&) = delete;
    FilePickerManager(FilePickerManager const&)            = delete;
    FilePickerManager()                                    = delete;
#endif

public:
};

}; // namespace Bedrock
