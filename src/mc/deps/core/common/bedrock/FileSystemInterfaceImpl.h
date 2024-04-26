#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/DirectoryIterationFlags.h"
#include "mc/deps/core/FileBufferingMode.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/IFileSystem.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
namespace Core { class IFile; }
namespace Core { class IFileSystem; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
// clang-format on

namespace Core {

class FileSystemInterfaceImpl : public ::Core::IFileSystem {
public:
    // prevent constructor by default
    FileSystemInterfaceImpl& operator=(FileSystemInterfaceImpl const&);
    FileSystemInterfaceImpl(FileSystemInterfaceImpl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FileSystemInterfaceImpl@Core@@UEAA@XZ
    virtual ~FileSystemInterfaceImpl() = default;

    // vIndex: 1, symbol:
    // ?openFile@FileSystemInterfaceImpl@Core@@UEAA?AV?$unique_ptr@VIFile@Core@@U?$default_delete@VIFile@Core@@@std@@@std@@AEBVPath@2@VFileOpenMode@2@W4FileBufferingMode@2@@Z
    virtual std::unique_ptr<class Core::IFile> openFile(
        class Core::Path const&   filePath,
        class Core::FileOpenMode  openMode,
        ::Core::FileBufferingMode bufferingMode
    );

    // vIndex: 2, symbol:
    // ?openFileStream@FileSystemInterfaceImpl@Core@@UEAA?AV?$unique_ptr@V?$basic_iostream@DU?$char_traits@D@std@@@std@@U?$default_delete@V?$basic_iostream@DU?$char_traits@D@std@@@std@@@2@@std@@AEBVPath@2@H@Z
    virtual std::unique_ptr<std::iostream> openFileStream(class Core::Path const&, int);

    // vIndex: 3, symbol: ?fileExists@FileSystemInterfaceImpl@Core@@UEAA_NAEBVPath@2@@Z
    virtual bool fileExists(class Core::Path const& filePath);

    // vIndex: 4, symbol:
    // ?iterateOverDirectory@FileSystemInterfaceImpl@Core@@UEAA?AVResult@2@AEBVPath@2@W4DirectoryIterationFlags@2@V?$function@$$A6A?AVResult@Core@@AEBUDirectoryIterationItem@2@@Z@std@@@Z
    virtual class Core::Result iterateOverDirectory(
        class Core::Path const&                                                       directoryName,
        ::Core::DirectoryIterationFlags                                               flags,
        std::function<class Core::Result(struct Core::DirectoryIterationItem const&)> callbackFunction
    );

    // vIndex: 5, symbol:
    // ?getDirectoryFiles@FileSystemInterfaceImpl@Core@@UEAA?AVResult@2@AEAV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@std@@AEBVPath@2@@Z
    virtual class Core::Result
    getDirectoryFiles(std::vector<class Core::PathBuffer<std::string>>& files, class Core::Path const& directoryPath);

    // symbol: ??0FileSystemInterfaceImpl@Core@@QEAA@XZ
    MCAPI FileSystemInterfaceImpl();

    // NOLINTEND
};

}; // namespace Core
