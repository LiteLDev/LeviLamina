/**
 * @file  RemoteConnector.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Connector.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class RemoteConnector {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOTECONNECTOR
public:
    class RemoteConnector& operator=(class RemoteConnector const &) = delete;
    RemoteConnector(class RemoteConnector const &) = delete;
    RemoteConnector() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REMOTECONNECTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RemoteConnector();
#endif
    /**
     * @symbol ??0RemoteConnector\@\@QEAA\@AEAUConnectionCallbacks\@Connector\@\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    MCAPI RemoteConnector(struct Connector::ConnectionCallbacks &, class Bedrock::NonOwnerPointer<class AppPlatform> const &);

};
