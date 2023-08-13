#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/WebviewObserver.h"

class IWebviewTelemetry : public ::WebviewObserver {

public:
    // prevent constructor by default
    IWebviewTelemetry& operator=(IWebviewTelemetry const&) = delete;
    IWebviewTelemetry(IWebviewTelemetry const&)            = delete;
    IWebviewTelemetry()                                    = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IWEBVIEWTELEMETRY
    /**
     * @symbol ?onDownloadBegin\@IWebviewTelemetry\@\@UEAAXAEBUWebviewDownloadInfo\@\@\@Z
     */
    MCVAPI void onDownloadBegin(struct WebviewDownloadInfo const&);
    /**
     * @symbol ?onDownloadCanceled\@IWebviewTelemetry\@\@UEAAXAEBUWebviewDownloadInfo\@\@\@Z
     */
    MCVAPI void onDownloadCanceled(struct WebviewDownloadInfo const&);
    /**
     * @symbol ?onDownloadComplete\@IWebviewTelemetry\@\@UEAAXAEBUWebviewDownloadInfo\@\@\@Z
     */
    MCVAPI void onDownloadComplete(struct WebviewDownloadInfo const&);
#endif
    // NOLINTEND
};
