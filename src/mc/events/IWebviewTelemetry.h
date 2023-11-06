#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/WebviewObserver.h"

class IWebviewTelemetry : public ::WebviewObserver {
public:
    // prevent constructor by default
    IWebviewTelemetry& operator=(IWebviewTelemetry const&);
    IWebviewTelemetry(IWebviewTelemetry const&);
    IWebviewTelemetry();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~IWebviewTelemetry() = default;

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

    // vIndex: 6, symbol: ?onDownloadBegin@IWebviewTelemetry@@UEAAXAEBUWebviewDownloadInfo@@@Z
    virtual void onDownloadBegin(struct WebviewDownloadInfo const&);

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: ?onDownloadComplete@IWebviewTelemetry@@UEAAXAEBUWebviewDownloadInfo@@@Z
    virtual void onDownloadComplete(struct WebviewDownloadInfo const&);

    // vIndex: 9, symbol: ?onDownloadCanceled@IWebviewTelemetry@@UEAAXAEBUWebviewDownloadInfo@@@Z
    virtual void onDownloadCanceled(struct WebviewDownloadInfo const&);

    // symbol: ??0IWebviewTelemetry@@QEAA@AEBVIMinecraftEventing@@@Z
    MCAPI explicit IWebviewTelemetry(class IMinecraftEventing const&);

    // NOLINTEND
};
