#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/file_system/FileImpl.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
namespace Core { class FileSystem_windows; }
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class File_c_windows : public ::Core::FileImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk67f6f1;
    ::ll::UntypedStorage<8, 32> mUnk849a86;
    // NOLINTEND

public:
    // prevent constructor by default
    File_c_windows& operator=(File_c_windows const&);
    File_c_windows(File_c_windows const&);
    File_c_windows();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~File_c_windows() /*override*/ = default;

    // vIndex: 1
    virtual ::Core::PathBuffer<::std::string> _getPath() const /*override*/;

    // vIndex: 2
    virtual uint64 _getBlockSize() const /*override*/;

    // vIndex: 3
    virtual bool _isOpen() /*override*/;

    // vIndex: 4
    virtual ::Core::Result _close() /*override*/;

    // vIndex: 5
    virtual ::Core::Result _read(void* buf, uint64 numBytes, uint64* pNumBytesRead) /*override*/;

    // vIndex: 6
    virtual ::Core::Result _readExactly(void* buf, uint64 numBytes) /*override*/;

    // vIndex: 8
    virtual ::Core::Result
    _readAtPosition(uint64 position, void* buf, uint64 numBytes, uint64* pNumBytesRead) /*override*/;

    // vIndex: 11
    virtual ::Core::Result _write(void const* buf, uint64 numBytes) /*override*/;

    // vIndex: 10
    virtual ::Core::Result _setPosition(uint64 position) /*override*/;

    // vIndex: 9
    virtual ::Core::Result _getPosition(uint64* pSizeOut) /*override*/;

    // vIndex: 7
    virtual ::Core::Result _skip(uint64 numBytes) /*override*/;

    // vIndex: 12
    virtual ::Core::Result _flush() /*override*/;

    // vIndex: 13
    virtual ::Core::Result _getSize(uint64* pSizeOut) /*override*/;

    // vIndex: 14
    virtual ::Core::Result _getRemainingSize(uint64* pSizeOut) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Result _open(
        ::Core::FileSystem_windows*          pTransaction,
        ::std::unique_ptr<::Core::FileImpl>& uptFile,
        ::Core::PathView                     filePath,
        ::Core::FileOpenMode                 fileOpenMode,
        ::Core::FileBufferingMode            bufferingMode
    );

    MCNAPI static ::std::string getExtendedLengthPath(::Core::PathView path);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Core::PathBuffer<::std::string> $_getPath() const;

    MCNAPI uint64 $_getBlockSize() const;

    MCNAPI bool $_isOpen();

    MCNAPI ::Core::Result $_close();

    MCNAPI ::Core::Result $_read(void* buf, uint64 numBytes, uint64* pNumBytesRead);

    MCNAPI ::Core::Result $_readExactly(void* buf, uint64 numBytes);

    MCNAPI ::Core::Result $_readAtPosition(uint64 position, void* buf, uint64 numBytes, uint64* pNumBytesRead);

    MCNAPI ::Core::Result $_write(void const* buf, uint64 numBytes);

    MCNAPI ::Core::Result $_setPosition(uint64 position);

    MCNAPI ::Core::Result $_getPosition(uint64* pSizeOut);

    MCNAPI ::Core::Result $_skip(uint64 numBytes);

    MCNAPI ::Core::Result $_flush();

    MCNAPI ::Core::Result $_getSize(uint64* pSizeOut);

    MCNAPI ::Core::Result $_getRemainingSize(uint64* pSizeOut);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
