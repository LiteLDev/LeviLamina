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
