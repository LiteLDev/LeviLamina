/**
 * @file  ServerActorManagerProxy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?initializeActor\@ServerActorManagerProxy\@\@UEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeActor(class Actor &);
    /**
     * @vftbl 2
     * @symbol ?validate\@ServerActorManagerProxy\@\@UEAA_NAEBVActor\@\@\@Z
     */
    virtual bool validate(class Actor const &);
    /**
     * @vftbl 3
     * @symbol ?removeActorInLevelChunk\@ServerActorManagerProxy\@\@UEAAXAEBVActor\@\@\@Z
     */
    virtual void removeActorInLevelChunk(class Actor const &);
    /**
     * @vftbl 4
     * @symbol ?deleteActorFromWorldInLevelChunk\@ServerActorManagerProxy\@\@UEAAXAEBVActor\@\@\@Z
     */
    virtual void deleteActorFromWorldInLevelChunk(class Actor const &);
    /**
     * @symbol ??0ServerActorManagerProxy\@\@QEAA\@AEAVServerLevel\@\@\@Z
     */
    MCAPI ServerActorManagerProxy(class ServerLevel &);

};
