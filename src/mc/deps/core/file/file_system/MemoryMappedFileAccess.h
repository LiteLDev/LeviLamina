#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/IFileAccess.h"
#include "mc/deps/core/file/file_system/IFileReadAccess.h"
#include "mc/deps/core/file/file_system/IFileWriteAccess.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class MemoryMappedFileAccess : public ::IFileAccess {
public:
    // MemoryMappedFileAccess inner types declare
    // clang-format off
    class MemoryMappedFileReadAccess;
    class MemoryMappedFileWriteAccess;
    struct StreamDetails;
    // clang-format on

    // MemoryMappedFileAccess inner types define
    class MemoryMappedFileReadAccess : public ::IFileReadAccess {
    public:
        // prevent constructor by default
        MemoryMappedFileReadAccess& operator=(MemoryMappedFileReadAccess const&);
        MemoryMappedFileReadAccess(MemoryMappedFileReadAccess const&);
        MemoryMappedFileReadAccess();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~MemoryMappedFileReadAccess();

        // vIndex: 1
        virtual uint64 fread(void* buffer, uint64 size, uint64 count, void* file) const;

        // NOLINTEND
    };

    class MemoryMappedFileWriteAccess : public ::IFileWriteAccess {
    public:
        // prevent constructor by default
        MemoryMappedFileWriteAccess& operator=(MemoryMappedFileWriteAccess const&);
        MemoryMappedFileWriteAccess(MemoryMappedFileWriteAccess const&);
        MemoryMappedFileWriteAccess();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~MemoryMappedFileWriteAccess();

        // vIndex: 1
        virtual uint64 fwrite(void const* buffer, uint64 size, uint64 count, void* file);

        // NOLINTEND
    };

    struct StreamDetails {
    public:
        // prevent constructor by default
        StreamDetails& operator=(StreamDetails const&);
        StreamDetails(StreamDetails const&);
        StreamDetails();

    public:
        // NOLINTBEGIN
        MCAPI ~StreamDetails();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    MemoryMappedFileAccess& operator=(MemoryMappedFileAccess const&);
    MemoryMappedFileAccess(MemoryMappedFileAccess const&);
    MemoryMappedFileAccess();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MemoryMappedFileAccess() = default;

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

    MCAPI MemoryMappedFileAccess(
        Bedrock::NotNullNonOwnerPtr<class IFileAccess> const& inner,
        std::unique_ptr<class FileAccessTransforms>           transforms
    );

    MCAPI static class FileAccessTransforms const EMPTY_TRANSFORMS;

    // NOLINTEND
};
