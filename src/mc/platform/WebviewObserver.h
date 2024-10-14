#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WebviewObserver {
public:
    // prevent constructor by default
    WebviewObserver& operator=(WebviewObserver const&);
    WebviewObserver(WebviewObserver const&);
    WebviewObserver();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WebviewObserver();

    // vIndex: 1
    virtual void __unk_vfn_1();

    // vIndex: 2
    virtual void onLoadingBegin();

    // vIndex: 3
    virtual void onLoadingEnd();

    // vIndex: 4
    virtual void onError(struct WebviewError const&);

    // vIndex: 5
    virtual void onWebviewChanged();

    // vIndex: 6
    virtual void onDownloadBegin(struct WebviewDownloadInfo const&);

    // vIndex: 7
    virtual void onDownloadUpdate(struct WebviewDownloadInfo const&);

    // vIndex: 8
    virtual void onDownloadComplete(struct WebviewDownloadInfo const&);

    // vIndex: 9
    virtual void onDownloadCanceled(struct WebviewDownloadInfo const&);

    // vIndex: 10
    virtual void onMessageRecieved(std::string const&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI void onDownloadBegin$(struct WebviewDownloadInfo const&);

    MCAPI void onDownloadCanceled$(struct WebviewDownloadInfo const&);

    MCAPI void onDownloadComplete$(struct WebviewDownloadInfo const&);

    MCAPI void onDownloadUpdate$(struct WebviewDownloadInfo const&);

    MCAPI void onError$(struct WebviewError const&);

    MCAPI void onLoadingBegin$();

    MCAPI void onLoadingEnd$();

    MCAPI void onMessageRecieved$(std::string const&);

    MCAPI void onWebviewChanged$();

    // NOLINTEND
};
