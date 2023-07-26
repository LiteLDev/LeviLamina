/**
 * @file  GlobalActorLegacyTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GlobalActorLegacyTickSystem.
 *
 */
class GlobalActorLegacyTickSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLOBALACTORLEGACYTICKSYSTEM
public:
    class GlobalActorLegacyTickSystem& operator=(class GlobalActorLegacyTickSystem const &) = delete;
    GlobalActorLegacyTickSystem(class GlobalActorLegacyTickSystem const &) = delete;
    GlobalActorLegacyTickSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GlobalActorLegacyTickSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@GlobalActorLegacyTickSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

};