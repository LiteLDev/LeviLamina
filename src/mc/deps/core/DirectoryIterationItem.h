#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class PathPart; }
namespace Core { enum class DirectoryIterationFlags; }
namespace Core { enum class FileType; }
// clang-format on

namespace Core {

struct DirectoryIterationItem {

public:
    // prevent constructor by default
    DirectoryIterationItem& operator=(DirectoryIterationItem const&) = delete;
    DirectoryIterationItem(DirectoryIterationItem const&)            = delete;
    DirectoryIterationItem()                                         = delete;

public:
    /**
     * @symbol ??0DirectoryIterationItem\@Core\@\@QEAA\@W4DirectoryIterationFlags\@1\@\@Z
     */
    MCAPI DirectoryIterationItem(enum class Core::DirectoryIterationFlags); // NOLINT
    /**
     * @symbol ?getFileSize\@DirectoryIterationItem\@Core\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getFileSize() const; // NOLINT
    /**
     * @symbol ?getFileSizeAllocationOnDisk\@DirectoryIterationItem\@Core\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getFileSizeAllocationOnDisk() const; // NOLINT
    /**
     * @symbol
     * ?getFullPathName\@DirectoryIterationItem\@Core\@\@QEBAAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> const& getFullPathName() const; // NOLINT
    /**
     * @symbol ?getName\@DirectoryIterationItem\@Core\@\@QEBAAEBVPathPart\@2\@XZ
     */
    MCAPI class Core::PathPart const& getName() const; // NOLINT
    /**
     * @symbol ?getType\@DirectoryIterationItem\@Core\@\@QEBA?AW4FileType\@2\@XZ
     */
    MCAPI enum class Core::FileType getType() const; // NOLINT
    /**
     * @symbol ?isDirectory\@DirectoryIterationItem\@Core\@\@QEBA_NXZ
     */
    MCAPI bool isDirectory() const; // NOLINT
    /**
     * @symbol ?isFile\@DirectoryIterationItem\@Core\@\@QEBA_NXZ
     */
    MCAPI bool isFile() const; // NOLINT
    /**
     * @symbol ?setCreateTime\@DirectoryIterationItem\@Core\@\@QEAAX_J\@Z
     */
    MCAPI void setCreateTime(__int64); // NOLINT
    /**
     * @symbol ?setFileSize\@DirectoryIterationItem\@Core\@\@QEAAX_K\@Z
     */
    MCAPI void setFileSize(unsigned __int64); // NOLINT
    /**
     * @symbol ?setFullPathName\@DirectoryIterationItem\@Core\@\@QEAAXAEBVPath\@2\@\@Z
     */
    MCAPI void setFullPathName(class Core::Path const&); // NOLINT
    /**
     * @symbol ?setModifyTime\@DirectoryIterationItem\@Core\@\@QEAAX_J\@Z
     */
    MCAPI void setModifyTime(__int64); // NOLINT
    /**
     * @symbol ?setName\@DirectoryIterationItem\@Core\@\@QEAAXAEBVPathPart\@2\@\@Z
     */
    MCAPI void setName(class Core::PathPart const&); // NOLINT
    /**
     * @symbol ?setType\@DirectoryIterationItem\@Core\@\@QEAAXW4FileType\@2\@\@Z
     */
    MCAPI void setType(enum class Core::FileType); // NOLINT
    /**
     * @symbol ??1DirectoryIterationItem\@Core\@\@QEAA\@XZ
     */
    MCAPI ~DirectoryIterationItem(); // NOLINT
};

}; // namespace Core
