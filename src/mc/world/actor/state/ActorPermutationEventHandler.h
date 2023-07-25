#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorPermutationEventHandler {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORPERMUTATIONEVENTHANDLER
public:
    ActorPermutationEventHandler& operator=(ActorPermutationEventHandler const&) = delete;
    ActorPermutationEventHandler(ActorPermutationEventHandler const&)            = delete;
    ActorPermutationEventHandler()                                               = delete;
#endif

public:
    /**
     * @symbol ??0ActorPermutationEventHandler\@\@QEAA\@AEAVActor\@\@\@Z
     */
    MCAPI ActorPermutationEventHandler(class Actor&);
    /**
     * @symbol
     * ?checkActiveComponents\@ActorPermutationEventHandler\@\@QEAAXV?$shared_ptr\@VActorPermutation\@\@\@std\@\@\@Z
     */
    MCAPI void checkActiveComponents(class std::shared_ptr<class ActorPermutation>);
    /**
     * @symbol ?getPermutationDescriptor\@ActorPermutationEventHandler\@\@QEAAPEAVActorDefinitionDescriptor\@\@XZ
     */
    MCAPI class ActorDefinitionDescriptor* getPermutationDescriptor();
    /**
     * @symbol ?hasChanged\@ActorPermutationEventHandler\@\@QEAA_NXZ
     */
    MCAPI bool hasChanged();
    /**
     * @symbol
     * ?initPermutations\@ActorPermutationEventHandler\@\@QEAAXAEAV?$vector\@V?$shared_ptr\@VActorPermutation\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VActorPermutation\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void initPermutations(std::vector<class std::shared_ptr<class ActorPermutation>>&);
    /**
     * @symbol ?reload\@ActorPermutationEventHandler\@\@QEAAXAEAVRenderParams\@\@\@Z
     */
    MCAPI void reload(class RenderParams&);
};
