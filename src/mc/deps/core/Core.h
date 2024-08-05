#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/CounterFlags.h"
#include "mc/deps/core/CounterFormat.h"
#include "mc/deps/core/CrossStorageCopyMode.h"
#include "mc/deps/core/DirectoryIterationFlags.h"
#include "mc/deps/core/FileAccessType.h"
#include "mc/deps/core/FileBufferingMode.h"
#include "mc/deps/core/FileStorageArea.h"
#include "mc/deps/core/FileType.h"
#include "mc/deps/core/LevelStorageState.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/StackString.h"
#include "mc/deps/core/StorageAreasTree.h"
#include "mc/deps/core/TransactionFlags.h"
#include "mc/deps/core/UnzipResult.h"
#include "mc/deps/core/WriteOperation.h"
#include "mc/deps/core/ZipResult.h"
#include "mc/deps/core/common/bedrock/ErrorInfo.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/deps/core/common/bedrock/ThreadLocalObject.h"
#include "mc/deps/core/common/bedrock/UniqueLock.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Bedrock { class OSError; }
namespace Bedrock::Threading { class Mutex; }
namespace Core { class DiskAccessTracker; }
namespace Core { class File; }
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileSizePresetToken; }
namespace Core { class FileStats; }
namespace Core { class FileStorageArea; }
namespace Core { class FileStream; }
namespace Core { class FileSystemImpl; }
namespace Core { class FileSystem_windows; }
namespace Core { class FlatFileManifest; }
namespace Core { class FlatFileManifestInfo; }
namespace Core { class FlatFileManifestTracker; }
namespace Core { class FlatFileSearchResult; }
namespace Core { class IFile; }
namespace Core { class IFileStorageAreaFetcher; }
namespace Core { class IFileSystem; }
namespace Core { class Path; }
namespace Core { class PathPart; }
namespace Core { class Random; }
namespace Core { class Result; }
namespace Core { class StorageAreaStateListener; }
namespace Core { class StorageAreasTree; }
namespace Core { class TransactionFrameSourceTarget; }
namespace Core { struct DirectoryIterationItem; }
namespace Core { struct ExcludedPath; }
namespace Core { struct PendingWrite; }
namespace Core::Profile { class CounterTokenMarker; }
namespace Core::ZipUtils { class UnzipSettings; }
namespace Core::ZipUtils { class ZipProgress; }
namespace Core::ZipUtils { class ZipSettings; }
// clang-format on

namespace Core {
// NOLINTBEGIN
MCAPI extern char const* RESULT_FAILED_MESSAGE;

MCAPI extern char const* RESULT_NOT_IMPLEMENTED_MESSAGE;

MCAPI extern char const* RESULT_SUCCEEDED_MESSAGE;

MCAPI uint64 operator&(::Core::DirectoryIterationFlags a, ::Core::DirectoryIterationFlags b);

MCAPI ::Core::DirectoryIterationFlags operator|(::Core::DirectoryIterationFlags a, ::Core::DirectoryIterationFlags b);

MCAPI extern std::string const sLockBlobName;

MCAPI extern std::string const sMultiChunkTag;

MCAPI extern std::shared_ptr<class Core::FileStorageArea> sRootStorageArea;

MCAPI class Core::Result transferDirectory(
    class Core::FileSystemImpl*                                                                pSourceTransaction,
    class Core::Path const&                                                                    sourceDirectoryPath,
    class Core::FileSystemImpl*                                                                pTargetTransaction,
    class Core::Path const&                                                                    targetDirectoryPath,
    std::function<class Core::Result(class Core::Path const&, class Core::Path const&)> const& fileTransferFunction
);
// NOLINTEND

}; // namespace Core
