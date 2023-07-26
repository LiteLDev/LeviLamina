#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IWebviewTelemetry {

public:
    // prevent constructor by default
    IWebviewTelemetry& operator=(IWebviewTelemetry const&) = delete;
    IWebviewTelemetry(IWebviewTelemetry const&)            = delete;
    IWebviewTelemetry()                                    = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IWEBVIEWTELEMETRY
    /**
     * @symbol ?onDownloadBegin\@IWebviewTelemetry\@\@UEAAXAEBUWebviewDownloadInfo\@\@\@Z
     */
    MCVAPI void onDownloadBegin(struct WebviewDownloadInfo const&); // NOLINT
    /**
     * @symbol ?onDownloadCanceled\@IWebviewTelemetry\@\@UEAAXAEBUWebviewDownloadInfo\@\@\@Z
     */
    MCVAPI void onDownloadCanceled(struct WebviewDownloadInfo const&); // NOLINT
    /**
     * @symbol ?onDownloadComplete\@IWebviewTelemetry\@\@UEAAXAEBUWebviewDownloadInfo\@\@\@Z
     */
    MCVAPI void onDownloadComplete(struct WebviewDownloadInfo const&); // NOLINT
#endif
};
