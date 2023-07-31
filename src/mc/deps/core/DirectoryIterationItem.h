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
    // NOLINTBEGIN
    /**
     * @symbol ??0DirectoryIterationItem\@Core\@\@QEAA\@W4DirectoryIterationFlags\@1\@\@Z
     */
    MCAPI DirectoryIterationItem(enum class Core::DirectoryIterationFlags);
    /**
     * @symbol ?getFileSize\@DirectoryIterationItem\@Core\@\@QEBA_KXZ
     */
    MCAPI uint64_t getFileSize() const;
    /**
     * @symbol ?getFileSizeAllocationOnDisk\@DirectoryIterationItem\@Core\@\@QEBA_KXZ
     */
    MCAPI uint64_t getFileSizeAllocationOnDisk() const;
    /**
     * @symbol
     * ?getFullPathName\@DirectoryIterationItem\@Core\@\@QEBAAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> const& getFullPathName() const;
    /**
     * @symbol ?getName\@DirectoryIterationItem\@Core\@\@QEBAAEBVPathPart\@2\@XZ
     */
    MCAPI class Core::PathPart const& getName() const;
    /**
     * @symbol ?getType\@DirectoryIterationItem\@Core\@\@QEBA?AW4FileType\@2\@XZ
     */
    MCAPI enum class Core::FileType getType() const;
    /**
     * @symbol ?isDirectory\@DirectoryIterationItem\@Core\@\@QEBA_NXZ
     */
    MCAPI bool isDirectory() const;
    /**
     * @symbol ?isFile\@DirectoryIterationItem\@Core\@\@QEBA_NXZ
     */
    MCAPI bool isFile() const;
    /**
     * @symbol ?setCreateTime\@DirectoryIterationItem\@Core\@\@QEAAX_J\@Z
     */
    MCAPI void setCreateTime(int64_t);
    /**
     * @symbol ?setFileSize\@DirectoryIterationItem\@Core\@\@QEAAX_K\@Z
     */
    MCAPI void setFileSize(uint64_t);
    /**
     * @symbol ?setFullPathName\@DirectoryIterationItem\@Core\@\@QEAAXAEBVPath\@2\@\@Z
     */
    MCAPI void setFullPathName(class Core::Path const&);
    /**
     * @symbol ?setModifyTime\@DirectoryIterationItem\@Core\@\@QEAAX_J\@Z
     */
    MCAPI void setModifyTime(int64_t);
    /**
     * @symbol ?setName\@DirectoryIterationItem\@Core\@\@QEAAXAEBVPathPart\@2\@\@Z
     */
    MCAPI void setName(class Core::PathPart const&);
    /**
     * @symbol ?setType\@DirectoryIterationItem\@Core\@\@QEAAXW4FileType\@2\@\@Z
     */
    MCAPI void setType(enum class Core::FileType);
    /**
     * @symbol ??1DirectoryIterationItem\@Core\@\@QEAA\@XZ
     */
    MCAPI ~DirectoryIterationItem();
    // NOLINTEND
};

}; // namespace Core
