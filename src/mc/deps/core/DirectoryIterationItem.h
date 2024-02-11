#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/DirectoryIterationFlags.h"
#include "mc/deps/core/FileType.h"
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class PathPart; }
// clang-format on

namespace Core {

struct DirectoryIterationItem {
public:
    // prevent constructor by default
    DirectoryIterationItem& operator=(DirectoryIterationItem const&);
    DirectoryIterationItem(DirectoryIterationItem const&);
    DirectoryIterationItem();

public:
    // NOLINTBEGIN
    // symbol: ??0DirectoryIterationItem@Core@@QEAA@W4DirectoryIterationFlags@1@@Z
    MCAPI explicit DirectoryIterationItem(::Core::DirectoryIterationFlags flags);

    // symbol: ?getFileSize@DirectoryIterationItem@Core@@QEBA_KXZ
    MCAPI uint64 getFileSize() const;

    // symbol: ?getFileSizeAllocationOnDisk@DirectoryIterationItem@Core@@QEBA_KXZ
    MCAPI uint64 getFileSizeAllocationOnDisk() const;

    // symbol:
    // ?getFullPathName@DirectoryIterationItem@Core@@QEBAAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@XZ
    MCAPI class Core::PathBuffer<std::string> const& getFullPathName() const;

    // symbol: ?getName@DirectoryIterationItem@Core@@QEBAAEBVPathPart@2@XZ
    MCAPI class Core::PathPart const& getName() const;

    // symbol: ?getType@DirectoryIterationItem@Core@@QEBA?AW4FileType@2@XZ
    MCAPI ::Core::FileType getType() const;

    // symbol: ?isDirectory@DirectoryIterationItem@Core@@QEBA_NXZ
    MCAPI bool isDirectory() const;

    // symbol: ?isFile@DirectoryIterationItem@Core@@QEBA_NXZ
    MCAPI bool isFile() const;

    // symbol: ?setCreateTime@DirectoryIterationItem@Core@@QEAAX_J@Z
    MCAPI void setCreateTime(int64 time);

    // symbol: ?setFileSize@DirectoryIterationItem@Core@@QEAAX_K@Z
    MCAPI void setFileSize(uint64 size);

    // symbol: ?setFullPathName@DirectoryIterationItem@Core@@QEAAXAEBVPath@2@@Z
    MCAPI void setFullPathName(class Core::Path const& fullPathName);

    // symbol: ?setModifyTime@DirectoryIterationItem@Core@@QEAAX_J@Z
    MCAPI void setModifyTime(int64 modifyTime);

    // symbol: ?setName@DirectoryIterationItem@Core@@QEAAXAEBVPathPart@2@@Z
    MCAPI void setName(class Core::PathPart const& name);

    // symbol: ?setType@DirectoryIterationItem@Core@@QEAAXW4FileType@2@@Z
    MCAPI void setType(::Core::FileType type);

    // symbol: ??1DirectoryIterationItem@Core@@QEAA@XZ
    MCAPI ~DirectoryIterationItem();

    // NOLINTEND
};

}; // namespace Core
