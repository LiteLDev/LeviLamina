#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorMovementProxyComponent {

public:
    // prevent constructor by default
    ActorMovementProxyComponent& operator=(ActorMovementProxyComponent const&) = delete;
    ActorMovementProxyComponent(ActorMovementProxyComponent const&)            = delete;
    ActorMovementProxyComponent()                                              = delete;

public:
    /**
     * @symbol
     * ??0ActorMovementProxyComponent\@\@QEAA\@V?$not_null\@V?$shared_ptr\@UIActorMovementProxy\@\@\@std\@\@\@gsl\@\@\@Z
     */
    MCAPI ActorMovementProxyComponent(class gsl::not_null<class std::shared_ptr<struct IActorMovementProxy>>); // NOLINT
    /**
     * @symbol
     * ?getMovementProxy\@ActorMovementProxyComponent\@\@QEBA?AV?$shared_ptr\@$$CBUIActorMovementProxy\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<struct IActorMovementProxy const> getMovementProxy() const; // NOLINT
    /**
     * @symbol
     * ?getMovementProxy\@ActorMovementProxyComponent\@\@QEAA?AV?$shared_ptr\@UIActorMovementProxy\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<struct IActorMovementProxy> getMovementProxy(); // NOLINT
};
