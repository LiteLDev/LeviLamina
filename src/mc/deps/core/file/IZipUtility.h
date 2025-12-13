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
    zip(::Core::Path const&,
        ::Core::Path const&,
        ::Core::ZipUtils::ZipProgress&,
        bool,
        ::Core::ZipUtils::ZipSettings const&) const = 0;

    virtual ::Bedrock::Result<void>
    zip(::std::vector<::Core::PathBuffer<::std::string>> const&,
        ::Core::PathView,
        ::Core::ZipUtils::ZipProgress&,
        bool,
        ::std::function<::std::string(::Core::PathView)>,
        ::Core::ZipUtils::ZipSettings const&) const = 0;

    virtual ::Bedrock::Result<void> unzipInTransaction(
        ::Core::Path const&,
        ::Core::Path const&,
        ::Core::ZipUtils::ZipProgress&,
        bool,
        ::Core::ZipUtils::UnzipSettings const&
    ) const = 0;

    virtual ::Bedrock::Result<void> unzipToFlatFile(
        ::Core::Path const&,
        ::Core::Path const&,
        ::Core::ZipUtils::ZipProgress&,
        ::Core::FileBufferingMode,
        ::Core::ZipUtils::UnzipSettings const&
    ) const = 0;

    virtual bool getFilenames(
        ::Core::Path const&,
        ::std::vector<::Core::PathBuffer<::std::string>>&,
        ::Core::ZipUtils::UnzipSettings const&
    ) const = 0;

    virtual bool exists(::Core::Path const&, ::Core::Path const&, ::Core::ZipUtils::UnzipSettings const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core::ZipUtils
