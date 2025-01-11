#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/file_system/FileImpl.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
namespace Core { class FileSystemImpl; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class FlatFile : public ::Core::FileImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc183e8;
    ::ll::UntypedStorage<8, 32> mUnkb8624e;
    ::ll::UntypedStorage<8, 8>  mUnk4bee19;
    ::ll::UntypedStorage<8, 8>  mUnk7e387d;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatFile& operator=(FlatFile const&);
    FlatFile(FlatFile const&);
    FlatFile();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FlatFile() /*override*/ = default;

    // vIndex: 1
    virtual ::Core::PathBuffer<::std::string> _getPath() const /*override*/;

    // vIndex: 2
    virtual uint64 _getBlockSize() const /*override*/;

    // vIndex: 3
    virtual bool _isOpen() /*override*/;

    // vIndex: 4
    virtual ::Core::Result _close() /*override*/;

    // vIndex: 5
    virtual ::Core::Result _read(void* pBuffer, uint64 numBytes, uint64* pNumBytesRead) /*override*/;

    // vIndex: 6
    virtual ::Core::Result _readExactly(void* buf, uint64 numBytes) /*override*/;

    // vIndex: 7
    virtual ::Core::Result _skip(uint64 numBytes) /*override*/;

    // vIndex: 8
    virtual ::Core::Result
    _readAtPosition(uint64 position, void* pBuf, uint64 numBytes, uint64* pNumBytesRead) /*override*/;

    // vIndex: 9
    virtual ::Core::Result _getPosition(uint64* pPosition) /*override*/;

    // vIndex: 10
    virtual ::Core::Result _setPosition(uint64 position) /*override*/;

    // vIndex: 11
    virtual ::Core::Result _write(void const*, uint64) /*override*/;

    // vIndex: 12
    virtual ::Core::Result _flush() /*override*/;

    // vIndex: 13
    virtual ::Core::Result _getSize(uint64* pSize) /*override*/;

    // vIndex: 14
    virtual ::Core::Result _getRemainingSize(uint64* pFileSize) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FlatFile(
        ::Core::FileSystemImpl*             pTransaction,
        ::Core::FileOpenMode                fileOpenMode,
        ::std::unique_ptr<::Core::FileImpl> baseFile,
        ::Core::Path const&                 path,
        uint64                              seekPos,
        uint64                              fileSize
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Core::FileSystemImpl*             pTransaction,
        ::Core::FileOpenMode                fileOpenMode,
        ::std::unique_ptr<::Core::FileImpl> baseFile,
        ::Core::Path const&                 path,
        uint64                              seekPos,
        uint64                              fileSize
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Core::PathBuffer<::std::string> $_getPath() const;

    MCAPI uint64 $_getBlockSize() const;

    MCAPI bool $_isOpen();

    MCAPI ::Core::Result $_close();

    MCAPI ::Core::Result $_read(void* pBuffer, uint64 numBytes, uint64* pNumBytesRead);

    MCAPI ::Core::Result $_readExactly(void* buf, uint64 numBytes);

    MCAPI ::Core::Result $_skip(uint64 numBytes);

    MCAPI ::Core::Result $_readAtPosition(uint64 position, void* pBuf, uint64 numBytes, uint64* pNumBytesRead);

    MCAPI ::Core::Result $_getPosition(uint64* pPosition);

    MCAPI ::Core::Result $_setPosition(uint64 position);

    MCFOLD ::Core::Result $_write(void const*, uint64);

    MCFOLD ::Core::Result $_flush();

    MCAPI ::Core::Result $_getSize(uint64* pSize);

    MCAPI ::Core::Result $_getRemainingSize(uint64* pFileSize);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
