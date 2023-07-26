#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorPermutationEventHandler {

public:
    // prevent constructor by default
    ActorPermutationEventHandler& operator=(ActorPermutationEventHandler const&) = delete;
    ActorPermutationEventHandler(ActorPermutationEventHandler const&)            = delete;
    ActorPermutationEventHandler()                                               = delete;

public:
    /**
     * @symbol ??0ActorPermutationEventHandler\@\@QEAA\@AEAVActor\@\@\@Z
     */
    MCAPI ActorPermutationEventHandler(class Actor&); // NOLINT
    /**
     * @symbol
     * ?checkActiveComponents\@ActorPermutationEventHandler\@\@QEAAXV?$shared_ptr\@VActorPermutation\@\@\@std\@\@\@Z
     */
    MCAPI void checkActiveComponents(class std::shared_ptr<class ActorPermutation>); // NOLINT
    /**
     * @symbol ?getPermutationDescriptor\@ActorPermutationEventHandler\@\@QEAAPEAVActorDefinitionDescriptor\@\@XZ
     */
    MCAPI class ActorDefinitionDescriptor* getPermutationDescriptor(); // NOLINT
    /**
     * @symbol ?hasChanged\@ActorPermutationEventHandler\@\@QEAA_NXZ
     */
    MCAPI bool hasChanged(); // NOLINT
    /**
     * @symbol
     * ?initPermutations\@ActorPermutationEventHandler\@\@QEAAXAEAV?$vector\@V?$shared_ptr\@VActorPermutation\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VActorPermutation\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void initPermutations(std::vector<class std::shared_ptr<class ActorPermutation>>&); // NOLINT
    /**
     * @symbol ?reload\@ActorPermutationEventHandler\@\@QEAAXAEAVRenderParams\@\@\@Z
     */
    MCAPI void reload(class RenderParams&); // NOLINT
};
