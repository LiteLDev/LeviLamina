#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

namespace Core {
// functions
// NOLINTBEGIN
MCNAPI ::Core::Result transferDirectory(
    ::Core::FileSystemImpl*                                                    pSourceTransaction,
    ::Core::PathView                                                           sourceDirectoryPath,
    ::Core::FileSystemImpl*                                                    pTargetTransaction,
    ::Core::PathView                                                           targetDirectoryPath,
    ::std::function<::Core::Result(::Core::PathView, ::Core::PathView)> const& fileTransferFunction
);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI char const*& RESULT_SUCCEEDED_MESSAGE();

MCNAPI ::std::string const& sLockBlobName();

MCNAPI ::std::string const& sMultiChunkTag();

MCNAPI ::std::shared_ptr<::Core::FileStorageArea>& sRootStorageArea();
// NOLINTEND

} // namespace Core
