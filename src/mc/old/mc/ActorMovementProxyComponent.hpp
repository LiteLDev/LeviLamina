/**
 * @file  ActorMovementProxyComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorMovementProxyComponent.
 *
 */
class ActorMovementProxyComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORMOVEMENTPROXYCOMPONENT
public:
    class ActorMovementProxyComponent& operator=(class ActorMovementProxyComponent const &) = delete;
    ActorMovementProxyComponent(class ActorMovementProxyComponent const &) = delete;
    ActorMovementProxyComponent() = delete;
#endif

public:
    /**
     * @symbol  ??0ActorMovementProxyComponent\@\@QEAA\@V?$not_null\@V?$shared_ptr\@UIActorMovementProxy\@\@\@std\@\@\@gsl\@\@\@Z
     */
    MCAPI ActorMovementProxyComponent(class gsl::not_null<class std::shared_ptr<struct IActorMovementProxy>>);
    /**
     * @symbol  ?getMovementProxy\@ActorMovementProxyComponent\@\@QEAA?AV?$shared_ptr\@UIActorMovementProxy\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<struct IActorMovementProxy> getMovementProxy();
    /**
     * @symbol  ?getMovementProxy\@ActorMovementProxyComponent\@\@QEBA?AV?$shared_ptr\@$$CBUIActorMovementProxy\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<struct IActorMovementProxy const> getMovementProxy() const;

};