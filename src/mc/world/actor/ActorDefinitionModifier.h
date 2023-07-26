#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionModifier {

public:
    // prevent constructor by default
    ActorDefinitionModifier() = delete;

public:
    /**
     * @symbol ??0ActorDefinitionModifier\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorDefinitionModifier(struct ActorDefinitionModifier const&); // NOLINT
    /**
     * @symbol ??4ActorDefinitionModifier\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct ActorDefinitionModifier& operator=(struct ActorDefinitionModifier&&); // NOLINT
    /**
     * @symbol ??4ActorDefinitionModifier\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ActorDefinitionModifier& operator=(struct ActorDefinitionModifier const&); // NOLINT
    /**
     * @symbol ??1ActorDefinitionModifier\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinitionModifier(); // NOLINT
};
