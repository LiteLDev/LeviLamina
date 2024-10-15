#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseCommandBlock {
public:
    // prevent constructor by default
    BaseCommandBlock& operator=(BaseCommandBlock const&);
    BaseCommandBlock(BaseCommandBlock const&);

public:
    // NOLINTBEGIN
    MCAPI BaseCommandBlock();

    MCAPI std::string const& getCommand() const;

    MCAPI std::string getLastOutput() const;

    MCAPI std::string const& getName() const;

    MCAPI int getTickDelay() const;

    MCAPI bool getTrackOutput() const;

    MCAPI void load(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI bool performCommand(class BlockSource& region, struct ActorUniqueID const& minecartId);

    MCAPI bool save(class CompoundTag& tag) const;

    MCAPI void setCommand(class BlockSource& region, class BlockPos const& pos, std::string const& command);

    MCAPI void setCommand(class BlockSource& region, struct ActorUniqueID const& entityId, std::string const& command);

    MCAPI void setLastOutput(std::string const& lastOutput, std::vector<std::string> const& params);

    MCAPI void setName(std::string const& name);

    MCAPI void setShouldExecuteOnFirstTick(bool shouldExecute);

    MCAPI void setTickDelay(int tickDelay);

    MCAPI void setTrackOutput(bool trackOutput);

    MCAPI bool shouldExecuteOnFirstTick() const;

    MCAPI ~BaseCommandBlock();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _performCommand(class BlockSource& region, class CommandOrigin const& origin, bool& markForSaving);

    MCAPI void _setCommand(class BlockSource& region, class CommandOrigin const& origin, std::string const& command);

    MCAPI void compile(class CommandOrigin const& origin, class Level& level);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI static std::string const& DefaultCommandBlockName();

    // NOLINTEND
};
