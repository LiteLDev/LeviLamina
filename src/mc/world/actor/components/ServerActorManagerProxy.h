#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerActorManagerProxy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERACTORMANAGERPROXY
public:
    ServerActorManagerProxy& operator=(ServerActorManagerProxy const&) = delete;
    ServerActorManagerProxy(ServerActorManagerProxy const&)            = delete;
    ServerActorManagerProxy()                                          = delete;
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
    virtual void initializeActor(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?validate\@ServerActorManagerProxy\@\@UEAA_NAEBVActor\@\@\@Z
     */
    virtual bool validate(class Actor const&);
    /**
     * @vftbl 3
     * @symbol ?removeActorInLevelChunk\@ServerActorManagerProxy\@\@UEAAXAEBVActor\@\@\@Z
     */
    virtual void removeActorInLevelChunk(class Actor const&);
    /**
     * @vftbl 4
     * @symbol ?deleteActorFromWorldInLevelChunk\@ServerActorManagerProxy\@\@UEAAXAEBVActor\@\@\@Z
     */
    virtual void deleteActorFromWorldInLevelChunk(class Actor const&);
    /**
     * @symbol ??0ServerActorManagerProxy\@\@QEAA\@AEAVServerLevel\@\@\@Z
     */
    MCAPI ServerActorManagerProxy(class ServerLevel&);
};
