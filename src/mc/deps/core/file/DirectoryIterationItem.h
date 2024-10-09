#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/PathBuffer.h"

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
    MCAPI explicit DirectoryIterationItem(::Core::DirectoryIterationFlags flags);

    MCAPI uint64 getFileSize() const;

    MCAPI uint64 getFileSizeAllocationOnDisk() const;

    MCAPI class Core::PathBuffer<std::string> const& getFullPathName() const;

    MCAPI class Core::PathPart const& getName() const;

    MCAPI ::Core::FileType getType() const;

    MCAPI bool isDirectory() const;

    MCAPI bool isFile() const;

    MCAPI void setCreateTime(int64 time);

    MCAPI void setFileSize(uint64 size);

    MCAPI void setFullPathName(class Core::Path const& fullPathName);

    MCAPI void setModifyTime(int64 modifyTime);

    MCAPI void setName(class Core::PathPart const& name);

    MCAPI void setType(::Core::FileType type);

    MCAPI ~DirectoryIterationItem();

    // NOLINTEND
};

}; // namespace Core
