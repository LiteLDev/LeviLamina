#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
namespace Core { class FileOpenMode; }
namespace Core { class FileSystemImpl; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class FileImpl {
public:
    // FileImpl inner types declare
    // clang-format off
    struct WriteBufferInfo;
    // clang-format on

    // FileImpl inner types define
    struct WriteBufferInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkec2ac3;
        ::ll::UntypedStorage<8, 80> mUnk52e0bb;
        // NOLINTEND

    public:
        // prevent constructor by default
        WriteBufferInfo& operator=(WriteBufferInfo const&);
        WriteBufferInfo(WriteBufferInfo const&);
        WriteBufferInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk77bcd9;
    ::ll::UntypedStorage<8, 8> mUnkb78983;
    ::ll::UntypedStorage<8, 8> mUnk95d296;
    ::ll::UntypedStorage<1, 1> mUnk1f6afd;
    // NOLINTEND

public:
    // prevent constructor by default
    FileImpl& operator=(FileImpl const&);
    FileImpl(FileImpl const&);
    FileImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileImpl();

    // vIndex: 1
    virtual ::Core::PathBuffer<::std::string> _getPath() const = 0;

    // vIndex: 2
    virtual uint64 _getBlockSize() const = 0;

    // vIndex: 3
    virtual bool _isOpen() = 0;

    // vIndex: 4
    virtual ::Core::Result _close() = 0;

    // vIndex: 5
    virtual ::Core::Result _read(void*, uint64, uint64*) = 0;

    // vIndex: 6
    virtual ::Core::Result _readExactly(void*, uint64) = 0;

    // vIndex: 7
    virtual ::Core::Result _skip(uint64) = 0;

    // vIndex: 8
    virtual ::Core::Result _readAtPosition(uint64, void*, uint64, uint64*) = 0;

    // vIndex: 9
    virtual ::Core::Result _getPosition(uint64*) = 0;

    // vIndex: 10
    virtual ::Core::Result _setPosition(uint64) = 0;

    // vIndex: 11
    virtual ::Core::Result _write(void const*, uint64) = 0;

    // vIndex: 12
    virtual ::Core::Result _flush() = 0;

    // vIndex: 13
    virtual ::Core::Result _getSize(uint64*) = 0;

    // vIndex: 14
    virtual ::Core::Result _getRemainingSize(uint64*) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FileImpl(::Core::FileSystemImpl* pTransaction, ::Core::FileOpenMode openMode);

    MCAPI ::Bedrock::Threading::UniqueLock<::std::recursive_mutex> _lockIfWriteBuffered(bool flushBuffer);

    MCAPI ::Core::Result _writeOperation(::Core::Result&& result, uint64 numBytesWritten);

    MCAPI ::Core::Result close();

    MCAPI ::Core::Result getPosition(uint64* pPosition);

    MCAPI ::Core::Result read(void* buf, uint64 numBytes, uint64* pNumBytesRead);

    MCAPI ::Core::Result readAtPosition(uint64 position, void* pBuf, uint64 numBytes, uint64* pNumBytesRead);

    MCAPI ::Core::Result readExactly(void* buf, uint64 numBytes);

    MCAPI ::Core::Result setPosition(uint64 position);

    MCAPI ::Core::Result skip(uint64 numBytes);

    MCAPI ::Core::Result write(void const* pBuf, uint64 numBytes);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::Core::FileImpl*>& sAllFiles();

    MCAPI static ::Bedrock::Threading::Mutex& sAllFilesLock();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::FileSystemImpl* pTransaction, ::Core::FileOpenMode openMode);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
