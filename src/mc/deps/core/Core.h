#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class FileSystemImpl; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { enum class DirectoryIterationFlags; }
// clang-format on

namespace Core {
/**
 * @symbol ?RESULT_FAILED_MESSAGE\@Core\@\@3PEBDEB
 */
MCAPI extern char const* RESULT_FAILED_MESSAGE;
/**
 * @symbol ?RESULT_NOT_IMPLEMENTED_MESSAGE\@Core\@\@3PEBDEB
 */
MCAPI extern char const* RESULT_NOT_IMPLEMENTED_MESSAGE;
/**
 * @symbol ?RESULT_SUCCEEDED_MESSAGE\@Core\@\@3PEBDEB
 */
MCAPI extern char const* RESULT_SUCCEEDED_MESSAGE;
/**
 * @symbol ??ICore\@\@YA_KW4DirectoryIterationFlags\@0\@0\@Z
 */
MCAPI unsigned __int64 operator&(enum class Core::DirectoryIterationFlags, enum class Core::DirectoryIterationFlags);
/**
 * @symbol ??UCore\@\@YA?AW4DirectoryIterationFlags\@0\@W410\@0\@Z
 */
MCAPI enum class Core::DirectoryIterationFlags
operator|(enum class Core::DirectoryIterationFlags, enum class Core::DirectoryIterationFlags);
/**
 * @symbol ?sLockBlobName\@Core\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const sLockBlobName;
/**
 * @symbol ?sMultiChunkTag\@Core\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const sMultiChunkTag;
/**
 * @symbol ?sRootStorageArea\@Core\@\@3V?$shared_ptr\@VFileStorageArea\@Core\@\@\@std\@\@A
 */
MCAPI extern class std::shared_ptr<class Core::FileStorageArea> sRootStorageArea;
/**
 * @symbol
 * ?transferDirectory\@Core\@\@YA?AVResult\@1\@PEAVFileSystemImpl\@1\@AEBVPath\@1\@01AEBV?$function\@$$A6A?AVResult\@Core\@\@AEBVPath\@2\@0\@Z\@std\@\@\@Z
 */
MCAPI class Core::Result
transferDirectory(class Core::FileSystemImpl*, class Core::Path const&, class Core::FileSystemImpl*, class Core::Path const&, class std::function<class Core::Result(class Core::Path const&, class Core::Path const&)> const&);

}; // namespace Core
