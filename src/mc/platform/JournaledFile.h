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
    // symbol: ??0JournaledFile@@QEAA@$$QEAV?$function@$$A6A?AVResult@Core@@VPath@2@@Z@std@@@Z
    MCAPI explicit JournaledFile(std::function<class Core::Result(class Core::Path)>&& validationCallback);

    // symbol: ?open@JournaledFile@@QEAA?AVResult@Core@@VPath@3@VFileOpenMode@3@W4FileBufferingMode@3@@Z
    MCAPI class Core::Result
    open(class Core::Path filePath, class Core::FileOpenMode fileOpenMode, ::Core::FileBufferingMode bufferingMode);

    // symbol: ?write@JournaledFile@@QEAA?AVResult@Core@@PEBX_K@Z
    MCAPI class Core::Result write(void const* pBuf, uint64 numBytes);

    // symbol: ??1JournaledFile@@QEAA@XZ
    MCAPI ~JournaledFile();

    // symbol:
    // ?findBackupPath@JournaledFile@@SA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@VPath@3@@Z
    MCAPI static class Core::PathBuffer<std::string> findBackupPath(class Core::Path);

    // symbol:
    // ?findReadPath@JournaledFile@@SA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@VPath@3@@Z
    MCAPI static class Core::PathBuffer<std::string> findReadPath(class Core::Path);

    // symbol: ?isOldFile@JournaledFile@@SA_NVPath@Core@@@Z
    MCAPI static bool isOldFile(class Core::Path fileName);

    // symbol:
    // ?populateImportantFiles@JournaledFile@@SAXVPath@Core@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI static void populateImportantFiles(class Core::Path fileName, std::vector<std::string>& importantFiles);

    // symbol: ?replaceHeadFileWithBackup@JournaledFile@@SA?AVResult@Core@@VPath@3@@Z
    MCAPI static class Core::Result replaceHeadFileWithBackup(class Core::Path fileName);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_flushFiles@JournaledFile@@AEAAXXZ
    MCAPI void _flushFiles();

    // NOLINTEND
};
