#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IWebviewTelemetry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IWEBVIEWTELEMETRY
public:
    IWebviewTelemetry& operator=(IWebviewTelemetry const&) = delete;
    IWebviewTelemetry(IWebviewTelemetry const&)            = delete;
    IWebviewTelemetry()                                    = delete;
#endif

public:
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
};
