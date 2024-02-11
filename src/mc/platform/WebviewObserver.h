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
    // vIndex: 0, symbol: ??1WebviewObserver@@UEAA@XZ
    virtual ~WebviewObserver();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?onLoadingBegin@WebviewObserver@@UEAAXXZ
    virtual void onLoadingBegin();

    // vIndex: 3, symbol: ?onLoadingEnd@WebviewObserver@@UEAAXXZ
    virtual void onLoadingEnd();

    // vIndex: 4, symbol: ?onError@WebviewObserver@@UEAAXAEBUWebviewError@@@Z
    virtual void onError(struct WebviewError const&);

    // vIndex: 5, symbol: ?onWebviewChanged@WebviewObserver@@UEAAXXZ
    virtual void onWebviewChanged();

    // vIndex: 6, symbol: ?onDownloadBegin@WebviewObserver@@UEAAXAEBUWebviewDownloadInfo@@@Z
    virtual void onDownloadBegin(struct WebviewDownloadInfo const&);

    // vIndex: 7, symbol: ?onDownloadUpdate@WebviewObserver@@UEAAXAEBUWebviewDownloadInfo@@@Z
    virtual void onDownloadUpdate(struct WebviewDownloadInfo const&);

    // vIndex: 8, symbol: ?onDownloadComplete@WebviewObserver@@UEAAXAEBUWebviewDownloadInfo@@@Z
    virtual void onDownloadComplete(struct WebviewDownloadInfo const&);

    // vIndex: 9, symbol: ?onDownloadCanceled@WebviewObserver@@UEAAXAEBUWebviewDownloadInfo@@@Z
    virtual void onDownloadCanceled(struct WebviewDownloadInfo const&);

    // vIndex: 10, symbol:
    // ?onMessageRecieved@WebviewObserver@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void onMessageRecieved(std::string const&);

    // NOLINTEND
};
