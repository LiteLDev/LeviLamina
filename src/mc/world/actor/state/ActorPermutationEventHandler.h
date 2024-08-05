#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorPermutationEventHandler {
public:
    // prevent constructor by default
    ActorPermutationEventHandler& operator=(ActorPermutationEventHandler const&);
    ActorPermutationEventHandler(ActorPermutationEventHandler const&);
    ActorPermutationEventHandler();

public:
    // NOLINTBEGIN
    MCAPI explicit ActorPermutationEventHandler(class Actor& actor);

    MCAPI void checkActiveComponents(std::shared_ptr<class ActorPermutation>);

    MCAPI class ActorDefinitionDescriptor* getPermutationDescriptor();

    MCAPI bool hasChanged();

    MCAPI void initPermutations(std::vector<std::shared_ptr<class ActorPermutation>>&);

    MCAPI void reload(class RenderParams& params);

    MCAPI ~ActorPermutationEventHandler();

    // NOLINTEND
};
