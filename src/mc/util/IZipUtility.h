#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class PathView; }
namespace Core::ZipUtils { class UnzipSettings; }
namespace Core::ZipUtils { class ZipProgress; }
namespace Core::ZipUtils { class ZipSettings; }
// clang-format on

namespace Core::ZipUtils {

class IZipUtility {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IZipUtility() = default;

    virtual ::Bedrock::Result<void>
    zip(::Core::Path const&                  inputPath,
        ::Core::Path const&                  zipOutputPath,
        ::Core::ZipUtils::ZipProgress&       progress,
        bool                                 useLowMemMode,
        ::Core::ZipUtils::ZipSettings const& zipSettings) const = 0;

    virtual ::Bedrock::Result<void>
    zip(::std::vector<::Core::PathBuffer<::std::string>> const& filesToZip,
        ::Core::PathView                                        zipOutputPath,
        ::Core::ZipUtils::ZipProgress&                          progress,
        bool                                                    useLowMemMode,
        ::std::function<::std::string(::Core::PathView)>        overrideNameCallback,
        ::Core::ZipUtils::ZipSettings const&                    zipSettings) const = 0;

    virtual ::Bedrock::Result<void> zipFromZip(
        ::Core::PathView                     zipInputPath,
        ::Core::PathView                     zipInputSubPath,
        ::Core::PathView                     zipOutputPath,
        ::Core::ZipUtils::ZipProgress&       progress,
        bool                                 useLowMemMode,
        ::Core::ZipUtils::ZipSettings const& zipSettings
    ) const = 0;

    virtual ::Bedrock::Result<void> unzipInTransaction(
        ::Core::Path const&                    zipInputPath,
        ::Core::Path const&                    outputFolderPath,
        ::Core::ZipUtils::ZipProgress&         progress,
        bool                                   useLowMemMode,
        ::Core::ZipUtils::UnzipSettings const& unzipSettings
    ) const = 0;

    virtual ::Bedrock::Result<void> unzipToFlatFile(
        ::Core::Path const&                    zipInputPath,
        ::Core::Path const&                    outputFolderPath,
        ::Core::ZipUtils::ZipProgress&         progress,
        ::Core::FileBufferingMode              bufferMode,
        ::Core::ZipUtils::UnzipSettings const& unzipSettings
    ) const = 0;

    virtual bool getFilenames(
        ::Core::Path const&                               zipPath,
        ::std::vector<::Core::PathBuffer<::std::string>>& result,
        ::Core::ZipUtils::UnzipSettings const&            unzipSettings
    ) const = 0;

    virtual bool exists(
        ::Core::Path const&                    zipPath,
        ::Core::Path const&                    filePath,
        ::Core::ZipUtils::UnzipSettings const& unzipSettings
    ) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core::ZipUtils
