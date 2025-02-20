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
MCAPI ::Core::Result transferDirectory(
    ::Core::FileSystemImpl*                                                    pSourceTransaction,
    ::Core::PathView                                                           sourceDirectoryPath,
    ::Core::FileSystemImpl*                                                    pTargetTransaction,
    ::Core::PathView                                                           targetDirectoryPath,
    ::std::function<::Core::Result(::Core::PathView, ::Core::PathView)> const& fileTransferFunction
);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI char const*& RESULT_SUCCEEDED_MESSAGE();

MCAPI ::std::string const& sLockBlobName();

MCAPI ::std::string const& sMultiChunkTag();

MCAPI ::std::shared_ptr<::Core::FileStorageArea>& sRootStorageArea();
// NOLINTEND

} // namespace Core
