#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandBlockComponent {
public:
    // prevent constructor by default
    CommandBlockComponent& operator=(CommandBlockComponent const&);
    CommandBlockComponent(CommandBlockComponent const&);

public:
    // NOLINTBEGIN
    MCAPI CommandBlockComponent();

    MCAPI CommandBlockComponent(class CommandBlockComponent&&);

    MCAPI void addAdditionalSaveData(class CompoundTag& entityTag) const;

    MCAPI int decrementTickCount();

    MCAPI class BaseCommandBlock& getBaseCommandBlock();

    MCAPI int getCurrentTickCount() const;

    MCAPI bool getTicking() const;

    MCAPI void initFromDefinition(class Actor& owner);

    MCAPI void onCommandBlockUpdate(
        class Actor&       owner,
        std::string const& command,
        bool               trackOutput,
        std::string        name,
        int                tickDelay,
        bool               executeOnFirstTick
    );

    MCAPI class CommandBlockComponent& operator=(class CommandBlockComponent&&);

    MCAPI void readAdditionalSaveData(
        class Actor&             owner,
        class CompoundTag const& entityTag,
        class DataLoadHelper&    dataLoadHelper
    );

    MCAPI void resetCurrentTick();

    MCAPI void setLastOutput(class Actor& owner, std::string const& lastOutput);

    MCAPI void setTicking(bool ticking);

    // NOLINTEND
};
