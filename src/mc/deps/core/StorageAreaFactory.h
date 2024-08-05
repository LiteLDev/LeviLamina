#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/FileAccessType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
// clang-format on

namespace Core::StorageAreaFactory {
// NOLINTBEGIN
MCAPI std::shared_ptr<class Core::FileStorageArea> createBasicStorageAreaForCurrentPlatform(
    ::Core::FileAccessType  fileAccessType,
    class Core::Path const& rootPath,
    bool                    useFlatFiles
);
// NOLINTEND

}; // namespace Core::StorageAreaFactory
