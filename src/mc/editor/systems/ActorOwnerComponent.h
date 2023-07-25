#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorOwnerComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTOROWNERCOMPONENT
public:
    ActorOwnerComponent& operator=(ActorOwnerComponent const&) = delete;
    ActorOwnerComponent(ActorOwnerComponent const&)            = delete;
    ActorOwnerComponent()                                      = delete;
#endif

public:
    /**
     * @symbol
     * ??0ActorOwnerComponent\@\@QEAA\@V?$unique_ptr\@VActor\@\@U?$default_delete\@VActor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI ActorOwnerComponent(std::unique_ptr<class Actor>);
    /**
     * @symbol ??0ActorOwnerComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ActorOwnerComponent(class ActorOwnerComponent&&);
    /**
     * @symbol ?getActor\@ActorOwnerComponent\@\@QEBAAEAVActor\@\@XZ
     */
    MCAPI class Actor& getActor() const;
    /**
     * @symbol ?getActor\@ActorOwnerComponent\@\@QEAAAEAVActor\@\@XZ
     */
    MCAPI class Actor& getActor();
    /**
     * @symbol ??4ActorOwnerComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ActorOwnerComponent& operator=(class ActorOwnerComponent&&);
    /**
     * @symbol ??1ActorOwnerComponent\@\@QEAA\@XZ
     */
    MCAPI ~ActorOwnerComponent();
};
