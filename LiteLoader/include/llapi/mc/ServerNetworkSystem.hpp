/**
 * @file  ServerNetworkSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

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
    /**
     * @symbol ??0ServerNetworkSystem\@\@QEAA\@AEAVScheduler\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBUNetworkSystemToggles\@\@AEBV?$NonOwnerPointer\@VNetworkDebugManager\@\@\@Bedrock\@\@V?$ServiceReference\@VServicesManager\@\@\@\@\@Z
     */
    MCAPI ServerNetworkSystem(class Scheduler &, std::vector<std::string> const &, struct NetworkSystemToggles const &, class Bedrock::NonOwnerPointer<class NetworkDebugManager> const &, class ServiceReference<class ServicesManager>);

};
