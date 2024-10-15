#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class GameRuleCommand : public ::Command {
public:
    // GameRuleCommand inner types declare
    // clang-format off
    struct InitProxy;
    // clang-format on

    // GameRuleCommand inner types define
    struct InitProxy {
    public:
        // prevent constructor by default
        InitProxy& operator=(InitProxy const&);
        InitProxy(InitProxy const&);
        InitProxy();

    public:
        // NOLINTBEGIN
        MCAPI explicit InitProxy(class Level& level);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(class Level& level);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    GameRuleCommand& operator=(GameRuleCommand const&);
    GameRuleCommand(GameRuleCommand const&);
    GameRuleCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameRuleCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry, struct GameRuleCommand::InitProxy&& dependencies);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void getGameRule(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void setGameRule(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void createJsonIndex(
        std::string const&    ruleName,
        class GameRule const& rule,
        class Json::Value&    json,
        std::string*          value
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
