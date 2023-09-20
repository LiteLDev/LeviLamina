/**
 * @file  WebviewObserver.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?onDownloadBegin\@WebviewObserver\@\@UEAAXAEBUWebviewDownloadInfo\@\@\@Z
     */
    virtual void onDownloadBegin(struct WebviewDownloadInfo const &);
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl 8
     * @symbol ?onDownloadComplete\@WebviewObserver\@\@UEAAXAEBUWebviewDownloadInfo\@\@\@Z
     */
    virtual void onDownloadComplete(struct WebviewDownloadInfo const &);
    /**
     * @vftbl 9
     * @symbol ?onDownloadCanceled\@WebviewObserver\@\@UEAAXAEBUWebviewDownloadInfo\@\@\@Z
     */
    virtual void onDownloadCanceled(struct WebviewDownloadInfo const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WEBVIEWOBSERVER
    /**
     * @symbol ?onDownloadUpdate\@WebviewObserver\@\@UEAAXAEBUWebviewDownloadInfo\@\@\@Z
     */
    MCVAPI void onDownloadUpdate(struct WebviewDownloadInfo const &);
    /**
     * @symbol ?onError\@WebviewObserver\@\@UEAAXAEBUWebviewError\@\@\@Z
     */
    MCVAPI void onError(struct WebviewError const &);
    /**
     * @symbol ?onLoadingBegin\@WebviewObserver\@\@UEAAXXZ
     */
    MCVAPI void onLoadingBegin();
    /**
     * @symbol ?onLoadingEnd\@WebviewObserver\@\@UEAAXXZ
     */
    MCVAPI void onLoadingEnd();
    /**
     * @symbol ?onMessageRecieved\@WebviewObserver\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onMessageRecieved(std::string const &);
    /**
     * @symbol ?onWebviewChanged\@WebviewObserver\@\@UEAAXXZ
     */
    MCVAPI void onWebviewChanged();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~WebviewObserver();
#endif

};
