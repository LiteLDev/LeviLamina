#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
struct WebviewDownloadInfo;
struct WebviewError;
namespace Core { class SingleThreadedLock; }
// clang-format on

class WebviewObserver : public ::Core::Observer<::WebviewObserver, ::Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WebviewObserver() /*override*/ = default;

    virtual void onLoadingBegin();

    virtual void onLoadingEnd();

    virtual void onError(::WebviewError const&);

    virtual void onWebviewChanged();

    virtual void onDownloadBegin(::WebviewDownloadInfo const& downloadInfo);

    virtual void onDownloadUpdate(::WebviewDownloadInfo const&);

    virtual void onDownloadComplete(::WebviewDownloadInfo const& downloadInfo);

    virtual void onDownloadCanceled(::WebviewDownloadInfo const& downloadInfo);

    virtual void onMessageRecieved(::std::string const&);

    virtual void fireCodeBuilderLoadPerformance(
        ::std::string const&        stage,
        uint64                      tutorialSize,
        uint64                      downloadSize,
        ::std::chrono::milliseconds elapsedTimeMS
    ) const;

    virtual void
    fireCodeBuilderRunPerformance(::std::string const& stage, ::std::chrono::milliseconds elapsedTimeMS) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onLoadingBegin();

    MCNAPI void $onLoadingEnd();

    MCNAPI void $onError(::WebviewError const&);

    MCNAPI void $onWebviewChanged();

    MCNAPI void $onDownloadUpdate(::WebviewDownloadInfo const&);

#ifdef LL_PLAT_C
    MCNAPI void $onDownloadBegin(::WebviewDownloadInfo const& downloadInfo);

    MCNAPI void $onDownloadComplete(::WebviewDownloadInfo const& downloadInfo);

    MCNAPI void $onDownloadCanceled(::WebviewDownloadInfo const& downloadInfo);

    MCNAPI void $fireCodeBuilderLoadPerformance(
        ::std::string const&        stage,
        uint64                      tutorialSize,
        uint64                      downloadSize,
        ::std::chrono::milliseconds elapsedTimeMS
    ) const;

    MCNAPI void
    $fireCodeBuilderRunPerformance(::std::string const& stage, ::std::chrono::milliseconds elapsedTimeMS) const;
#endif


    // NOLINTEND
};
