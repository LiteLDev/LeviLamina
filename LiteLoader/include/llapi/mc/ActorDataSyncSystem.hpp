/**
 * @file  MC/ActorDataSyncSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDataSyncSystem.
 *
 */
class ActorDataSyncSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDATASYNCSYSTEM
public:
    class ActorDataSyncSystem& operator=(class ActorDataSyncSystem const &) = delete;
    ActorDataSyncSystem(class ActorDataSyncSystem const &) = delete;
    ActorDataSyncSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ActorDataSyncSystem();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   217047913
     * @vftbl  2
     * @symbol ?tick@ActorDataSyncSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);

};