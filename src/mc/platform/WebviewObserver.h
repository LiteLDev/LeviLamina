#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WebviewObserver {

public:
    // prevent constructor by default
    WebviewObserver& operator=(WebviewObserver const&) = delete;
    WebviewObserver(WebviewObserver const&)            = delete;
    WebviewObserver()                                  = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WEBVIEWOBSERVER
    /**
     * @symbol ?onDownloadBegin\@WebviewObserver\@\@UEAAXAEBUWebviewDownloadInfo\@\@\@Z
     */
    MCVAPI void onDownloadBegin(struct WebviewDownloadInfo const&); // NOLINT
    /**
     * @symbol ?onDownloadCanceled\@WebviewObserver\@\@UEAAXAEBUWebviewDownloadInfo\@\@\@Z
     */
    MCVAPI void onDownloadCanceled(struct WebviewDownloadInfo const&); // NOLINT
    /**
     * @symbol ?onDownloadComplete\@WebviewObserver\@\@UEAAXAEBUWebviewDownloadInfo\@\@\@Z
     */
    MCVAPI void onDownloadComplete(struct WebviewDownloadInfo const&); // NOLINT
    /**
     * @symbol ?onDownloadUpdate\@WebviewObserver\@\@UEAAXAEBUWebviewDownloadInfo\@\@\@Z
     */
    MCVAPI void onDownloadUpdate(struct WebviewDownloadInfo const&); // NOLINT
    /**
     * @symbol ?onError\@WebviewObserver\@\@UEAAXAEBUWebviewError\@\@\@Z
     */
    MCVAPI void onError(struct WebviewError const&); // NOLINT
    /**
     * @symbol ?onLoadingBegin\@WebviewObserver\@\@UEAAXXZ
     */
    MCVAPI void onLoadingBegin(); // NOLINT
    /**
     * @symbol ?onLoadingEnd\@WebviewObserver\@\@UEAAXXZ
     */
    MCVAPI void onLoadingEnd(); // NOLINT
    /**
     * @symbol
     * ?onMessageRecieved\@WebviewObserver\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onMessageRecieved(std::string const&); // NOLINT
    /**
     * @symbol ?onWebviewChanged\@WebviewObserver\@\@UEAAXXZ
     */
    MCVAPI void onWebviewChanged(); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~WebviewObserver(); // NOLINT
#endif
};
