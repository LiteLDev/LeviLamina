#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/DownloaderResult.h"
#include "mc/util/FileDownloadManager.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Core { class Path; }
// clang-format on

class AzureFileDownloader : public ::FileDownloadManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf3ab6d;
    ::ll::UntypedStorage<1, 1>  mUnkae9c0d;
    // NOLINTEND

public:
    // prevent constructor by default
    AzureFileDownloader& operator=(AzureFileDownloader const&);
    AzureFileDownloader(AzureFileDownloader const&);
    AzureFileDownloader();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI
    AzureFileDownloader(::Core::Path const& downloadPath, ::Bedrock::NotNullNonOwnerPtr<::AppPlatform> appPlatform);

    MCNAPI void downloadSingleFile(
        ::std::string const&                      downloadURL,
        ::std::string const&                      contentId,
        ::std::function<void(::DownloaderResult)> onDownloadCompletecallback
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Core::Path const& downloadPath, ::Bedrock::NotNullNonOwnerPtr<::AppPlatform> appPlatform);
#endif
    // NOLINTEND
};
