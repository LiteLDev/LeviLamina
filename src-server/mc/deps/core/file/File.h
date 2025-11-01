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
namespace brstd { struct source_location; }
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
    MCNAPI
    File(::std::unique_ptr<::Core::FileImpl>&& uptFile, ::std::unique_ptr<::Core::FileSystemImpl>&& uptTransaction);

    MCNAPI ::Core::Result close();

    MCNAPI ::Core::Result getRemainingSize(uint64* pSize);

    MCNAPI ::Core::Result getSize(uint64* pSize);

    MCNAPI ::Core::Result
    open(::Core::PathView fileName, ::Core::FileOpenMode openMode, ::Core::FileBufferingMode bufferingMode);

    MCNAPI ::Core::File& operator=(::Core::File&& rhs);

    MCNAPI ::Core::Result read(void* buf, uint64 numBytes, uint64* pNumBytesRead);

    MCNAPI ::Core::Result readExactly(void* buf, uint64 numBytes);

    MCNAPI ::Core::Result setPosition(uint64 position);

    MCNAPI ::Core::Result write(void const* pBuf, uint64 numBytes);

    MCNAPI ~File();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Result writeCreateOrAppendFileData(
        ::Core::PathView         path,
        uint64                   offset,
        uint64                   numBytesToWrite,
        uchar const*             buffer,
        ::brstd::source_location sourceLocation
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::unique_ptr<::Core::FileImpl>&& uptFile, ::std::unique_ptr<::Core::FileSystemImpl>&& uptTransaction);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
