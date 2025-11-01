#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/UnzipResult.h"
#include "mc/deps/core/file/ZipResult.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core::ZipUtils { class UnzipSettings; }
namespace Core::ZipUtils { class ZipProgress; }
namespace Core::ZipUtils { class ZipSettings; }
// clang-format on

namespace Core::ZipUtils {
// functions
// NOLINTBEGIN
MCNAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> _zipEncodedPathToUTF8(::Core::PathView path);

MCNAPI bool exists(::Core::PathView zipPath, ::Core::PathView relativePath, ::Core::ZipUtils::UnzipSettings const& unzipSettings);

MCNAPI bool getFilenames(::Core::PathView zipPath, ::std::vector<::Core::PathBuffer<::std::string>>& result, ::Core::ZipUtils::UnzipSettings const& unzipSettings);

MCNAPI ::Core::ZipUtils::UnzipResult getTranslatedUnzipResult(int inputResult);

MCNAPI ::Core::ZipUtils::ZipResult getTranslatedZipResult(int inputResult);

MCNAPI ::Core::Result isFolderDepthValid(::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& filePath, uint64 maxFileDepth);

MCNAPI ::Core::ZipUtils::UnzipResult unzipInTransaction(::Core::PathView zipInputPath, ::Core::PathView outputFolderPath, ::Core::ZipUtils::ZipProgress& progress, bool useLowMemMode, ::Core::ZipUtils::UnzipSettings const& unzipSettings, ::Bedrock::Result<void>& transactionCommitResult);

MCNAPI ::Core::ZipUtils::UnzipResult unzipToFlatFile(::Core::PathView zipInputPath, ::Core::PathView outputFolderPath, ::Core::ZipUtils::ZipProgress& progress, ::Core::FileBufferingMode bufferMode, ::Core::ZipUtils::UnzipSettings const& unzipSettings);

MCNAPI ::Core::ZipUtils::ZipResult zip(::Core::PathView inputPathIn, ::Core::PathView zipOutputPath, ::Core::ZipUtils::ZipProgress& progress, bool useLowMemMode, ::Core::ZipUtils::ZipSettings const& zipSettings);
// NOLINTEND

}
