/**
 * @file  MC/ActorOwnerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -18035230
     * @symbol ??0ActorOwnerComponent@@QEAA@V?$unique_ptr@VActor@@U?$default_delete@VActor@@@std@@@std@@@Z
     */
    MCAPI ActorOwnerComponent(std::unique_ptr<class Actor>);
    /**
     * @hash   -2042109001
     * @symbol ??0ActorOwnerComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI ActorOwnerComponent(class ActorOwnerComponent &&);
    /**
     * @hash   1909220712
     * @symbol ?getActor@ActorOwnerComponent@@QEBAAEAVActor@@XZ
     */
    MCAPI class Actor & getActor() const;
    /**
     * @hash   -1875242198
     * @symbol ?getActor@ActorOwnerComponent@@QEAAAEAVActor@@XZ
     */
    MCAPI class Actor & getActor();
    /**
     * @hash   -1816603630
     * @symbol ??4ActorOwnerComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class ActorOwnerComponent & operator=(class ActorOwnerComponent &&);
    /**
     * @hash   1095485019
     * @symbol ??1ActorOwnerComponent@@QEAA@XZ
     */
    MCAPI ~ActorOwnerComponent();

};