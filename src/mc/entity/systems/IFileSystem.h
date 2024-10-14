#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

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
    // vIndex: 0
    virtual ~IFileSystem() = default;

    // vIndex: 1
    virtual std::unique_ptr<class Core::IFile> openFile(
        class Core::Path const&   filePath,
        class Core::FileOpenMode  openMode,
        ::Core::FileBufferingMode bufferingMode
    ) = 0;

    // vIndex: 2
    virtual std::unique_ptr<std::iostream> openFileStream(class Core::Path const& filePath, int openMode) = 0;

    // vIndex: 3
    virtual bool fileExists(class Core::Path const& filePath) = 0;

    // vIndex: 4
    virtual class Core::Result iterateOverDirectory(
        class Core::Path const&                                                       directoryName,
        ::Core::DirectoryIterationFlags                                               flags,
        std::function<class Core::Result(struct Core::DirectoryIterationItem const&)> callbackFunction
    ) = 0;

    // vIndex: 5
    virtual class Core::Result getDirectoryFiles(
        std::vector<class Core::PathBuffer<std::string>>& files,
        class Core::Path const&                           directoryPath
    ) = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};

}; // namespace Core
