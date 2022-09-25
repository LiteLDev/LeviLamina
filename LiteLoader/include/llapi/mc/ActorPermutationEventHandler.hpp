/**
 * @file  ActorPermutationEventHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorPermutationEventHandler.
 *
 */
class ActorPermutationEventHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORPERMUTATIONEVENTHANDLER
public:
    class ActorPermutationEventHandler& operator=(class ActorPermutationEventHandler const &) = delete;
    ActorPermutationEventHandler(class ActorPermutationEventHandler const &) = delete;
    ActorPermutationEventHandler() = delete;
#endif

public:
    /**
     * @hash   -1324361006
     * @symbol ??0ActorPermutationEventHandler@@QEAA@AEAVActor@@@Z
     */
    MCAPI ActorPermutationEventHandler(class Actor &);
    /**
     * @hash   -100456533
     * @symbol ?checkActiveComponents@ActorPermutationEventHandler@@QEAAXV?$shared_ptr@VActorPermutation@@@std@@@Z
     */
    MCAPI void checkActiveComponents(class std::shared_ptr<class ActorPermutation>);
    /**
     * @hash   252354103
     * @symbol ?getPermutationDescriptor@ActorPermutationEventHandler@@QEAAPEAVActorDefinitionDescriptor@@XZ
     */
    MCAPI class ActorDefinitionDescriptor * getPermutationDescriptor();
    /**
     * @hash   639467232
     * @symbol ?hasChanged@ActorPermutationEventHandler@@QEAA_NXZ
     */
    MCAPI bool hasChanged();
    /**
     * @hash   139453115
     * @symbol ?initPermutations@ActorPermutationEventHandler@@QEAAXAEAV?$vector@V?$shared_ptr@VActorPermutation@@@std@@V?$allocator@V?$shared_ptr@VActorPermutation@@@std@@@2@@std@@@Z
     */
    MCAPI void initPermutations(std::vector<class std::shared_ptr<class ActorPermutation>> &);
    /**
     * @hash   189779588
     * @symbol ?reload@ActorPermutationEventHandler@@QEAAXAEAVRenderParams@@@Z
     */
    MCAPI void reload(class RenderParams &);
    /**
     * @hash   1932600235
     * @symbol ??1ActorPermutationEventHandler@@QEAA@XZ
     */
    MCAPI ~ActorPermutationEventHandler();

};