#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class FileSystemImpl; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace Core {
// functions
// NOLINTBEGIN
MCAPI ::Core::Result transferDirectory(
    ::Core::FileSystemImpl*                                                          pSourceTransaction,
    ::Core::Path const&                                                              sourceDirectoryPath,
    ::Core::FileSystemImpl*                                                          pTargetTransaction,
    ::Core::Path const&                                                              targetDirectoryPath,
    ::std::function<::Core::Result(::Core::Path const&, ::Core::Path const&)> const& fileTransferFunction
);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI char const*& RESULT_FAILED_MESSAGE();

MCAPI char const*& RESULT_NOT_IMPLEMENTED_MESSAGE();

MCAPI char const*& RESULT_SUCCEEDED_MESSAGE();

MCAPI ::std::string const& sLockBlobName();

MCAPI ::std::string const& sMultiChunkTag();

MCAPI ::std::shared_ptr<::Core::FileStorageArea>& sRootStorageArea();
// NOLINTEND

} // namespace Core
