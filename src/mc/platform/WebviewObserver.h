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
    // prevent constructor by default
    WebviewObserver& operator=(WebviewObserver const&);
    WebviewObserver(WebviewObserver const&);
    WebviewObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WebviewObserver() /*override*/;

    // vIndex: 2
    virtual void onLoadingBegin();

    // vIndex: 3
    virtual void onLoadingEnd();

    // vIndex: 4
    virtual void onError(::WebviewError const&);

    // vIndex: 5
    virtual void onWebviewChanged();

    // vIndex: 6
    virtual void onDownloadBegin(::WebviewDownloadInfo const&);

    // vIndex: 7
    virtual void onDownloadUpdate(::WebviewDownloadInfo const&);

    // vIndex: 8
    virtual void onDownloadComplete(::WebviewDownloadInfo const&);

    // vIndex: 9
    virtual void onDownloadCanceled(::WebviewDownloadInfo const&);

    // vIndex: 10
    virtual void onMessageRecieved(::std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onLoadingBegin();

    MCAPI void $onLoadingEnd();

    MCAPI void $onError(::WebviewError const&);

    MCAPI void $onWebviewChanged();

    MCAPI void $onDownloadBegin(::WebviewDownloadInfo const&);

    MCAPI void $onDownloadUpdate(::WebviewDownloadInfo const&);

    MCAPI void $onDownloadComplete(::WebviewDownloadInfo const&);

    MCAPI void $onDownloadCanceled(::WebviewDownloadInfo const&);

    MCAPI void $onMessageRecieved(::std::string const&);
    // NOLINTEND
};
