#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorMovementProxyComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORMOVEMENTPROXYCOMPONENT
public:
    ActorMovementProxyComponent& operator=(ActorMovementProxyComponent const&) = delete;
    ActorMovementProxyComponent(ActorMovementProxyComponent const&)            = delete;
    ActorMovementProxyComponent()                                              = delete;
#endif

public:
    /**
     * @symbol
     * ??0ActorMovementProxyComponent\@\@QEAA\@V?$not_null\@V?$shared_ptr\@UIActorMovementProxy\@\@\@std\@\@\@gsl\@\@\@Z
     */
    MCAPI ActorMovementProxyComponent(class gsl::not_null<class std::shared_ptr<struct IActorMovementProxy>>);
    /**
     * @symbol
     * ?getMovementProxy\@ActorMovementProxyComponent\@\@QEBA?AV?$shared_ptr\@$$CBUIActorMovementProxy\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<struct IActorMovementProxy const> getMovementProxy() const;
    /**
     * @symbol
     * ?getMovementProxy\@ActorMovementProxyComponent\@\@QEAA?AV?$shared_ptr\@UIActorMovementProxy\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<struct IActorMovementProxy> getMovementProxy();
};
