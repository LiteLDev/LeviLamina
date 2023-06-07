/**
 * @file  NetherNetSignalServiceSigninJob.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Social.hpp"

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
     * @symbol ?signin\@NetherNetSignalServiceSigninJob\@\@UEAAX_N\@Z
     */
    MCVAPI void signin(bool);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetherNetSignalServiceSigninJob();
#endif
    /**
     * @symbol ??0NetherNetSignalServiceSigninJob\@\@QEAA\@$$QEAV?$not_null\@V?$NonOwnerPointer\@UNetherNetConnector\@\@\@Bedrock\@\@\@gsl\@\@$$QEAV?$function\@$$A6AX_N\@Z\@std\@\@$$QEAV?$function\@$$A6AXXZ\@4\@V?$not_null\@V?$NonOwnerPointer\@VDisconnectionRequestHandler\@\@\@Bedrock\@\@\@2\@V?$not_null\@V?$NonOwnerPointer\@VMultiplayerServiceManager\@Social\@\@\@Bedrock\@\@\@2\@V?$not_null\@V?$NonOwnerPointer\@VIMinecraftEventing\@\@\@Bedrock\@\@\@2\@\@Z
     */
    MCAPI NetherNetSignalServiceSigninJob(class gsl::not_null<class Bedrock::NonOwnerPointer<struct NetherNetConnector>> &&, class std::function<void (bool)> &&, class std::function<void (void)> &&, class gsl::not_null<class Bedrock::NonOwnerPointer<class DisconnectionRequestHandler>>, class gsl::not_null<class Bedrock::NonOwnerPointer<class Social::MultiplayerServiceManager>>, class gsl::not_null<class Bedrock::NonOwnerPointer<class IMinecraftEventing>>);

};
