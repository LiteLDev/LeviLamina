#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorPermutationEventHandler {

public:
    // prevent constructor by default
    ActorPermutationEventHandler& operator=(ActorPermutationEventHandler const&) = delete;
    ActorPermutationEventHandler(ActorPermutationEventHandler const&)            = delete;
    ActorPermutationEventHandler()                                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ActorPermutationEventHandler\@\@QEAA\@AEAVActor\@\@\@Z
     */
    MCAPI ActorPermutationEventHandler(class Actor&);
    /**
     * @symbol
     * ?checkActiveComponents\@ActorPermutationEventHandler\@\@QEAAXV?$shared_ptr\@VActorPermutation\@\@\@std\@\@\@Z
     */
    MCAPI void checkActiveComponents(std::shared_ptr<class ActorPermutation>);
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
    MCAPI void initPermutations(std::vector<std::shared_ptr<class ActorPermutation>>&);
    /**
     * @symbol ?reload\@ActorPermutationEventHandler\@\@QEAAXAEAVRenderParams\@\@\@Z
     */
    MCAPI void reload(class RenderParams&);
    // NOLINTEND
};
