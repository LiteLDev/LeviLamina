#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathPart; }
namespace Core { class PathView; }
// clang-format on

namespace Core {

struct DirectoryIterationItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkba94d0;
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
    MCNAPI explicit DirectoryIterationItem(::Core::DirectoryIterationFlags flags);

    MCNAPI uint64 getFileSize() const;

    MCNAPI ::Core::PathBuffer<::std::string> const& getFullPathName() const;

    MCNAPI int64 getModifyTime() const;

    MCNAPI ::Core::PathPart const& getName() const;

    MCNAPI ::Core::FileType getType() const;

    MCNAPI bool isDirectory() const;

    MCNAPI bool isFile() const;

    MCNAPI void setCreateTime(int64 time);

    MCNAPI void setFileSize(uint64 size);

    MCNAPI void setFullPathName(::Core::PathView fullPathName);

    MCNAPI void setModifyTime(int64 modifyTime);

    MCNAPI void setName(::Core::PathPart const& name);

    MCNAPI void setType(::Core::FileType type);

    MCNAPI ~DirectoryIterationItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::DirectoryIterationFlags flags);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
