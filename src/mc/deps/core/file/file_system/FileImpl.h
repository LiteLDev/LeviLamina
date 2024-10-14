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
    // prevent constructor by default
    FileImpl& operator=(FileImpl const&);
    FileImpl(FileImpl const&);
    FileImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileImpl();

    // vIndex: 1
    virtual class Core::PathBuffer<std::string> _getPath() const = 0;

    // vIndex: 2
    virtual uint64 _getBlockSize() const = 0;

    // vIndex: 3
    virtual bool _isOpen() = 0;

    // vIndex: 4
    virtual class Core::Result _close() = 0;

    // vIndex: 5
    virtual class Core::Result _read(void* pBuffer, uint64 numBytes, uint64* pNumBytesRead) = 0;

    // vIndex: 6
    virtual class Core::Result _readExactly(void* buf, uint64 numBytes) = 0;

    // vIndex: 7
    virtual class Core::Result _skip(uint64 numBytes) = 0;

    // vIndex: 8
    virtual class Core::Result _readAtPosition(uint64 position, void* pBuf, uint64 numBytes, uint64* pNumBytesRead) = 0;

    // vIndex: 9
    virtual class Core::Result _getPosition(uint64* pPosition) = 0;

    // vIndex: 10
    virtual class Core::Result _setPosition(uint64 position) = 0;

    // vIndex: 11
    virtual class Core::Result _write(void const*, uint64) = 0;

    // vIndex: 12
    virtual class Core::Result _flush() = 0;

    // vIndex: 13
    virtual class Core::Result _getSize(uint64* pSize) = 0;

    // vIndex: 14
    virtual class Core::Result _getRemainingSize(uint64* pFileSize) = 0;

    MCAPI FileImpl(class Core::FileSystemImpl* pTransaction, class Core::FileOpenMode openMode);

    MCAPI class Core::Result close();

    MCAPI class Core::Result flush();

    MCAPI uint64 getBlockSize() const;

    MCAPI class Core::FileOpenMode const& getOpenMode() const;

    MCAPI class Core::PathBuffer<std::string> getPath() const;

    MCAPI class Core::Result getPosition(uint64* pPosition);

    MCAPI class Core::Result getRemainingSize(uint64* pSize);

    MCAPI class Core::Result getSize(uint64* pSize);

    MCAPI class Core::FileSystemImpl* getTransaction();

    MCAPI bool isOpen();

    MCAPI class Core::Result read(void* buf, uint64 numBytes, uint64* pNumBytesRead);

    MCAPI class Core::Result readAtPosition(uint64 position, void* pBuf, uint64 numBytes, uint64* pNumBytesRead);

    MCAPI class Core::Result readExactly(void* buf, uint64 numBytes);

    MCAPI void setLoggingEnabled(bool loggingEnabled);

    MCAPI class Core::Result setPosition(uint64 position);

    MCAPI class Core::Result skip(uint64 numBytes);

    MCAPI class Core::Result write(void const* pBuf, uint64 numBytes);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Bedrock::Threading::UniqueLock<std::recursive_mutex> _lockIfWriteBuffered(bool flushBuffer);

    MCAPI class Core::Result _writeOperation(class Core::Result&& result, uint64 numBytesWritten);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static std::vector<class Core::FileImpl*>& sAllFiles();

    MCAPI static class Bedrock::Threading::Mutex& sAllFilesLock();

    // NOLINTEND
};

}; // namespace Core
