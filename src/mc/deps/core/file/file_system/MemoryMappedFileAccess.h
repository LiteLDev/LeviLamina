#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/IFileAccess.h"
#include "mc/deps/core/file/file_system/IFileReadAccess.h"
#include "mc/deps/core/file/file_system/IFileWriteAccess.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FileAccessTransforms;
namespace Core { class Path; }
// clang-format on

class MemoryMappedFileAccess : public ::IFileAccess {
public:
    // MemoryMappedFileAccess inner types declare
    // clang-format off
    class MemoryMappedFileReadAccess;
    class MemoryMappedFileWriteAccess;
    struct StreamDetails;
    struct StreamHandle;
    // clang-format on

    // MemoryMappedFileAccess inner types define
    class MemoryMappedFileReadAccess : public ::IFileReadAccess {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 1
        virtual uint64 fread(void* buffer, uint64 size, uint64 count, void* file) const /*override*/;

        // vIndex: 0
        virtual ~MemoryMappedFileReadAccess() /*override*/;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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

    class MemoryMappedFileWriteAccess : public ::IFileWriteAccess {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 1
        virtual uint64 fwrite(void const* buffer, uint64 size, uint64 count, void* file) /*override*/;

        // vIndex: 0
        virtual ~MemoryMappedFileWriteAccess() /*override*/;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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

    struct StreamDetails {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk13ab55;
        ::ll::UntypedStorage<1, 1>  mUnk775850;
        ::ll::UntypedStorage<1, 1>  mUnkec4701;
        ::ll::UntypedStorage<1, 1>  mUnkb6b825;
        ::ll::UntypedStorage<1, 1>  mUnkb136e2;
        // NOLINTEND

    public:
        // prevent constructor by default
        StreamDetails& operator=(StreamDetails const&);
        StreamDetails(StreamDetails const&);
        StreamDetails();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~StreamDetails();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct StreamHandle {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkab4f17;
        ::ll::UntypedStorage<8, 8> mUnk52bd0b;
        // NOLINTEND

    public:
        // prevent constructor by default
        StreamHandle& operator=(StreamHandle const&);
        StreamHandle(StreamHandle const&);
        StreamHandle();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 8>  mUnk476651;
    ::ll::UntypedStorage<1, 8>  mUnk78c53b;
    ::ll::UntypedStorage<8, 8>  mUnk830cbf;
    ::ll::UntypedStorage<8, 64> mUnkdd41de;
    ::ll::UntypedStorage<8, 80> mUnka79312;
    ::ll::UntypedStorage<8, 16> mUnkfb890c;
    ::ll::UntypedStorage<8, 80> mUnkd6fa0b;
    ::ll::UntypedStorage<8, 24> mUnk5e3b74;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryMappedFileAccess& operator=(MemoryMappedFileAccess const&);
    MemoryMappedFileAccess(MemoryMappedFileAccess const&);
    MemoryMappedFileAccess();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MemoryMappedFileAccess() /*override*/;

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
    MCAPI MemoryMappedFileAccess(
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const& inner,
        ::std::unique_ptr<::FileAccessTransforms>           transforms
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::FileAccessTransforms const& EMPTY_TRANSFORMS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const& inner,
        ::std::unique_ptr<::FileAccessTransforms>           transforms
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
