#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class I18n;
class IFileAccess;
namespace Core { class FileHandlePool; }
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

class IPackIOProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPackIOProvider() = default;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> getFileAccess(::ResourceFileSystem system) const = 0;

    virtual ::std::function<::Bedrock::Result<::std::string>(::Core::PathView const&, ::std::string&&)>
    getAssetReader() const = 0;

    virtual ::Core::Path getOnDiskScratchPath() const = 0;

    virtual ::std::unique_ptr<::IPackIOProvider> clone() const = 0;

    virtual ::std::shared_ptr<::Core::FileHandlePool> getArchiveHandlePool() const = 0;

    virtual ::I18n& getLoc() const = 0;
    // NOLINTEND
};
