#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/file/IFileAccess.h"
#include "mc/deps/file/IFileReadAccess.h"
#include "mc/deps/file/IFileWriteAccess.h"
#include "mc/entity/systems/common/FileSystemMode.h"

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
        // vIndex: 0, symbol: __gen_??1FileSystemFileReadAccess@FileSystemFileAccess@@UEAA@XZ
        virtual ~FileSystemFileReadAccess() = default;

        // vIndex: 1, symbol: ?fread@FileSystemFileReadAccess@FileSystemFileAccess@@UEBA_KPEAX_K10@Z
        virtual uint64 fread(void* buffer, uint64 size, uint64 count, void* file) const;

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
        // vIndex: 0, symbol: __gen_??1FileSystemFileWriteAccess@FileSystemFileAccess@@UEAA@XZ
        virtual ~FileSystemFileWriteAccess() = default;

        // vIndex: 1, symbol: ?fwrite@FileSystemFileWriteAccess@FileSystemFileAccess@@UEAA_KPEBX_K1PEAX@Z
        virtual uint64 fwrite(void const* buffer, uint64 size, uint64 count, void* file);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    FileSystemFileAccess& operator=(FileSystemFileAccess const&);
    FileSystemFileAccess(FileSystemFileAccess const&);
    FileSystemFileAccess();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FileSystemFileAccess@@UEAA@XZ
    virtual ~FileSystemFileAccess() = default;

    // vIndex: 1, symbol:
    // ?fopen@FileSystemFileAccess@@UEAAPEAXAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void* fopen(class Core::Path const& filePath, std::string const& mode);

    // vIndex: 2, symbol: ?fclose@FileSystemFileAccess@@UEAAHPEAX@Z
    virtual int fclose(void* file);

    // vIndex: 3, symbol: ?fseek@FileSystemFileAccess@@UEAAHPEAX_JH@Z
    virtual int fseek(void* file, int64 offset, int origin);

    // vIndex: 4, symbol: ?ftell@FileSystemFileAccess@@UEAA_JPEAX@Z
    virtual int64 ftell(void* file);

    // vIndex: 5, symbol: ?getReadInterface@FileSystemFileAccess@@UEBAPEBVIFileReadAccess@@XZ
    virtual class IFileReadAccess const* getReadInterface() const;

    // vIndex: 6, symbol: ?getWriteInterface@FileSystemFileAccess@@UEAAPEAVIFileWriteAccess@@XZ
    virtual class IFileWriteAccess* getWriteInterface();

    // vIndex: 7, symbol: ?unload@FileSystemFileAccess@@UEAAXXZ
    virtual void unload();

    // symbol: ??0FileSystemFileAccess@@QEAA@W4FileSystemMode@@@Z
    MCAPI explicit FileSystemFileAccess(::FileSystemMode mode);

    // NOLINTEND
};
