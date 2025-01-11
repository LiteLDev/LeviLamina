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
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 1
        virtual uint64 fread(void* buffer, uint64 size, uint64 count, void* file) const /*override*/;

        // vIndex: 0
        virtual ~FileSystemFileReadAccess() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI uint64 $fread(void* buffer, uint64 size, uint64 count, void* file) const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

    class FileSystemFileWriteAccess : public ::IFileWriteAccess {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 1
        virtual uint64 fwrite(void const* buffer, uint64 size, uint64 count, void* file) /*override*/;

        // vIndex: 0
        virtual ~FileSystemFileWriteAccess() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI uint64 $fwrite(void const* buffer, uint64 size, uint64 count, void* file);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd7988c;
    ::ll::UntypedStorage<1, 8> mUnkfe4141;
    ::ll::UntypedStorage<1, 8> mUnk1845b8;
    // NOLINTEND

public:
    // prevent constructor by default
    FileSystemFileAccess& operator=(FileSystemFileAccess const&);
    FileSystemFileAccess(FileSystemFileAccess const&);
    FileSystemFileAccess();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileSystemFileAccess() /*override*/ = default;

    // vIndex: 1
    virtual void* fopen(::Core::Path const& filePath, ::std::string const& mode) /*override*/;

    // vIndex: 2
    virtual int fclose(void* file) /*override*/;

    // vIndex: 3
    virtual int fseek(void* file, int64 offset, int origin) /*override*/;

    // vIndex: 4
    virtual int64 ftell(void* file) /*override*/;

    // vIndex: 5
    virtual ::IFileReadAccess const* getReadInterface() const /*override*/;

    // vIndex: 6
    virtual ::IFileWriteAccess* getWriteInterface() /*override*/;

    // vIndex: 7
    virtual void unload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FileSystemFileAccess(::FileSystemMode mode);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::FileSystemMode mode);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void* $fopen(::Core::Path const& filePath, ::std::string const& mode);

    MCAPI int $fclose(void* file);

    MCAPI int $fseek(void* file, int64 offset, int origin);

    MCAPI int64 $ftell(void* file);

    MCAPI ::IFileReadAccess const* $getReadInterface() const;

    MCAPI ::IFileWriteAccess* $getWriteInterface();

    MCAPI void $unload();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
