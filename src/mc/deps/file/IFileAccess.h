#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class IFileAccess : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    IFileAccess& operator=(IFileAccess const&) = delete;
    IFileAccess(IFileAccess const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?fopen\@MemoryMappedFileAccess\@\@UEAAPEAXAEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void* fopen(class Core::Path const&, std::string const&) = 0;
    /**
     * @vftbl 2
     * @symbol ?fclose\@MemoryMappedFileAccess\@\@UEAAHPEAX\@Z
     */
    virtual int fclose(void*) = 0;
    /**
     * @vftbl 3
     * @symbol ?fseek\@MemoryMappedFileAccess\@\@UEAAHPEAX_JH\@Z
     */
    virtual int fseek(void*, int64_t, int) = 0;
    /**
     * @vftbl 4
     * @symbol ?ftell\@MemoryMappedFileAccess\@\@UEAA_JPEAX\@Z
     */
    virtual int64_t ftell(void*) = 0;
    /**
     * @vftbl 5
     * @symbol ?getReadInterface\@MemoryMappedFileAccess\@\@UEBAPEBVIFileReadAccess\@\@XZ
     */
    virtual class IFileReadAccess const* getReadInterface() const = 0;
    /**
     * @vftbl 6
     * @symbol ?getWriteInterface\@MemoryMappedFileAccess\@\@UEAAPEAVIFileWriteAccess\@\@XZ
     */
    virtual class IFileWriteAccess* getWriteInterface() = 0;
    /**
     * @vftbl 7
     * @symbol ?unload\@MemoryMappedFileAccess\@\@UEAAXXZ
     */
    virtual void unload() = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IFILEACCESS
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IFileAccess();
#endif
    /**
     * @symbol ??0IFileAccess\@\@QEAA\@XZ
     */
    MCAPI IFileAccess();
    // NOLINTEND
};
