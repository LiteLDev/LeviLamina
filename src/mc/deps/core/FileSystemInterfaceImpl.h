#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
namespace Core { class IFile; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { enum class DirectoryIterationFlags; }
namespace Core { enum class FileBufferingMode; }
namespace Core { struct DirectoryIterationItem; }
// clang-format on

namespace Core {

class FileSystemInterfaceImpl {

public:
    // prevent constructor by default
    FileSystemInterfaceImpl& operator=(FileSystemInterfaceImpl const&) = delete;
    FileSystemInterfaceImpl(FileSystemInterfaceImpl const&)            = delete;

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
     * ?openFile\@FileSystemInterfaceImpl\@Core\@\@UEAA?AV?$unique_ptr\@VIFile\@Core\@\@U?$default_delete\@VIFile\@Core\@\@\@std\@\@\@std\@\@AEBVPath\@2\@VFileOpenMode\@2\@W4FileBufferingMode\@2\@\@Z
     */
    virtual std::unique_ptr<class Core::IFile>
    openFile(class Core::Path const&, class Core::FileOpenMode, enum class Core::FileBufferingMode);
    /**
     * @vftbl 2
     * @symbol ?fileExists\@FileSystemInterfaceImpl\@Core\@\@UEAA_NAEBVPath\@2\@\@Z
     */
    virtual bool fileExists(class Core::Path const&);
    /**
     * @vftbl 3
     * @symbol
     * ?iterateOverDirectory\@FileSystemInterfaceImpl\@Core\@\@UEAA?AVResult\@2\@AEBVPath\@2\@W4DirectoryIterationFlags\@2\@V?$function\@$$A6A?AVResult\@Core\@\@AEBUDirectoryIterationItem\@2\@\@Z\@std\@\@\@Z
     */
    virtual class Core::Result
    iterateOverDirectory(class Core::Path const&, enum class Core::DirectoryIterationFlags, std::function<class Core::Result(struct Core::DirectoryIterationItem const&)>);
    /**
     * @vftbl 4
     * @symbol
     * ?getDirectoryFiles\@FileSystemInterfaceImpl\@Core\@\@UEAA?AVResult\@2\@AEAV?$vector\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@V?$allocator\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@\@std\@\@AEBVPath\@2\@\@Z
     */
    virtual class Core::Result
    getDirectoryFiles(std::vector<class Core::PathBuffer<std::string>>&, class Core::Path const&);
    /**
     * @symbol ??0FileSystemInterfaceImpl\@Core\@\@QEAA\@XZ
     */
    MCAPI FileSystemInterfaceImpl();
    // NOLINTEND
};

}; // namespace Core
