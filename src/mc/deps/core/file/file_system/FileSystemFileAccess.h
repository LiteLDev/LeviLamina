#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/FileSystemMode.h"
#include "mc/deps/core/file/file_system/IFileAccess.h"
#include "mc/deps/core/file/file_system/IFileReadAccess.h"
#include "mc/deps/core/file/file_system/IFileWriteAccess.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class FileSystemFileAccess : public ::IFileAccess {
public:
    // FileSystemFileAccess inner types declare
    // clang-format off
    class FileSystemFileReadAccess;
    class FileSystemFileWriteAccess;
    // clang-format on

    // FileSystemFileAccess inner types define
    class FileSystemFileReadAccess : public ::IFileReadAccess {
    public:
        // prevent constructor by default
        FileSystemFileReadAccess& operator=(FileSystemFileReadAccess const&);
        FileSystemFileReadAccess(FileSystemFileReadAccess const&);
        FileSystemFileReadAccess();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~FileSystemFileReadAccess() = default;

        // vIndex: 1
        virtual uint64 fread(void* buffer, uint64 size, uint64 count, void* file) const;

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        MCAPI uint64 fread$(void* buffer, uint64 size, uint64 count, void* file) const;

        // NOLINTEND
    };

    class FileSystemFileWriteAccess : public ::IFileWriteAccess {
    public:
        // prevent constructor by default
        FileSystemFileWriteAccess& operator=(FileSystemFileWriteAccess const&);
        FileSystemFileWriteAccess(FileSystemFileWriteAccess const&);
        FileSystemFileWriteAccess();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~FileSystemFileWriteAccess() = default;

        // vIndex: 1
        virtual uint64 fwrite(void const* buffer, uint64 size, uint64 count, void* file);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        MCAPI uint64 fwrite$(void const* buffer, uint64 size, uint64 count, void* file);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    FileSystemFileAccess& operator=(FileSystemFileAccess const&);
    FileSystemFileAccess(FileSystemFileAccess const&);
    FileSystemFileAccess();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileSystemFileAccess() = default;

    // vIndex: 1
    virtual void* fopen(class Core::Path const& filePath, std::string const& mode);

    // vIndex: 2
    virtual int fclose(void* file);

    // vIndex: 3
    virtual int fseek(void* file, int64 offset, int origin);

    // vIndex: 4
    virtual int64 ftell(void* file);

    // vIndex: 5
    virtual class IFileReadAccess const* getReadInterface() const;

    // vIndex: 6
    virtual class IFileWriteAccess* getWriteInterface();

    // vIndex: 7
    virtual void unload();

    MCAPI explicit FileSystemFileAccess(::FileSystemMode mode);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(::FileSystemMode mode);

    MCAPI int fclose$(void* file);

    MCAPI void* fopen$(class Core::Path const& filePath, std::string const& mode);

    MCAPI int fseek$(void* file, int64 offset, int origin);

    MCAPI int64 ftell$(void* file);

    MCAPI class IFileReadAccess const* getReadInterface$() const;

    MCAPI class IFileWriteAccess* getWriteInterface$();

    MCAPI void unload$();

    // NOLINTEND
};
