#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"
#include "mc/resources/IPackIOProvider.h"

// auto generated forward declare list
// clang-format off
class I18n;
class IFileAccess;
namespace Core { class FileHandlePool; }
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

class AppPlatformIOProvider : public ::IPackIOProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> getFileAccess(::ResourceFileSystem system) const /*override*/;

    virtual ::std::function<::Bedrock::Result<::std::string>(::Core::PathView const&, ::std::string&&)>
    getAssetReader() const /*override*/;

    virtual ::Core::Path getOnDiskScratchPath() const /*override*/;

    virtual ::std::unique_ptr<::IPackIOProvider> clone() const /*override*/;

    virtual ::std::shared_ptr<::Core::FileHandlePool> getArchiveHandlePool() const /*override*/;

    virtual ::I18n& getLoc() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> $getFileAccess(::ResourceFileSystem system) const;

    MCNAPI ::std::function<::Bedrock::Result<::std::string>(::Core::PathView const&, ::std::string&&)>
    $getAssetReader() const;

    MCNAPI ::Core::Path $getOnDiskScratchPath() const;

    MCNAPI ::std::unique_ptr<::IPackIOProvider> $clone() const;

    MCNAPI ::std::shared_ptr<::Core::FileHandlePool> $getArchiveHandlePool() const;

    MCNAPI ::I18n& $getLoc() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
