#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/IFileAccess.h"
#include "mc/deps/core/file/file_system/IFileReadAccess.h"
#include "mc/deps/core/file/file_system/IFileWriteAccess.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
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
        virtual uint64 fread(void* buffer, uint64 size, uint64 count, void* file) const /*override*/;

        virtual ~FileSystemFileReadAccess() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI uint64 $fread(void* buffer, uint64 size, uint64 count, void* file) const;


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class FileSystemFileWriteAccess : public ::IFileWriteAccess {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual uint64 fwrite(void const* buffer, uint64 size, uint64 count, void* file) /*override*/;

        virtual ~FileSystemFileWriteAccess() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI uint64 $fwrite(void const* buffer, uint64 size, uint64 count, void* file);


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
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
#ifdef LL_PLAT_S
    virtual ~FileSystemFileAccess() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~FileSystemFileAccess() /*override*/;
#endif

    virtual void* fopen(::Core::PathView filePath, ::std::string const& mode) /*override*/;

    virtual int fclose(void* file) /*override*/;

    virtual int fseek(void* file, int64 offset, int origin) /*override*/;

    virtual int64 ftell(void* file) /*override*/;

    virtual ::IFileReadAccess const* getReadInterface() const /*override*/;

    virtual ::IFileWriteAccess* getWriteInterface() /*override*/;

    virtual void unload() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void* $fopen(::Core::PathView filePath, ::std::string const& mode);

    MCNAPI int $fclose(void* file);

    MCNAPI int $fseek(void* file, int64 offset, int origin);

    MCNAPI int64 $ftell(void* file);

    MCNAPI ::IFileReadAccess const* $getReadInterface() const;

    MCNAPI ::IFileWriteAccess* $getWriteInterface();

    MCNAPI void $unload();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
