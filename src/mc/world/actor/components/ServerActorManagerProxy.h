#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerActorManagerProxy {

public:
    // prevent constructor by default
    ServerActorManagerProxy& operator=(ServerActorManagerProxy const&) = delete;
    ServerActorManagerProxy(ServerActorManagerProxy const&)            = delete;
    ServerActorManagerProxy()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?initializeActor\@ServerActorManagerProxy\@\@UEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeActor(class Actor&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?validate\@ServerActorManagerProxy\@\@UEAA_NAEBVActor\@\@\@Z
     */
    virtual bool validate(class Actor const&); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?removeActorInLevelChunk\@ServerActorManagerProxy\@\@UEAAXAEBVActor\@\@\@Z
     */
    virtual void removeActorInLevelChunk(class Actor const&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?deleteActorFromWorldInLevelChunk\@ServerActorManagerProxy\@\@UEAAXAEBVActor\@\@\@Z
     */
    virtual void deleteActorFromWorldInLevelChunk(class Actor const&); // NOLINT
    /**
     * @symbol ??0ServerActorManagerProxy\@\@QEAA\@AEAVServerLevel\@\@\@Z
     */
    MCAPI ServerActorManagerProxy(class ServerLevel&); // NOLINT
};
