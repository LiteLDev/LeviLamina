/**
 * @file  ActorOwnerComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
     * @symbol ??0ActorOwnerComponent@@QEAA@V?$unique_ptr@VActor@@U?$default_delete@VActor@@@std@@@std@@@Z
     * @hash   -18035230
     */
    MCAPI ActorOwnerComponent(std::unique_ptr<class Actor>);
    /**
     * @symbol ??0ActorOwnerComponent@@QEAA@$$QEAV0@@Z
     * @hash   -2042109001
     */
    MCAPI ActorOwnerComponent(class ActorOwnerComponent &&);
    /**
     * @symbol ?getActor@ActorOwnerComponent@@QEBAAEAVActor@@XZ
     * @hash   1909220712
     */
    MCAPI class Actor & getActor() const;
    /**
     * @symbol ?getActor@ActorOwnerComponent@@QEAAAEAVActor@@XZ
     * @hash   -1875242198
     */
    MCAPI class Actor & getActor();
    /**
     * @symbol ??4ActorOwnerComponent@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   -1816603630
     */
    MCAPI class ActorOwnerComponent & operator=(class ActorOwnerComponent &&);
    /**
     * @symbol ??1ActorOwnerComponent@@QEAA@XZ
     * @hash   1095485019
     */
    MCAPI ~ActorOwnerComponent();

};