/**
 * @file  MC/WebviewObserver.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WebviewObserver.
 *
 */
class WebviewObserver {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEBVIEWOBSERVER
public:
    class WebviewObserver& operator=(class WebviewObserver const &) = delete;
    WebviewObserver(class WebviewObserver const &) = delete;
    WebviewObserver() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WEBVIEWOBSERVER
    /**
     * @hash   -967391005
     * @symbol ?onDownloadBegin@WebviewObserver@@UEAAXAEBUWebviewDownloadInfo@@@Z
     */
    MCVAPI void onDownloadBegin(struct WebviewDownloadInfo const &);
    /**
     * @hash   1781206853
     * @symbol ?onDownloadCanceled@WebviewObserver@@UEAAXAEBUWebviewDownloadInfo@@@Z
     */
    MCVAPI void onDownloadCanceled(struct WebviewDownloadInfo const &);
    /**
     * @hash   1814682277
     * @symbol ?onDownloadComplete@WebviewObserver@@UEAAXAEBUWebviewDownloadInfo@@@Z
     */
    MCVAPI void onDownloadComplete(struct WebviewDownloadInfo const &);
    /**
     * @hash   557336917
     * @symbol ?onDownloadUpdate@WebviewObserver@@UEAAXAEBUWebviewDownloadInfo@@@Z
     */
    MCVAPI void onDownloadUpdate(struct WebviewDownloadInfo const &);
    /**
     * @hash   -1577116738
     * @symbol ?onError@WebviewObserver@@UEAAXAEBUWebviewError@@@Z
     */
    MCVAPI void onError(struct WebviewError const &);
    /**
     * @hash   -534106332
     * @symbol ?onLoadingBegin@WebviewObserver@@UEAAXXZ
     */
    MCVAPI void onLoadingBegin();
    /**
     * @hash   1567388886
     * @symbol ?onLoadingEnd@WebviewObserver@@UEAAXXZ
     */
    MCVAPI void onLoadingEnd();
    /**
     * @hash   1320754627
     * @symbol ?onMessageRecieved@WebviewObserver@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void onMessageRecieved(std::string const &);
    /**
     * @hash   542543442
     * @symbol ?onWebviewChanged@WebviewObserver@@UEAAXXZ
     */
    MCVAPI void onWebviewChanged();
#endif

};