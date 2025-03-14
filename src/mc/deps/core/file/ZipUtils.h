#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/UnzipResult.h"
#include "mc/deps/core/file/ZipResult.h"
#include "mc/deps/core/string/BasicStackString.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core::ZipUtils { class UnzipSettings; }
namespace Core::ZipUtils { class ZipProgress; }
namespace Core::ZipUtils { class ZipSettings; }
// clang-format on

namespace Core::ZipUtils {
// functions
// NOLINTBEGIN
MCAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> _zipEncodedPathToUTF8(::Core::Path const& path);

MCAPI bool getFilenames(
    ::Core::Path const&                               zipPath,
    ::std::vector<::Core::PathBuffer<::std::string>>& result,
    ::Core::ZipUtils::UnzipSettings const&            unzipSettings
);

MCAPI ::Core::ZipUtils::UnzipResult getTranslatedUnzipResult(int inputResult);

MCAPI ::Core::ZipUtils::ZipResult getTranslatedZipResult(int inputResult);

MCAPI ::Core::ZipUtils::UnzipResult unzipInTransaction(
    ::Core::Path const&                    zipInputPath,
    ::Core::Path const&                    outputFolderPath,
    ::Core::ZipUtils::ZipProgress&         progress,
    bool                                   useLowMemMode,
    ::Core::ZipUtils::UnzipSettings const& unzipSettings
);

MCAPI ::Core::ZipUtils::ZipResult
zip(::Core::Path const&                  inputPathIn,
    ::Core::Path const&                  zipOutputPath,
    ::Core::ZipUtils::ZipProgress&       progress,
    bool                                 useLowMemMode,
    ::Core::ZipUtils::ZipSettings const& zipSettings);
// NOLINTEND

} // namespace Core::ZipUtils
