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

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: ?onDownloadBegin@WebviewObserver@@UEAAXAEBUWebviewDownloadInfo@@@Z
    virtual void onDownloadBegin(struct WebviewDownloadInfo const&);

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: ?onDownloadComplete@WebviewObserver@@UEAAXAEBUWebviewDownloadInfo@@@Z
    virtual void onDownloadComplete(struct WebviewDownloadInfo const&);

    // vIndex: 9, symbol: ?onDownloadCanceled@WebviewObserver@@UEAAXAEBUWebviewDownloadInfo@@@Z
    virtual void onDownloadCanceled(struct WebviewDownloadInfo const&);

    // symbol: ?onDownloadUpdate@WebviewObserver@@UEAAXAEBUWebviewDownloadInfo@@@Z
    MCVAPI void onDownloadUpdate(struct WebviewDownloadInfo const&);

    // symbol: ?onError@WebviewObserver@@UEAAXAEBUWebviewError@@@Z
    MCVAPI void onError(struct WebviewError const&);

    // symbol: ?onLoadingBegin@WebviewObserver@@UEAAXXZ
    MCVAPI void onLoadingBegin();

    // symbol: ?onLoadingEnd@WebviewObserver@@UEAAXXZ
    MCVAPI void onLoadingEnd();

    // symbol:
    // ?onMessageRecieved@WebviewObserver@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void onMessageRecieved(std::string const&);

    // symbol: ?onWebviewChanged@WebviewObserver@@UEAAXXZ
    MCVAPI void onWebviewChanged();

    // NOLINTEND
};
