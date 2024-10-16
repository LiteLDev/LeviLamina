#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/file_system/FileImpl.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class FlatFile : public ::Core::FileImpl {
public:
    // prevent constructor by default
    FlatFile& operator=(FlatFile const&);
    FlatFile(FlatFile const&);
    FlatFile();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FlatFile() = default;

    // vIndex: 1
    virtual class Core::PathBuffer<std::string> _getPath() const;

    // vIndex: 2
    virtual uint64 _getBlockSize() const;

    // vIndex: 3
    virtual bool _isOpen();

    // vIndex: 4
    virtual class Core::Result _close();

    // vIndex: 5
    virtual class Core::Result _read(void* pBuffer, uint64 numBytes, uint64* pNumBytesRead);

    // vIndex: 6
    virtual class Core::Result _readExactly(void* buf, uint64 numBytes);

    // vIndex: 7
    virtual class Core::Result _skip(uint64 numBytes);

    // vIndex: 8
    virtual class Core::Result _readAtPosition(uint64 position, void* pBuf, uint64 numBytes, uint64* pNumBytesRead);

    // vIndex: 9
    virtual class Core::Result _getPosition(uint64* pPosition);

    // vIndex: 10
    virtual class Core::Result _setPosition(uint64 position);

    // vIndex: 11
    virtual class Core::Result _write(void const*, uint64);

    // vIndex: 12
    virtual class Core::Result _flush();

    // vIndex: 13
    virtual class Core::Result _getSize(uint64* pSize);

    // vIndex: 14
    virtual class Core::Result _getRemainingSize(uint64* pFileSize);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI class Core::Result _close$();

    MCAPI class Core::Result _flush$();

    MCAPI uint64 _getBlockSize$() const;

    MCAPI class Core::PathBuffer<std::string> _getPath$() const;

    MCAPI class Core::Result _getPosition$(uint64* pPosition);

    MCAPI class Core::Result _getRemainingSize$(uint64* pFileSize);

    MCAPI class Core::Result _getSize$(uint64* pSize);

    MCAPI bool _isOpen$();

    MCAPI class Core::Result _read$(void* pBuffer, uint64 numBytes, uint64* pNumBytesRead);

    MCAPI class Core::Result _readAtPosition$(uint64 position, void* pBuf, uint64 numBytes, uint64* pNumBytesRead);

    MCAPI class Core::Result _readExactly$(void* buf, uint64 numBytes);

    MCAPI class Core::Result _setPosition$(uint64 position);

    MCAPI class Core::Result _skip$(uint64 numBytes);

    MCAPI class Core::Result _write$(void const*, uint64);

    // NOLINTEND
};

}; // namespace Core
