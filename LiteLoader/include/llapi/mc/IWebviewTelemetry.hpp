/**
 * @file  IWebviewTelemetry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IWebviewTelemetry.
 *
 */
class IWebviewTelemetry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IWEBVIEWTELEMETRY
public:
    class IWebviewTelemetry& operator=(class IWebviewTelemetry const &) = delete;
    IWebviewTelemetry(class IWebviewTelemetry const &) = delete;
    IWebviewTelemetry() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~IWebviewTelemetry();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol  ?onDownloadBegin\@IWebviewTelemetry\@\@UEAAXAEBUWebviewDownloadInfo\@\@\@Z
     */
    virtual void onDownloadBegin(struct WebviewDownloadInfo const &);
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol  ?onDownloadComplete\@IWebviewTelemetry\@\@UEAAXAEBUWebviewDownloadInfo\@\@\@Z
     */
    virtual void onDownloadComplete(struct WebviewDownloadInfo const &);
    /**
     * @vftbl  9
     * @symbol  ?onDownloadCanceled\@IWebviewTelemetry\@\@UEAAXAEBUWebviewDownloadInfo\@\@\@Z
     */
    virtual void onDownloadCanceled(struct WebviewDownloadInfo const &);
    /**
     * @symbol  ??0IWebviewTelemetry\@\@QEAA\@AEBVIMinecraftEventing\@\@\@Z
     */
    MCAPI IWebviewTelemetry(class IMinecraftEventing const &);

};