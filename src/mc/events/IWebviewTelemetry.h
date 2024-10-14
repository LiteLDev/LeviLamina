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
    // vIndex: 0
    virtual ~IWebviewTelemetry() = default;

    // vIndex: 1
    virtual void __unk_vfn_1();

    // vIndex: 6
    virtual void onDownloadBegin(struct WebviewDownloadInfo const& downloadInfo);

    // vIndex: 8
    virtual void onDownloadComplete(struct WebviewDownloadInfo const& downloadInfo);

    // vIndex: 9
    virtual void onDownloadCanceled(struct WebviewDownloadInfo const& downloadInfo);

    MCAPI explicit IWebviewTelemetry(class IMinecraftEventing const& eventing);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void onDownloadBegin$(struct WebviewDownloadInfo const& downloadInfo);

    MCAPI void onDownloadCanceled$(struct WebviewDownloadInfo const& downloadInfo);

    MCAPI void onDownloadComplete$(struct WebviewDownloadInfo const& downloadInfo);

    // NOLINTEND
};
