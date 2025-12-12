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
namespace Core { class PathView; }
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
        virtual uint64 fread(void* buffer, uint64 size, uint64 count, void* file) const /*override*/;

        virtual ~MemoryMappedFileReadAccess() /*override*/;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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

    class MemoryMappedFileWriteAccess : public ::IFileWriteAccess {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual uint64 fwrite(void const* buffer, uint64 size, uint64 count, void* file) /*override*/;

        virtual ~MemoryMappedFileWriteAccess() /*override*/;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
        MCNAPI ~StreamDetails();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
    virtual ~MemoryMappedFileAccess() /*override*/;

    virtual void* fopen(::Core::PathView filePath, ::std::string const& mode) /*override*/;

    virtual int fclose(void* file) /*override*/;

    virtual int fseek(void* file, int64 offset, int origin) /*override*/;

    virtual int64 ftell(void* file) /*override*/;

    virtual ::IFileReadAccess const* getReadInterface() const /*override*/;

    virtual ::IFileWriteAccess* getWriteInterface() /*override*/;

    virtual void unload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MemoryMappedFileAccess(
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const& inner,
        ::std::unique_ptr<::FileAccessTransforms>           transforms
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::FileAccessTransforms const& EMPTY_TRANSFORMS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const& inner,
        ::std::unique_ptr<::FileAccessTransforms>           transforms
    );
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
