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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1011ef;
    ::ll::UntypedStorage<8, 32> mUnk2172c9;
    ::ll::UntypedStorage<8, 8>  mUnk657388;
    ::ll::UntypedStorage<8, 8>  mUnk5990e0;
    ::ll::UntypedStorage<4, 4>  mUnk657618;
    ::ll::UntypedStorage<8, 8>  mUnkd41f5c;
    ::ll::UntypedStorage<8, 8>  mUnkf25ac3;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryIterationItem& operator=(DirectoryIterationItem const&);
    DirectoryIterationItem(DirectoryIterationItem const&);
    DirectoryIterationItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DirectoryIterationItem(::Core::DirectoryIterationFlags flags);

    MCFOLD uint64 getFileSize() const;

    MCFOLD uint64 getFileSizeAllocationOnDisk() const;

    MCFOLD ::Core::PathBuffer<::std::string> const& getFullPathName() const;

    MCFOLD int64 getModifyTime() const;

    MCFOLD ::Core::PathPart const& getName() const;

    MCFOLD ::Core::FileType getType() const;

    MCAPI bool isDirectory() const;

    MCAPI bool isFile() const;

    MCAPI void setCreateTime(int64 time);

    MCFOLD void setFileSize(uint64 size);

    MCAPI void setFullPathName(::Core::Path const& fullPathName);

    MCFOLD void setModifyTime(int64 modifyTime);

    MCFOLD void setName(::Core::PathPart const& name);

    MCFOLD void setType(::Core::FileType type);

    MCAPI ~DirectoryIterationItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::DirectoryIterationFlags flags);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
