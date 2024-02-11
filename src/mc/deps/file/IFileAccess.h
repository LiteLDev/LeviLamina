#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Core { class Path; }
// clang-format on

class IFileAccess : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IFileAccess& operator=(IFileAccess const&);
    IFileAccess(IFileAccess const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IFileAccess@@UEAA@XZ
    virtual ~IFileAccess();

    // vIndex: 1, symbol:
    // ?fopen@FileSystemFileAccess@@UEAAPEAXAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void* fopen(class Core::Path const& filePath, std::string const& mode) = 0;

    // vIndex: 2, symbol: ?fclose@FileSystemFileAccess@@UEAAHPEAX@Z
    virtual int fclose(void* file) = 0;

    // vIndex: 3, symbol: ?fseek@FileSystemFileAccess@@UEAAHPEAX_JH@Z
    virtual int fseek(void* file, int64 offset, int origin) = 0;

    // vIndex: 4, symbol: ?ftell@FileSystemFileAccess@@UEAA_JPEAX@Z
    virtual int64 ftell(void* file) = 0;

    // vIndex: 5, symbol: ?getReadInterface@FileSystemFileAccess@@UEBAPEBVIFileReadAccess@@XZ
    virtual class IFileReadAccess const* getReadInterface() const = 0;

    // vIndex: 6, symbol: ?getWriteInterface@FileSystemFileAccess@@UEAAPEAVIFileWriteAccess@@XZ
    virtual class IFileWriteAccess* getWriteInterface() = 0;

    // vIndex: 7, symbol: ?unload@FileSystemFileAccess@@UEAAXXZ
    virtual void unload() = 0;

    // symbol: ??0IFileAccess@@QEAA@XZ
    MCAPI IFileAccess();

    // NOLINTEND
};
