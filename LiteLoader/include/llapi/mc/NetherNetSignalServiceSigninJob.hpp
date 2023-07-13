/**
 * @file  NetherNetSignalServiceSigninJob.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class NetherNetSignalServiceSigninJob {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERNETSIGNALSERVICESIGNINJOB
public:
    class NetherNetSignalServiceSigninJob& operator=(class NetherNetSignalServiceSigninJob const &) = delete;
    NetherNetSignalServiceSigninJob(class NetherNetSignalServiceSigninJob const &) = delete;
    NetherNetSignalServiceSigninJob() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERNETSIGNALSERVICESIGNINJOB
    /**
     * @symbol ?signin\@NetherNetSignalServiceSigninJob\@\@UEAAX_NV?$optional\@V?$duration\@_JU?$ratio\@$00$00\@std\@\@\@chrono\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void signin(bool, class std::optional<class std::chrono::duration<__int64, struct std::ratio<1, 1>>>);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetherNetSignalServiceSigninJob();
#endif
    /**
     * @symbol ??0NetherNetSignalServiceSigninJob\@\@QEAA\@$$QEAV?$not_null\@V?$NonOwnerPointer\@UNetherNetConnector\@\@\@Bedrock\@\@\@gsl\@\@$$QEAV?$function\@$$A6AX_N\@Z\@std\@\@$$QEAV?$function\@$$A6AXXZ\@4\@V?$not_null\@V?$NonOwnerPointer\@VDisconnectionRequestHandler\@\@\@Bedrock\@\@\@2\@V?$not_null\@V?$NonOwnerPointer\@VServicesManager\@\@\@Bedrock\@\@\@2\@V?$not_null\@V?$NonOwnerPointer\@VIMinecraftEventing\@\@\@Bedrock\@\@\@2\@_N\@Z
     */
    MCAPI NetherNetSignalServiceSigninJob(class gsl::not_null<class Bedrock::NonOwnerPointer<struct NetherNetConnector>> &&, class std::function<void (bool)> &&, class std::function<void (void)> &&, class gsl::not_null<class Bedrock::NonOwnerPointer<class DisconnectionRequestHandler>>, class gsl::not_null<class Bedrock::NonOwnerPointer<class ServicesManager>>, class gsl::not_null<class Bedrock::NonOwnerPointer<class IMinecraftEventing>>, bool);

//private:
    /**
     * @symbol ?_executeOnMainThread\@NetherNetSignalServiceSigninJob\@\@AEAAX$$QEAV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void _executeOnMainThread(class std::function<void (void)> &&);
    /**
     * @symbol ?_signin\@NetherNetSignalServiceSigninJob\@\@AEAAXAEBUUrl\@1\@AEBUToken\@1\@_N\@Z
     */
    MCAPI void _signin(struct NetherNetSignalServiceSigninJob::Url const &, struct NetherNetSignalServiceSigninJob::Token const &, bool);

private:

};
