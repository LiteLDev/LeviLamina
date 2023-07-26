#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Core { enum class FileAccessType; }
// clang-format on

namespace Core::StorageAreaFactory {
/**
 * @symbol
 * ?createBasicStorageAreaForCurrentPlatform\@StorageAreaFactory\@Core\@\@YA?AV?$shared_ptr\@VFileStorageArea\@Core\@\@\@std\@\@W4FileAccessType\@2\@AEBVPath\@2\@_N\@Z
 */
MCAPI class std::shared_ptr<class Core::FileStorageArea>
createBasicStorageAreaForCurrentPlatform(enum class Core::FileAccessType, class Core::Path const&, bool); // NOLINT

}; // namespace Core::StorageAreaFactory
