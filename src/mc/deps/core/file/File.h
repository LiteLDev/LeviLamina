#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace brstd { struct source_location; }
// clang-format on

namespace Core {

class File {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7813fc;
    ::ll::UntypedStorage<8, 8> mUnk6dd4a2;
    // NOLINTEND

public:
    // prevent constructor by default
    File& operator=(File const&);
    File(File const&);
    File();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Core::Result close();

    MCNAPI bool isNearTransactionLimit(uint64 windowSize) const;

    MCNAPI ::Core::Result
    open(::Core::PathView fileName, ::Core::FileOpenMode openMode, ::Core::FileBufferingMode bufferingMode);

    MCNAPI ~File();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> cleanPath(::Core::PathView entryPath);

#ifdef LL_PLAT_C
    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    cleanPathSeparators(::Core::PathView entryPath);
#endif

    MCNAPI static ::Core::Result writeCreateOrAppendFileData(
        ::Core::PathView            path,
        uint64                      offset,
        uint64                      numBytesToWrite,
        ::std::vector<uchar> const& buffer,
        ::brstd::source_location    sourceLocation
    );

    MCNAPI static ::Core::Result writeCreateOrAppendFileData(
        ::Core::PathView path,
        uint64           offset,
        uint64           numBytesToWrite,
        uchar const*     buffer,
        ::brstd::source_location
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
