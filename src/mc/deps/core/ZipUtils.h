#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/StackString.h"
#include "mc/deps/core/UnzipResult.h"
#include "mc/deps/core/ZipResult.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core::ZipUtils { class UnzipSettings; }
namespace Core::ZipUtils { class ZipProgress; }
namespace Core::ZipUtils { class ZipSettings; }
// clang-format on

namespace Core::ZipUtils {
// NOLINTBEGIN
MCAPI class Core::PathBuffer<class Core::StackString<char, 1024>> _zipEncodedPathToUTF8(class Core::Path const& path);

MCAPI bool exists(class Core::Path const& zipPath, class Core::Path const& filePath);

MCAPI ::Core::ZipUtils::UnzipResult getTranslatedUnzipResult(int inputResult);

MCAPI ::Core::ZipUtils::ZipResult getTranslatedZipResult(int inputResult);

MCAPI class Core::Result isFolderDepthValid(class Core::PathBuffer<class Core::StackString<char, 1024>> const&, uint64);

MCAPI ::Core::ZipUtils::UnzipResult unzipInTransaction(
    class Core::Path const&                    zipInputPath,
    class Core::Path const&                    outputFolderPath,
    class Core::ZipUtils::ZipProgress&         progress,
    bool                                       useLowMemMode,
    class Core::ZipUtils::UnzipSettings const& unzipSettings
);

MCAPI ::Core::ZipUtils::ZipResult
zip(class Core::Path const&                  inputPathIn,
    class Core::Path const&                  zipOutputPath,
    class Core::ZipUtils::ZipProgress&       progress,
    bool                                     useLowMemMode,
    class Core::ZipUtils::ZipSettings const& zipSettings);
// NOLINTEND

}; // namespace Core::ZipUtils
