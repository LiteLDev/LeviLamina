#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileBufferingMode.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
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
    MCAPI
    File(::std::unique_ptr<::Core::FileImpl>&& uptFile, ::std::unique_ptr<::Core::FileSystemImpl>&& uptTransaction);

    MCAPI ::Core::Result close();

    MCAPI ::Core::Result getPosition(uint64* pPosition);

    MCAPI ::Core::Result getSize(uint64* pSize);

    MCAPI ::Core::Result
    open(::Core::PathView fileName, ::Core::FileOpenMode openMode, ::Core::FileBufferingMode bufferingMode);

    MCAPI ::Core::File& operator=(::Core::File&& rhs);

    MCAPI ::Core::Result read(void* buf, uint64 numBytes, uint64* pNumBytesRead);

    MCAPI ::Core::Result readExactly(void* buf, uint64 numBytes);

    MCAPI ::Core::Result setPosition(uint64 position);

    MCAPI ::Core::Result write(void const* pBuf, uint64 numBytes);

    MCAPI ~File();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Core::Result
    writeCreateOrAppendFileData(::Core::PathView path, uint64 offset, uint64 numBytesToWrite, uchar const* buffer);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::unique_ptr<::Core::FileImpl>&& uptFile, ::std::unique_ptr<::Core::FileSystemImpl>&& uptTransaction);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
