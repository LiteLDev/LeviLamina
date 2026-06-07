#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileAccessType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class PathView; }
// clang-format on

namespace Core::StorageAreaFactory {
// functions
// NOLINTBEGIN
MCNAPI ::std::shared_ptr<::Core::FileStorageArea> createBasicStorageAreaForCurrentPlatform(
    ::Core::FileAccessType fileAccessType,
    ::Core::PathView       rootPath,
    bool                   useFlatFiles
);
// NOLINTEND

} // namespace Core::StorageAreaFactory
