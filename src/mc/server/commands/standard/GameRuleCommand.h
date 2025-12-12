#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class GameRule;
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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk895cad;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitProxy& operator=(InitProxy const&);
        InitProxy(InitProxy const&);
        InitProxy();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8beb94;
    ::ll::UntypedStorage<4, 4>  mUnk429d60;
    ::ll::UntypedStorage<4, 4>  mUnk4140a0;
    ::ll::UntypedStorage<1, 1>  mUnk7e7790;
    ::ll::UntypedStorage<1, 1>  mUnk4dbe3f;
    ::ll::UntypedStorage<1, 1>  mUnkf282fd;
    ::ll::UntypedStorage<1, 1>  mUnke07538;
    // NOLINTEND

public:
    // prevent constructor by default
    GameRuleCommand& operator=(GameRuleCommand const&);
    GameRuleCommand(GameRuleCommand const&);
    GameRuleCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~GameRuleCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void getGameRule(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void setGameRule(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    createJsonIndex(::std::string const& ruleName, ::GameRule const& rule, ::Json::Value& json, ::std::string* value);

    MCAPI static void setup(::CommandRegistry& registry, ::GameRuleCommand::InitProxy&& dependencies);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
