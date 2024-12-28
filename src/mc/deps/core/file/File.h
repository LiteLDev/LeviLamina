#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class File {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk222808;
    ::ll::UntypedStorage<8, 8> mUnke0759b;
    // NOLINTEND

public:
    // prevent constructor by default
    File& operator=(File const&);
    File(File const&);
    File();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Core::Result close();

    MCAPI ::Core::Result
    open(::Core::Path const& fileName, ::Core::FileOpenMode openMode, ::Core::FileBufferingMode bufferingMode);

    MCAPI ::Core::Result write(void const* pBuf, uint64 numBytes);

    MCAPI ~File();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> cleanPath(::Core::Path const& entryPath);

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    cleanPathSeparators(::Core::Path const& entryPath);

    MCAPI static ::Core::Result writeCreateOrAppendFileData(
        ::Core::Path const&         path,
        uint64                      offset,
        uint64                      numBytesToWrite,
        ::std::vector<uchar> const& buffer
    );

    MCAPI static ::Core::Result
    writeCreateOrAppendFileData(::Core::Path const& path, uint64 offset, uint64 numBytesToWrite, uchar const* buffer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
