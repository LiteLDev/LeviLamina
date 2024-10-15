#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Command {
public:
    // prevent constructor by default
    Command& operator=(Command const&);
    Command(Command const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Command();

    // vIndex: 1
    virtual bool collectOptionalArguments();

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const = 0;

    MCAPI Command();

    MCAPI std::string getCommandName() const;

    MCAPI bool hasFlag(struct CommandFlag flag) const;

    MCAPI void run(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static bool shouldUseCommandOriginRotation(class CommandOrigin const& origin, int version);

    MCAPI static bool validRange(float input, float low, float high, class CommandOutput& output);

    MCAPI static bool validRange(int input, int low, int high, class CommandOutput& output);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class CommandRegistry const& getRegistry() const;

    MCAPI void sendTelemetry(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI bool shouldSendTelemetry(class CommandOrigin const& origin) const;

    MCAPI static class Player* getPlayerFromOrigin(class CommandOrigin const& origin);

    MCAPI static bool isTemplateLockedAction(class CommandOrigin const& origin);

    MCAPI static bool isWildcard(class CommandSelectorBase const& selector);

    MCAPI static bool validData(int input, ushort& data, class CommandOutput& output);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI bool collectOptionalArguments$();

    MCAPI static std::string const& WILDCARD_TOKEN();

    // NOLINTEND
};
