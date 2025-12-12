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
    virtual ~WebviewObserver() /*override*/;

    virtual void onLoadingBegin();

    virtual void onLoadingEnd();

    virtual void onError(::WebviewError const&);

    virtual void onWebviewChanged();

    virtual void onDownloadBegin(::WebviewDownloadInfo const&);

    virtual void onDownloadUpdate(::WebviewDownloadInfo const&);

    virtual void onDownloadComplete(::WebviewDownloadInfo const&);

    virtual void onDownloadCanceled(::WebviewDownloadInfo const&);

    virtual void onMessageRecieved(::std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onLoadingBegin();

    MCNAPI void $onLoadingEnd();

    MCNAPI void $onError(::WebviewError const&);

    MCNAPI void $onWebviewChanged();

    MCNAPI void $onDownloadBegin(::WebviewDownloadInfo const&);

    MCNAPI void $onDownloadUpdate(::WebviewDownloadInfo const&);

    MCNAPI void $onDownloadComplete(::WebviewDownloadInfo const&);

    MCNAPI void $onDownloadCanceled(::WebviewDownloadInfo const&);

    MCNAPI void $onMessageRecieved(::std::string const&);


    // NOLINTEND
};
