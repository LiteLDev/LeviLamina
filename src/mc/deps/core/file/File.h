#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/StackString.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class File {
public:
    // prevent constructor by default
    File& operator=(File const&);
    File(File const&);
    File();

public:
    // NOLINTBEGIN
    MCAPI class Core::Result close();

    MCAPI class Core::Result
    open(class Core::Path const& fileName, class Core::FileOpenMode openMode, ::Core::FileBufferingMode bufferingMode);

    MCAPI class Core::Result write(void const* pBuf, uint64 numBytes);

    MCAPI ~File();

    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> cleanPath(class Core::Path const& entryPath
    );

    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>>
    cleanPathSeparators(class Core::Path const& entryPath);

    MCAPI static class Core::Result writeCreateOrAppendFileData(
        class Core::Path const&   path,
        uint64                    offset,
        uint64                    numBytesToWrite,
        std::vector<uchar> const& buffer
    );

    MCAPI static class Core::Result writeCreateOrAppendFileData(
        class Core::Path const& path,
        uint64                  offset,
        uint64                  numBytesToWrite,
        uchar const*            buffer
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Core
