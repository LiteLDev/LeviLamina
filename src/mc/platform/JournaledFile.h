#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/FileBufferingMode.h"
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

class JournaledFile {
public:
    // prevent constructor by default
    JournaledFile& operator=(JournaledFile const&);
    JournaledFile(JournaledFile const&);
    JournaledFile();

public:
    // NOLINTBEGIN
    MCAPI explicit JournaledFile(std::function<class Core::Result(class Core::Path)>&& validationCallback);

    MCAPI class Core::Result
    open(class Core::Path filePath, class Core::FileOpenMode fileOpenMode, ::Core::FileBufferingMode bufferingMode);

    MCAPI class Core::Result write(void const* pBuf, uint64 numBytes);

    MCAPI ~JournaledFile();

    MCAPI static class Core::PathBuffer<std::string> findBackupPath(class Core::Path);

    MCAPI static class Core::PathBuffer<std::string> findReadPath(class Core::Path);

    MCAPI static bool isOldFile(class Core::Path fileName);

    MCAPI static void populateImportantFiles(class Core::Path fileName, std::vector<std::string>& importantFiles);

    MCAPI static class Core::Result replaceHeadFileWithBackup(class Core::Path fileName);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _flushFiles();

    // NOLINTEND
};
