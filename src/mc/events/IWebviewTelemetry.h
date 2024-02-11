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
    // vIndex: 0, symbol: __gen_??1IWebviewTelemetry@@UEAA@XZ
    virtual ~IWebviewTelemetry() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 6, symbol: ?onDownloadBegin@IWebviewTelemetry@@UEAAXAEBUWebviewDownloadInfo@@@Z
    virtual void onDownloadBegin(struct WebviewDownloadInfo const& downloadInfo);

    // vIndex: 8, symbol: ?onDownloadComplete@IWebviewTelemetry@@UEAAXAEBUWebviewDownloadInfo@@@Z
    virtual void onDownloadComplete(struct WebviewDownloadInfo const& downloadInfo);

    // vIndex: 9, symbol: ?onDownloadCanceled@IWebviewTelemetry@@UEAAXAEBUWebviewDownloadInfo@@@Z
    virtual void onDownloadCanceled(struct WebviewDownloadInfo const& downloadInfo);

    // symbol: ??0IWebviewTelemetry@@QEAA@AEBVIMinecraftEventing@@@Z
    MCAPI explicit IWebviewTelemetry(class IMinecraftEventing const& eventing);

    // NOLINTEND
};
