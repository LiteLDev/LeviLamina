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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?fopen@MemoryMappedFileAccess@@UEAAPEAXAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void* fopen(class Core::Path const&, std::string const&) = 0;

    // vIndex: 2, symbol: ?fclose@MemoryMappedFileAccess@@UEAAHPEAX@Z
    virtual int fclose(void*) = 0;

    // vIndex: 3, symbol: ?fseek@MemoryMappedFileAccess@@UEAAHPEAX_JH@Z
    virtual int fseek(void*, int64, int) = 0;

    // vIndex: 4, symbol: ?ftell@MemoryMappedFileAccess@@UEAA_JPEAX@Z
    virtual int64 ftell(void*) = 0;

    // vIndex: 5, symbol: ?getReadInterface@MemoryMappedFileAccess@@UEBAPEBVIFileReadAccess@@XZ
    virtual class IFileReadAccess const* getReadInterface() const = 0;

    // vIndex: 6, symbol: ?getWriteInterface@MemoryMappedFileAccess@@UEAAPEAVIFileWriteAccess@@XZ
    virtual class IFileWriteAccess* getWriteInterface() = 0;

    // vIndex: 7, symbol: ?unload@MemoryMappedFileAccess@@UEAAXXZ
    virtual void unload() = 0;

    // symbol: ??1IFileAccess@@UEAA@XZ
    MCVAPI ~IFileAccess();

    // symbol: ??0IFileAccess@@QEAA@XZ
    MCAPI IFileAccess();

    // NOLINTEND
};
