#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandFlag.h"
#include "mc/server/commands/CommandPermissionLevel.h"

class CommandRegistry;
class CommandOrigin;
class CommandOutput;

class Command {
public:
    // prevent constructor by default
    Command& operator=(Command const&);
    Command(Command const&);

    int                      mVersion{-1};       // this+0x8
    CommandRegistry const*   mRegistry{};        // this+0x10
    int                      mCommandSymbol{-1}; // this+0x18
    ::CommandPermissionLevel mPermissionLevel;   // this+0x1C
    CommandFlag              mFlags;             // this+0x1E

    Command() = default;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Command() = default;

    // vIndex: 1
    virtual bool collectOptionalArguments() { return true; }

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const = 0;

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

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI bool collectOptionalArguments$();

    MCAPI static std::string const& WILDCARD_TOKEN();

    // NOLINTEND
};
