#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class FileSystemFileAccess {
public:
    // FileSystemFileAccess inner types declare
    // clang-format off
    class FileSystemFileReadAccess;
    class FileSystemFileWriteAccess;
    // clang-format on

    // FileSystemFileAccess inner types define
    class FileSystemFileReadAccess {

    public:
        // prevent constructor by default
        FileSystemFileReadAccess& operator=(FileSystemFileReadAccess const&) = delete;
        FileSystemFileReadAccess(FileSystemFileReadAccess const&)            = delete;
        FileSystemFileReadAccess()                                           = delete;

    public:
        // NOLINTBEGIN
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0();
        /**
         * @vftbl 1
         * @symbol ?fread\@FileSystemFileReadAccess\@FileSystemFileAccess\@\@UEBA_KPEAX_K10\@Z
         */
        virtual uint64_t fread(void*, uint64_t, uint64_t, void*) const;
        // NOLINTEND
    };

    class FileSystemFileWriteAccess {

    public:
        // prevent constructor by default
        FileSystemFileWriteAccess& operator=(FileSystemFileWriteAccess const&) = delete;
        FileSystemFileWriteAccess(FileSystemFileWriteAccess const&)            = delete;
        FileSystemFileWriteAccess()                                            = delete;

    public:
        // NOLINTBEGIN
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0();
        /**
         * @vftbl 1
         * @symbol ?fwrite\@FileSystemFileWriteAccess\@FileSystemFileAccess\@\@UEAA_KPEBX_K1PEAX\@Z
         */
        virtual uint64_t fwrite(void const*, uint64_t, uint64_t, void*);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    FileSystemFileAccess& operator=(FileSystemFileAccess const&) = delete;
    FileSystemFileAccess(FileSystemFileAccess const&)            = delete;
    FileSystemFileAccess()                                       = delete;

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
     * ?fopen\@FileSystemFileAccess\@\@UEAAPEAXAEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void* fopen(class Core::Path const&, std::string const&);
    /**
     * @vftbl 2
     * @symbol ?fclose\@FileSystemFileAccess\@\@UEAAHPEAX\@Z
     */
    virtual int fclose(void*);
    /**
     * @vftbl 3
     * @symbol ?fseek\@FileSystemFileAccess\@\@UEAAHPEAX_JH\@Z
     */
    virtual int fseek(void*, int64_t, int);
    /**
     * @vftbl 4
     * @symbol ?ftell\@FileSystemFileAccess\@\@UEAA_JPEAX\@Z
     */
    virtual int64_t ftell(void*);
    /**
     * @vftbl 5
     * @symbol ?getReadInterface\@FileSystemFileAccess\@\@UEBAPEBVIFileReadAccess\@\@XZ
     */
    virtual class IFileReadAccess const* getReadInterface() const;
    /**
     * @vftbl 6
     * @symbol ?getWriteInterface\@FileSystemFileAccess\@\@UEAAPEAVIFileWriteAccess\@\@XZ
     */
    virtual class IFileWriteAccess* getWriteInterface();
    /**
     * @vftbl 7
     * @symbol ?unload\@FileSystemFileAccess\@\@UEAAXXZ
     */
    virtual void unload();
    /**
     * @symbol ??0FileSystemFileAccess\@\@QEAA\@W4FileSystemMode\@\@\@Z
     */
    MCAPI FileSystemFileAccess(enum class FileSystemMode);
    // NOLINTEND
};
