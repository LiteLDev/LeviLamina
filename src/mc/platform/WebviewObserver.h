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
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onLoadingBegin();

    MCFOLD void $onLoadingEnd();

    MCFOLD void $onError(::WebviewError const&);

    MCFOLD void $onWebviewChanged();

    MCFOLD void $onDownloadBegin(::WebviewDownloadInfo const&);

    MCFOLD void $onDownloadUpdate(::WebviewDownloadInfo const&);

    MCFOLD void $onDownloadComplete(::WebviewDownloadInfo const&);

    MCFOLD void $onDownloadCanceled(::WebviewDownloadInfo const&);

    MCFOLD void $onMessageRecieved(::std::string const&);
    // NOLINTEND
};
