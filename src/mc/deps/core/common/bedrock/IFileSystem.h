#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/DirectoryIterationFlags.h"
#include "mc/deps/core/FileBufferingMode.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Core { class FileOpenMode; }
namespace Core { class IFile; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
// clang-format on

namespace Core {

class IFileSystem : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IFileSystem& operator=(IFileSystem const&);
    IFileSystem(IFileSystem const&);
    IFileSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IFileSystem@Core@@UEAA@XZ
    virtual ~IFileSystem() = default;

    // vIndex: 1, symbol:
    // ?openFile@FileSystemInterfaceImpl@Core@@UEAA?AV?$unique_ptr@VIFile@Core@@U?$default_delete@VIFile@Core@@@std@@@std@@AEBVPath@2@VFileOpenMode@2@W4FileBufferingMode@2@@Z
    virtual std::unique_ptr<class Core::IFile>
    openFile(class Core::Path const&, class Core::FileOpenMode, ::Core::FileBufferingMode) = 0;

    // vIndex: 2, symbol: ?fileExists@FileSystemInterfaceImpl@Core@@UEAA_NAEBVPath@2@@Z
    virtual bool fileExists(class Core::Path const&) = 0;

    // vIndex: 3, symbol:
    // ?iterateOverDirectory@FileSystemInterfaceImpl@Core@@UEAA?AVResult@2@AEBVPath@2@W4DirectoryIterationFlags@2@V?$function@$$A6A?AVResult@Core@@AEBUDirectoryIterationItem@2@@Z@std@@@Z
    virtual class Core::Result
    iterateOverDirectory(class Core::Path const&, ::Core::DirectoryIterationFlags, std::function<class Core::Result(struct Core::DirectoryIterationItem const&)>) = 0;

    // vIndex: 4, symbol:
    // ?getDirectoryFiles@FileSystemInterfaceImpl@Core@@UEAA?AVResult@2@AEAV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@std@@AEBVPath@2@@Z
    virtual class Core::Result
    getDirectoryFiles(std::vector<class Core::PathBuffer<std::string>>&, class Core::Path const&) = 0;

    // NOLINTEND
};

}; // namespace Core
