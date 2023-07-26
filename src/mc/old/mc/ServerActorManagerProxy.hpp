/**
 * @file  ServerActorManagerProxy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ServerActorManagerProxy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERACTORMANAGERPROXY
public:
    class ServerActorManagerProxy& operator=(class ServerActorManagerProxy const &) = delete;
    ServerActorManagerProxy(class ServerActorManagerProxy const &) = delete;
    ServerActorManagerProxy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ServerActorManagerProxy();
    /**
     * @vftbl  1
     * @symbol  ?initializeActor\@ServerActorManagerProxy\@\@UEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeActor(class Actor &);
    /**
     * @vftbl  2
     * @symbol  ?validate\@ServerActorManagerProxy\@\@UEAA_NAEBVActor\@\@\@Z
     */
    virtual bool validate(class Actor const &);
    /**
     * @symbol  ??0ServerActorManagerProxy\@\@QEAA\@AEAVServerLevel\@\@\@Z
     */
    MCAPI ServerActorManagerProxy(class ServerLevel &);

};