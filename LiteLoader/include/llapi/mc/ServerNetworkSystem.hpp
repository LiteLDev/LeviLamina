/**
 * @file  ServerNetworkSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "NetworkSystem.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ServerNetworkSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERNETWORKSYSTEM
public:
    class ServerNetworkSystem& operator=(class ServerNetworkSystem const &) = delete;
    ServerNetworkSystem(class ServerNetworkSystem const &) = delete;
    ServerNetworkSystem() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERNETWORKSYSTEM
    /**
     * @symbol ?createSignalServiceSigninJob\@ServerNetworkSystem\@\@UEAA?AV?$shared_ptr\@VSignalServiceSigninJob\@\@\@std\@\@$$QEAV?$function\@$$A6AX_N\@Z\@3\@$$QEAV?$function\@$$A6AXXZ\@3\@V?$not_null\@V?$NonOwnerPointer\@VDisconnectionRequestHandler\@\@\@Bedrock\@\@\@gsl\@\@V?$not_null\@V?$NonOwnerPointer\@VServicesManager\@\@\@Bedrock\@\@\@7\@V?$not_null\@V?$NonOwnerPointer\@VIMinecraftEventing\@\@\@Bedrock\@\@\@7\@_N\@Z
     */
    MCVAPI class std::shared_ptr<class SignalServiceSigninJob> createSignalServiceSigninJob(class std::function<void (bool)> &&, class std::function<void (void)> &&, class gsl::not_null<class Bedrock::NonOwnerPointer<class DisconnectionRequestHandler>>, class gsl::not_null<class Bedrock::NonOwnerPointer<class ServicesManager>>, class gsl::not_null<class Bedrock::NonOwnerPointer<class IMinecraftEventing>>, bool);
#endif
    /**
     * @symbol ??0ServerNetworkSystem\@\@QEAA\@AEAVScheduler\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBUNetworkSystemToggles\@\@AEBV?$NonOwnerPointer\@VNetworkDebugManager\@\@\@Bedrock\@\@V?$ServiceReference\@VServicesManager\@\@\@\@V?$not_null\@V?$NonOwnerPointer\@VNetworkSessionOwner\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI ServerNetworkSystem(class Scheduler &, std::vector<std::string> const &, struct NetworkSystemToggles const &, class Bedrock::NonOwnerPointer<class NetworkDebugManager> const &, class ServiceReference<class ServicesManager>, class gsl::not_null<class Bedrock::NonOwnerPointer<class NetworkSessionOwner>>);

//private:
    /**
     * @symbol ?_initNetworkStatistics\@ServerNetworkSystem\@\@AEAAXAEBUNetworkSystemToggles\@\@AEBV?$NonOwnerPointer\@VNetworkDebugManager\@\@\@Bedrock\@\@\@Z
     */
    MCAPI void _initNetworkStatistics(struct NetworkSystemToggles const &, class Bedrock::NonOwnerPointer<class NetworkDebugManager> const &);
    /**
     * @symbol ?_createConstructionDependencies\@ServerNetworkSystem\@\@CA?AUDependencies\@NetworkSystem\@\@PEAV1\@AEAVScheduler\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBUNetworkSystemToggles\@\@V?$ServiceReference\@VServicesManager\@\@\@\@AEBVNetherNetTransportFactory\@\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@V?$function\@$$A6A_NXZ\@6\@V?$not_null\@V?$NonOwnerPointer\@VNetworkSessionOwner\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI static struct NetworkSystem::Dependencies _createConstructionDependencies(class ServerNetworkSystem *, class Scheduler &, std::vector<std::string> const &, struct NetworkSystemToggles const &, class ServiceReference<class ServicesManager>, class NetherNetTransportFactory const &, class Bedrock::NonOwnerPointer<class AppPlatform> const &, class std::function<bool (void)>, class gsl::not_null<class Bedrock::NonOwnerPointer<class NetworkSessionOwner>>);

private:

};
