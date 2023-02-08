/**
 * @file  ActorOwnerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorOwnerComponent.
 *
 */
class ActorOwnerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTOROWNERCOMPONENT
public:
    class ActorOwnerComponent& operator=(class ActorOwnerComponent const &) = delete;
    ActorOwnerComponent(class ActorOwnerComponent const &) = delete;
    ActorOwnerComponent() = delete;
#endif

public:
    /**
     * @hash   -1289261406
     * @symbol  ??0ActorOwnerComponent\@\@QEAA\@V?$unique_ptr\@VActor\@\@U?$default_delete\@VActor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI ActorOwnerComponent(std::unique_ptr<class Actor>);
    /**
     * @hash   981632119
     * @symbol  ??0ActorOwnerComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ActorOwnerComponent(class ActorOwnerComponent &&);
    /**
     * @hash   2042176984
     * @symbol  ?getActor\@ActorOwnerComponent\@\@QEBAAEAVActor\@\@XZ
     */
    MCAPI class Actor & getActor() const;
    /**
     * @hash   -1742285926
     * @symbol  ?getActor\@ActorOwnerComponent\@\@QEAAAEAVActor\@\@XZ
     */
    MCAPI class Actor & getActor();
    /**
     * @hash   1207152866
     * @symbol  ??4ActorOwnerComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ActorOwnerComponent & operator=(class ActorOwnerComponent &&);
    /**
     * @hash   1081446731
     * @symbol  ??1ActorOwnerComponent\@\@QEAA\@XZ
     */
    MCAPI ~ActorOwnerComponent();

};