#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/file/IFileAccess.h"
#include "mc/deps/file/IFileReadAccess.h"
#include "mc/deps/file/IFileWriteAccess.h"

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
        // vIndex: 0, symbol: ??1MemoryMappedFileReadAccess@MemoryMappedFileAccess@@UEAA@XZ
        virtual ~MemoryMappedFileReadAccess();

        // vIndex: 1, symbol: ?fread@MemoryMappedFileReadAccess@MemoryMappedFileAccess@@UEBA_KPEAX_K10@Z
        virtual uint64 fread(void*, uint64, uint64, void*) const;

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
        // vIndex: 0, symbol: ??1MemoryMappedFileWriteAccess@MemoryMappedFileAccess@@UEAA@XZ
        virtual ~MemoryMappedFileWriteAccess();

        // vIndex: 1, symbol: ?fwrite@MemoryMappedFileWriteAccess@MemoryMappedFileAccess@@UEAA_KPEBX_K1PEAX@Z
        virtual uint64 fwrite(void const*, uint64, uint64, void*);

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
        // symbol: ??1StreamDetails@MemoryMappedFileAccess@@QEAA@XZ
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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~MemoryMappedFileAccess();

    // vIndex: 1, symbol:
    // ?fopen@MemoryMappedFileAccess@@UEAAPEAXAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void* fopen(class Core::Path const&, std::string const&);

    // vIndex: 2, symbol: ?fclose@MemoryMappedFileAccess@@UEAAHPEAX@Z
    virtual int fclose(void*);

    // vIndex: 3, symbol: ?fseek@MemoryMappedFileAccess@@UEAAHPEAX_JH@Z
    virtual int fseek(void*, int64, int);

    // vIndex: 4, symbol: ?ftell@MemoryMappedFileAccess@@UEAA_JPEAX@Z
    virtual int64 ftell(void*);

    // vIndex: 5, symbol: ?getReadInterface@MemoryMappedFileAccess@@UEBAPEBVIFileReadAccess@@XZ
    virtual class IFileReadAccess const* getReadInterface() const;

    // vIndex: 6, symbol: ?getWriteInterface@MemoryMappedFileAccess@@UEAAPEAVIFileWriteAccess@@XZ
    virtual class IFileWriteAccess* getWriteInterface();

    // vIndex: 7, symbol: ?unload@MemoryMappedFileAccess@@UEAAXXZ
    virtual void unload();

    // symbol:
    // ??0MemoryMappedFileAccess@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@VIFileAccess@@@Bedrock@@@gsl@@V?$unique_ptr@VFileAccessTransforms@@U?$default_delete@VFileAccessTransforms@@@std@@@std@@@Z
    MCAPI
    MemoryMappedFileAccess(Bedrock::NotNullNonOwnerPtr<class IFileAccess> const&, std::unique_ptr<class FileAccessTransforms>);

    // symbol: ?EMPTY_TRANSFORMS@MemoryMappedFileAccess@@2VFileAccessTransforms@@B
    MCAPI static class FileAccessTransforms const EMPTY_TRANSFORMS;

    // NOLINTEND
};
