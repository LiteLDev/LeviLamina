#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/file_system/FileImpl.h"

// auto generated forward declare list
// clang-format off
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
    virtual ~FlatFile() /*override*/;

    virtual ::Core::PathBuffer<::std::string> _getPath() const /*override*/;

    virtual uint64 _getBlockSize() const /*override*/;

    virtual bool _isOpen() /*override*/;

    virtual ::Core::Result _close() /*override*/;

    virtual ::Core::Result _read(void* pBuffer, uint64 numBytes, uint64* pNumBytesRead) /*override*/;

    virtual ::Core::Result _readExactly(void* buf, uint64 numBytes) /*override*/;

    virtual ::Core::Result _skip(uint64 numBytes) /*override*/;

    virtual ::Core::Result
    _readAtPosition(uint64 position, void* pBuf, uint64 numBytes, uint64* pNumBytesRead) /*override*/;

    virtual ::Core::Result _getPosition(uint64* pPosition) /*override*/;

    virtual ::Core::Result _setPosition(uint64 position) /*override*/;

    virtual ::Core::Result _write(void const*, uint64) /*override*/;

    virtual ::Core::Result _flush() /*override*/;

    virtual ::Core::Result _getSize(uint64* pSize) /*override*/;

    virtual ::Core::Result _getRemainingSize(uint64* pFileSize) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Core::PathBuffer<::std::string> $_getPath() const;

    MCNAPI uint64 $_getBlockSize() const;

    MCNAPI bool $_isOpen();

    MCNAPI ::Core::Result $_close();

    MCNAPI ::Core::Result $_read(void* pBuffer, uint64 numBytes, uint64* pNumBytesRead);

    MCNAPI ::Core::Result $_readExactly(void* buf, uint64 numBytes);

    MCNAPI ::Core::Result $_skip(uint64 numBytes);

    MCNAPI ::Core::Result $_readAtPosition(uint64 position, void* pBuf, uint64 numBytes, uint64* pNumBytesRead);

    MCNAPI ::Core::Result $_getPosition(uint64* pPosition);

    MCNAPI ::Core::Result $_setPosition(uint64 position);

    MCNAPI ::Core::Result $_write(void const*, uint64);

    MCNAPI ::Core::Result $_flush();

    MCNAPI ::Core::Result $_getSize(uint64* pSize);

    MCNAPI ::Core::Result $_getRemainingSize(uint64* pFileSize);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
