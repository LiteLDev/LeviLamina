#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { enum class FileBufferingMode; }
// clang-format on

class JournaledFile {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JOURNALEDFILE
public:
    JournaledFile& operator=(JournaledFile const&) = delete;
    JournaledFile(JournaledFile const&)            = delete;
    JournaledFile()                                = delete;
#endif

public:
    /**
     * @symbol ??0JournaledFile\@\@QEAA\@$$QEAV?$function\@$$A6A?AVResult\@Core\@\@VPath\@2\@\@Z\@std\@\@\@Z
     */
    MCAPI JournaledFile(class std::function<class Core::Result(class Core::Path)>&&);
    /**
     * @symbol ?open\@JournaledFile\@\@QEAA?AVResult\@Core\@\@VPath\@3\@VFileOpenMode\@3\@W4FileBufferingMode\@3\@\@Z
     */
    MCAPI class Core::Result open(class Core::Path, class Core::FileOpenMode, enum class Core::FileBufferingMode);
    /**
     * @symbol ?write\@JournaledFile\@\@QEAA?AVResult\@Core\@\@PEBX_K\@Z
     */
    MCAPI class Core::Result write(void const*, unsigned __int64);
    /**
     * @symbol ??1JournaledFile\@\@QEAA\@XZ
     */
    MCAPI ~JournaledFile();
    /**
     * @symbol
     * ?findBackupPath\@JournaledFile\@\@SA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@VPath\@3\@\@Z
     */
    MCAPI static class Core::PathBuffer<std::string> findBackupPath(class Core::Path);
    /**
     * @symbol
     * ?findReadPath\@JournaledFile\@\@SA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@VPath\@3\@\@Z
     */
    MCAPI static class Core::PathBuffer<std::string> findReadPath(class Core::Path);
    /**
     * @symbol ?isOldFile\@JournaledFile\@\@SA_NVPath\@Core\@\@\@Z
     */
    MCAPI static bool isOldFile(class Core::Path);
    /**
     * @symbol
     * ?populateImportantFiles\@JournaledFile\@\@SAXVPath\@Core\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI static void populateImportantFiles(class Core::Path, std::vector<std::string>&);
    /**
     * @symbol ?replaceHeadFileWithBackup\@JournaledFile\@\@SA?AVResult\@Core\@\@VPath\@3\@\@Z
     */
    MCAPI static class Core::Result replaceHeadFileWithBackup(class Core::Path);

    // private:
    /**
     * @symbol ?_flushFiles\@JournaledFile\@\@AEAAXXZ
     */
    MCAPI void _flushFiles();

private:
};
